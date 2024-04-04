# StringCryptor
**This code is a C++ implementation of simple encryption and caching of encrypted strings.**
## **String encryption:**
- The code defines the EncryptedString class, designed to encrypt strings.
- Encryption occurs by applying a simple XOR algorithm to each character in the string.
- The encryption key initializes the internal state of the algorithm. After initialization, the algorithm XORs each character in the string with the current state to produce an encrypted character.
## **Caching encrypted strings:**
- To increase performance, a caching mechanism is provided. The Cache class stores encrypted strings and their decrypted versions.
- When an encrypted string is requested, the algorithm checks to see if it is already in the cache. If there is, then it simply returns the decrypted version from the cache.
- If the string is not found in the cache, the algorithm encrypts it and stores it in the cache for future use.
## **Encryption mechanism:**
- Encryption uses a simple algorithm based on bit operations.
- The algorithm XORs each character of the string with its current state (which depends on the encryption key and initialization vector).
- Since XOR is a reversible operation, decryption simply requires applying the same key to the encrypted string.
## **Caching mechanism:**
- The Cache class is a simple list for storing key-value pairs.
- It provides fast access to values ​​by key and supports removing least used elements on overflow.
## **Macros:**
- The encrypt and encrypt_once macros are provided for convenient string encryption. They allow you to use string encryption and enable/disable caching.

## **Using example:**
```cpp
#include <cstdio>
#include <Cryptor.h>
int main() {
  printf(encrypt("Hello World!"));
  return 0;
}
```
## [IDA Pro 7.0 output (Click)](Output.cpp)
## 
> [!WARNING]
> This code demonstrates an example implementation of a simple encryption system that caches encrypted data to improve performance. This encryption system does not provide a high level of security and is intended rather for educational or demonstration purposes.
