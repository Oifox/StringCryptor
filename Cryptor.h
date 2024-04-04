#include <array>
#include <algorithm>

namespace Encryption { // Created by Norka :D
    #ifdef __GNUC__ 
        #define NO_COMPILE __attribute__((always_inline)) inline 
    #else 
        #define NO_COMPILE __forceinline 
    #endif 

    template <typename Key, typename Value, unsigned int MaxSize>
    class Cache {
    private:
        struct Node {
            Key key;
            Value value;
            Node* prev;
            Node* next;
            Node(const Key& k, const Value& v) : key(k), value(v), prev(nullptr), next(nullptr) {}
        };

        Node* head;
        Node* tail;
        unsigned int size;

    public:
        NO_COMPILE Cache() : head(nullptr), tail(nullptr), size(0) {}

        NO_COMPILE ~Cache() {
            while (head != nullptr) {
                Node* next = head->next;
                delete head;
                head = next;
            }
        }

        NO_COMPILE void add(const Key& key, const Value& value) {
            Node* existingNode = findNode(key);
            if (existingNode != nullptr) {
                existingNode->value = value;
                moveNodeToEnd(existingNode);
            }
            else {
                Node* newNode = new Node(key, value);
                if (size >= MaxSize) {
                    Node* oldestNode = head;
                    removeNode(oldestNode);
                    delete oldestNode;
                    size--;
                }
                appendNodeToEnd(newNode);
                size++;
            }
        }

        NO_COMPILE bool contains(const Key& key) const {
            return findNode(key) != nullptr;
        }

        NO_COMPILE const Value& get(const Key& key) {
            Node* node = findNode(key);
            moveNodeToEnd(node);
            return node->value;
        }

    private:
        NO_COMPILE Node* findNode(const Key& key) const {
            Node* node = head;
            while (node != nullptr) {
                if (node->key == key) {
                    return node;
                }
                node = node->next;
            }
            return nullptr;
        }

        NO_COMPILE void moveNodeToEnd(Node* node) {
            if (node == tail) {
                return;
            }
            removeNode(node);
            appendNodeToEnd(node);
        }

        NO_COMPILE void removeNode(Node* node) {
            if (node == head) {
                head = node->next;
            }
            else {
                node->prev->next = node->next;
            }
            if (node == tail) {
                tail = node->prev;
            }
            else {
                node->next->prev = node->prev;
            }
        }

        NO_COMPILE void appendNodeToEnd(Node* node) {
            if (tail == nullptr) {
                head = node;
            }
            else {
                tail->next = node;
                node->prev = tail;
            }
            tail = node;
        }
    };

    template <unsigned int Key, unsigned int Size>
    struct EncryptedString {
    private:
        std::array<uint16_t, 3> R{};
        std::array<uint32_t, 3> S{};

        std::array<uint8_t, Size> ciphertext{};
        std::array<char, Size> data{};

        static Cache<unsigned int, std::array<char, Size>, 1000> cachedvalues;
        bool doCache;
        bool cached;

        NO_COMPILE uint32_t popcount(uint32_t n) {
            uint32_t count = 0;
            while (n > 0) {
                count += n & 1;
                n >>= 1;
            }
            return count;
        }

        NO_COMPILE constexpr void initialize(const uint8_t* key, const uint8_t* iv) {
            R[0] = R[1] = R[2] = S[0] = S[1] = S[2] = 0;

            for (int i = 0; i < 8; i++) {
                R[0] |= (static_cast<uint16_t>(key[i]) & 1u) << i;
                R[1] |= (static_cast<uint16_t>(key[i + 8]) & 1u) << i;
                R[2] |= (static_cast<uint16_t>(iv[i]) & 1u) << i;
            }

            for (int i = 0; i < 64; i++) {
                uint16_t majority = (R[0] & R[1]) ^ (R[0] & R[2]) ^ (R[1] & R[2]);

                if (popcount(R[0] & 1u) == 1)
                    S[0] ^= R[0];

                if (popcount(R[1] & 1u) == 1)
                    S[1] ^= R[1];

                if (popcount(R[2] & 1u) == 1)
                    S[2] ^= R[2];

                R[0] ^= ((R[0] >> 8) ^ majority);
                R[1] ^= ((R[1] >> 10) ^ majority);
                R[2] ^= ((R[2] >> 10) ^ majority);

                S[1] ^= R[0];
                S[2] ^= R[1];
                S[0] ^= majority;
            }
        }

        NO_COMPILE constexpr void process(const uint8_t* plaintext, uint8_t* ciphertext, int length) {
            while (length--)
                *ciphertext++ = *plaintext++ ^ (S[0] ^ S[1] ^ S[2] & 1u);
        }

        template <unsigned int Count>
        NO_COMPILE constexpr std::array<uint8_t, Count> generate() {
            constexpr uint64_t seed = 0xC6BC279692B5CC83 ^ Key ^ Count;
            uint64_t result = seed;

            std::array<uint8_t, Count> iv{};
            std::generate(iv.begin(), iv.end(), [&result, seed]() {
                result += 127;
                result ^= result >> 7;
                result *= seed;
                result ^= result >> 8;
                return static_cast<uint8_t>(result);
                }
            );

            return iv;
        }

        NO_COMPILE void update() {
            auto key = generate<16>();
            auto iv = generate<8>();

            for (auto& x : key)
                x ^= Key;

            for (auto& y : iv)
                y ^= Key;

            initialize(key.data(), iv.data());
        }

    public:
        NO_COMPILE constexpr EncryptedString(const char* str, bool cache = false) {
            doCache = cache;
            cached = doCache && cachedvalues.contains(Key ^ Size);

            if (cached)
                return;

            update();
            process(reinterpret_cast<const uint8_t*>(str), ciphertext.data(), Size - 1);
        }

        NO_COMPILE const char* decrypt() {
            if (cached)
                return cachedvalues.get(Key ^ Size).data();

            update();
            process(ciphertext.data(), reinterpret_cast<uint8_t*>(data.data()), Size - 1);

            if (doCache)
                cachedvalues.add(Key ^ Size, data);

            return data.data();
        }
    };

    template <unsigned int Key, unsigned int Size>
    Cache<unsigned int, std::array<char, Size>, 1000> EncryptedString<Key, Size>::cachedvalues;
};

#define encrypt(str) Encryption::EncryptedString<__COUNTER__, sizeof(str)>(str).decrypt()  
#define encrypt_once(str) Encryption::EncryptedString<__COUNTER__, sizeof(str)>(str, true).decrypt()
