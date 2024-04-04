int __cdecl main(int argc, const char **argv, const char **envp)
{
  __int64 v3; // r9
  char *v4; // rdx
  _QWORD *v5; // rax
  __int128 *v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 *v10; // rdx
  unsigned __int64 v11; // rcx
  int v12; // r11d
  int v13; // esi
  int v14; // ebx
  __int64 v15; // r13
  unsigned __int16 v16; // r12
  int v17; // edi
  unsigned __int16 v18; // r14
  int v19; // r10d
  unsigned __int16 v20; // r9
  int v21; // edx
  unsigned int v22; // ecx
  int v23; // edx
  unsigned int v24; // ecx
  int v25; // edx
  unsigned int v26; // ecx
  int v27; // edx
  unsigned int v28; // edi
  int v29; // esi
  char v30; // cl
  __int16 v31; // r12
  unsigned int v32; // r10d
  int v33; // r11d
  __int16 v34; // r14
  unsigned __int16 v35; // r8
  int v36; // ebx
  unsigned __int16 v37; // r15
  unsigned int v38; // ecx
  int v39; // edx
  unsigned int v40; // ecx
  int v41; // edx
  unsigned int v42; // ecx
  char v43; // r11
  char *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  char *v47; // rdx
  __int64 *v48; // rdx
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rcx
  __int128 *v52; // rdx
  unsigned __int64 v53; // rcx
  int v54; // r11d
  int v55; // edi
  int v56; // esi
  __int64 v57; // r13
  unsigned __int16 v58; // r12
  int v59; // ebx
  unsigned __int16 v60; // r14
  unsigned __int16 v61; // dx
  int v62; // r10d
  unsigned __int16 v63; // r9
  int v64; // r8d
  unsigned int v65; // ecx
  int v66; // r8d
  unsigned int v67; // eax
  int v68; // r8d
  unsigned int v69; // ecx
  int v70; // r8d
  unsigned int v71; // ebx
  int v72; // edi
  char v73; // cl
  __int16 v74; // r12
  unsigned int v75; // r10d
  int v76; // r11d
  __int16 v77; // r14
  unsigned __int16 v78; // dx
  int v79; // esi
  unsigned __int16 v80; // r15
  unsigned int v81; // ecx
  int v82; // r8d
  unsigned int v83; // ecx
  unsigned int v84; // ecx
  int v85; // ecx
  char v86; // r11
  char v87; // r11
  _QWORD *v88; // rcx
  _DWORD *v89; // rbx
  int v90; // eax
  _QWORD *v91; // rcx
  bool v92; // zf
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v96; // [rsp+20h] [rbp-60h]
  unsigned __int64 v97; // [rsp+28h] [rbp-58h]
  __int64 v98; // [rsp+30h] [rbp-50h]
  __int64 v99; // [rsp+38h] [rbp-48h] BYREF
  _DWORD *v100; // [rsp+40h] [rbp-40h]
  __int64 v101; // [rsp+48h] [rbp-38h] BYREF
  __int64 v102; // [rsp+50h] [rbp-30h] BYREF
  __int128 v103; // [rsp+58h] [rbp-28h] BYREF
  __int128 v104; // [rsp+68h] [rbp-18h] BYREF
  __int64 v105; // [rsp+78h] [rbp-8h] BYREF

  v4 = (char *)Block;
  LODWORD(v96) = 0;
  WORD2(v96) = 0;
  v97 = 0i64;
  v98 = 0i64;
  LOBYTE(v99) = 0;
  *(_DWORD *)((char *)&v99 + 1) = 0;
  v5 = Block;
  *(_WORD *)((char *)&v99 + 5) = 256;
  if ( Block )
  {
    while ( *(_DWORD *)v5 != 5 )
    {
      v5 = (_QWORD *)v5[3];
      if ( !v5 )
        goto LABEL_4;
    }
    HIBYTE(v99) = 1;
LABEL_36:
    v44 = v4;
    if ( v4 )
    {
      while ( *(_DWORD *)v44 != 5 )
      {
        v44 = (char *)*((_QWORD *)v44 + 3);
        if ( !v44 )
          goto LABEL_39;
      }
    }
    else
    {
LABEL_39:
      v44 = 0i64;
    }
    v45 = qword_1400056E8;
    if ( v44 != (char *)qword_1400056E8 )
    {
      v3 = *((_QWORD *)v44 + 3);
      if ( v44 == v4 )
      {
        Block = (void *)*((_QWORD *)v44 + 3);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)v44 + 2) + 24i64) = v3;
        v45 = qword_1400056E8;
      }
      v46 = *((_QWORD *)v44 + 2);
      if ( v44 == (char *)v45 )
      {
        qword_1400056E8 = *((_QWORD *)v44 + 2);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)v44 + 3) + 16i64) = v46;
        v46 = qword_1400056E8;
      }
      if ( !v46 )
      {
        Block = v44;
        v47 = v44 + 4;
        qword_1400056E8 = (__int64)v44;
        goto LABEL_107;
      }
      *(_QWORD *)(v46 + 24) = v44;
      *((_QWORD *)v44 + 2) = qword_1400056E8;
      qword_1400056E8 = (__int64)v44;
    }
    v47 = v44 + 4;
    goto LABEL_107;
  }
LABEL_4:
  HIBYTE(v99) = 0;
  v6 = &v103;
  v7 = 0xC6BC279692B5CC93ui64;
  v103 = 0i64;
  do
  {
    v8 = 0xC6BC279692B5CC93ui64 * (((v7 + 127) >> 7) ^ (v7 + 127));
    v7 = (v8 >> 8) ^ v8;
    *(_BYTE *)v6 = v7;
    v6 = (__int128 *)((char *)v6 + 1);
  }
  while ( v6 != &v104 );
  v101 = 0i64;
  v9 = 0xC6BC279692B5CC8Bui64;
  v10 = &v101;
  do
  {
    v11 = 0xC6BC279692B5CC8Bui64 * (((v9 + 127) >> 7) ^ (v9 + 127));
    v9 = (v11 >> 8) ^ v11;
    *(_BYTE *)v10 = v9;
    v10 = (__int64 *)((char *)v10 + 1);
  }
  while ( v10 != &v102 );
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 32i64;
  v16 = v103 & 1 | (2 * (BYTE1(v103) & 1)) | (4 * (BYTE2(v103) & 1)) | (8 * (BYTE3(v103) & 1)) | (16 * (BYTE4(v103) & 1)) | (32 * (BYTE5(v103) & 1)) | ((BYTE6(v103) & 1) << 6) | ((BYTE7(v103) & 1) << 7);
  v17 = v16;
  envp = (const char **)(HIBYTE(v101) & 1);
  v18 = BYTE8(v103) & 1 | (2 * (BYTE9(v103) & 1)) | (4 * (BYTE10(v103) & 1)) | (8 * (BYTE11(v103) & 1)) | (16 * (BYTE12(v103) & 1)) | (32 * (BYTE13(v103) & 1)) | ((BYTE14(v103) & 1) << 6) | ((HIBYTE(v103) & 1) << 7);
  LOWORD(envp) = v101 & 1 | (2 * (BYTE1(v101) & 1)) | (4 * (BYTE2(v101) & 1)) | (8 * (BYTE3(v101) & 1)) | (16 * (BYTE4(v101) & 1)) | (32 * (BYTE5(v101) & 1)) | ((BYTE6(v101) & 1) << 6) | ((_WORD)envp << 7);
  v19 = v18;
  do
  {
    v20 = v18 & (unsigned __int16)envp ^ v16 & (v18 ^ (unsigned __int16)envp);
    v21 = 0;
    v22 = v17 & 1;
    if ( (v17 & 1) != 0 )
    {
      do
      {
        v21 += v22 & 1;
        v22 >>= 1;
      }
      while ( v22 );
      if ( v21 == 1 )
        v14 ^= v17;
    }
    v23 = 0;
    v24 = v19 & 1;
    if ( (v19 & 1) != 0 )
    {
      do
      {
        v23 += v24 & 1;
        v24 >>= 1;
      }
      while ( v24 );
      if ( v23 == 1 )
        v13 ^= v19;
    }
    v25 = 0;
    v26 = (unsigned __int8)envp & 1;
    if ( ((unsigned __int8)envp & 1) != 0 )
    {
      do
      {
        v25 += v26 & 1;
        v26 >>= 1;
      }
      while ( v26 );
      if ( v25 == 1 )
        v12 ^= (unsigned __int16)envp;
    }
    v27 = 0;
    v28 = (unsigned __int16)(v20 ^ v16 ^ HIBYTE(v16));
    v29 = v28 ^ v13;
    v30 = v20 ^ v16 ^ HIBYTE(v16);
    v31 = v20 ^ v16 ^ HIBYTE(v16);
    v32 = (unsigned __int16)(v20 ^ v18 ^ (v18 >> 10));
    v33 = v32 ^ v12;
    v34 = v20 ^ v18 ^ (v18 >> 10);
    v35 = v20 ^ ((unsigned __int16)envp >> 10) ^ (unsigned __int16)envp;
    v36 = v20 ^ v14;
    v37 = v32 & v35 ^ v28 & (v32 ^ v35);
    v38 = v30 & 1;
    if ( v38 )
    {
      do
      {
        v27 += v38 & 1;
        v38 >>= 1;
      }
      while ( v38 );
      if ( v27 == 1 )
        v36 ^= v28;
    }
    v39 = 0;
    v40 = v32 & 1;
    if ( (v32 & 1) != 0 )
    {
      do
      {
        v39 += v40 & 1;
        v40 >>= 1;
      }
      while ( v40 );
      if ( v39 == 1 )
        v29 ^= v32;
    }
    v41 = 0;
    v42 = v35 & 1;
    if ( (v35 & 1) != 0 )
    {
      do
      {
        v41 += v42 & 1;
        v42 >>= 1;
      }
      while ( v42 );
      if ( v41 == 1 )
        v33 ^= v35;
    }
    v14 = v37 ^ v36;
    v16 = v37 ^ (v28 >> 8) ^ v31;
    v18 = v37 ^ (v32 >> 10) ^ v34;
    v3 = v37 ^ (v35 >> 10);
    v17 = v16;
    v19 = v18;
    v13 = v16 ^ v29;
    v12 = v18 ^ v33;
    LOWORD(v96) = v16;
    LOWORD(envp) = v37 ^ (v35 >> 10) ^ v35;
    WORD1(v96) = v18;
    --v15;
  }
  while ( v15 );
  LODWORD(v98) = v12;
  WORD2(v96) = (_WORD)envp;
  v97 = __PAIR64__(v13, v14);
  v43 = v13 ^ v12 & 1;
  BYTE4(v98) = v14 ^ v43 ^ 0x74;
  BYTE5(v98) = v14 ^ v43 ^ 0x65;
  BYTE6(v98) = v14 ^ v43 ^ 0x73;
  HIBYTE(v98) = BYTE4(v98);
  if ( HIBYTE(v99) )
  {
    v4 = (char *)Block;
    goto LABEL_36;
  }
  v48 = (__int64 *)&v104;
  v49 = 0xC6BC279692B5CC93ui64;
  v104 = 0i64;
  do
  {
    v50 = 0xC6BC279692B5CC93ui64 * (((v49 + 127) >> 7) ^ (v49 + 127));
    v49 = (v50 >> 8) ^ v50;
    *(_BYTE *)v48 = v49;
    v48 = (__int64 *)((char *)v48 + 1);
  }
  while ( v48 != &v105 );
  v102 = 0i64;
  v51 = 0xC6BC279692B5CC8Bui64;
  v52 = (__int128 *)&v102;
  do
  {
    v53 = 0xC6BC279692B5CC8Bui64 * (((v51 + 127) >> 7) ^ (v51 + 127));
    v51 = (v53 >> 8) ^ v53;
    *(_BYTE *)v52 = v51;
    v52 = (__int128 *)((char *)v52 + 1);
  }
  while ( v52 != &v103 );
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 32i64;
  v58 = v104 & 1 | (2 * (BYTE1(v104) & 1)) | (4 * (BYTE2(v104) & 1)) | (8 * (BYTE3(v104) & 1)) | (16 * (BYTE4(v104) & 1)) | (32 * (BYTE5(v104) & 1)) | ((BYTE6(v104) & 1) << 6) | ((BYTE7(v104) & 1) << 7);
  v59 = v58;
  v60 = BYTE8(v104) & 1 | (2 * (BYTE9(v104) & 1)) | (4 * (BYTE10(v104) & 1)) | (8 * (BYTE11(v104) & 1)) | (16 * (BYTE12(v104) & 1)) | (32 * (BYTE13(v104) & 1)) | ((BYTE14(v104) & 1) << 6) | ((HIBYTE(v104) & 1) << 7);
  v61 = v102 & 1 | (2 * (BYTE1(v102) & 1)) | (4 * (BYTE2(v102) & 1)) | (8 * (BYTE3(v102) & 1)) | (16 * (BYTE4(v102) & 1)) | (32 * (BYTE5(v102) & 1)) | ((BYTE6(v102) & 1) << 6) | ((HIBYTE(v102) & 1) << 7);
  v62 = v60;
  do
  {
    v63 = v60 & v61 ^ v58 & (v60 ^ v61);
    v64 = 0;
    v65 = v59 & 1;
    if ( (v59 & 1) != 0 )
    {
      do
      {
        v64 += v65 & 1;
        v65 >>= 1;
      }
      while ( v65 );
      if ( v64 == 1 )
        v56 ^= v59;
    }
    v66 = 0;
    v67 = v62 & 1;
    if ( (v62 & 1) != 0 )
    {
      do
      {
        v66 += v67 & 1;
        v67 >>= 1;
      }
      while ( v67 );
      if ( v66 == 1 )
        v55 ^= v62;
    }
    v68 = 0;
    v69 = v61 & 1;
    if ( (v61 & 1) != 0 )
    {
      do
      {
        v68 += v69 & 1;
        v69 >>= 1;
      }
      while ( v69 );
      if ( v68 == 1 )
        v54 ^= v61;
    }
    v70 = 0;
    v71 = (unsigned __int16)(v63 ^ v58 ^ HIBYTE(v58));
    v72 = v71 ^ v55;
    v73 = v63 ^ v58 ^ HIBYTE(v58);
    v74 = v63 ^ v58 ^ HIBYTE(v58);
    v75 = (unsigned __int16)(v63 ^ v60 ^ (v60 >> 10));
    v76 = v75 ^ v54;
    v77 = v63 ^ v60 ^ (v60 >> 10);
    v78 = v63 ^ (v61 >> 10) ^ v61;
    v79 = v63 ^ v56;
    v80 = v75 & v78 ^ v71 & (v75 ^ v78);
    v81 = v73 & 1;
    if ( v81 )
    {
      do
      {
        v70 += v81 & 1;
        v81 >>= 1;
      }
      while ( v81 );
      if ( v70 == 1 )
        v79 ^= v71;
    }
    v82 = 0;
    v83 = v75 & 1;
    if ( (v75 & 1) != 0 )
    {
      do
      {
        v82 += v83 & 1;
        v83 >>= 1;
      }
      while ( v83 );
      if ( v82 == 1 )
        v72 ^= v75;
    }
    envp = 0i64;
    v84 = v78 & 1;
    if ( (v78 & 1) != 0 )
    {
      do
      {
        envp = (const char **)((v84 & 1) + (unsigned int)envp);
        v84 >>= 1;
      }
      while ( v84 );
      if ( (_DWORD)envp == 1 )
        v76 ^= v78;
    }
    v58 = v80 ^ (v71 >> 8) ^ v74;
    v60 = v80 ^ (v75 >> 10) ^ v77;
    v3 = v80 ^ (v78 >> 10);
    v59 = v58;
    v85 = v79 ^ v80;
    v62 = v60;
    v55 = v58 ^ v72;
    LOWORD(v96) = v58;
    v54 = v60 ^ v76;
    WORD1(v96) = v60;
    v61 = v80 ^ (v78 >> 10) ^ v78;
    v56 = v85;
    --v57;
  }
  while ( v57 );
  LODWORD(v98) = v54;
  v86 = v54 & 1;
  WORD2(v96) = v61;
  v97 = __PAIR64__(v55, v85);
  BYTE1(v99) = v55 ^ BYTE4(v98) ^ v85 ^ v86;
  BYTE2(v99) = v55 ^ BYTE5(v98) ^ v85 ^ v86;
  v87 = v85 ^ v86;
  BYTE3(v99) = v55 ^ BYTE6(v98) ^ v87;
  BYTE4(v99) = v55 ^ BYTE4(v98) ^ v87;
  if ( BYTE6(v99) )
  {
    v88 = Block;
    if ( Block )
    {
      while ( *(_DWORD *)v88 != 5 )
      {
        v88 = (_QWORD *)v88[3];
        if ( !v88 )
          goto LABEL_86;
      }
      *((_DWORD *)v88 + 1) = *(_DWORD *)((char *)&v99 + 1);
      *((_BYTE *)v88 + 8) = BYTE5(v99);
      v93 = qword_1400056E8;
      if ( v88 != (_QWORD *)qword_1400056E8 )
      {
        if ( v88 == Block )
        {
          Block = (void *)v88[3];
        }
        else
        {
          *(_QWORD *)(v88[2] + 24i64) = v88[3];
          v93 = qword_1400056E8;
        }
        v94 = v88[2];
        if ( v88 == (_QWORD *)v93 )
        {
          qword_1400056E8 = v88[2];
        }
        else
        {
          *(_QWORD *)(v88[3] + 16i64) = v94;
          v94 = qword_1400056E8;
        }
        if ( v94 )
        {
          *(_QWORD *)(v94 + 24) = v88;
          v88[2] = qword_1400056E8;
        }
        else
        {
          Block = v88;
        }
        qword_1400056E8 = (__int64)v88;
      }
    }
    else
    {
LABEL_86:
      v89 = operator new(0x20ui64);
      v100 = v89;
      *v89 = 5;
      v89[1] = *(_DWORD *)((char *)&v99 + 1);
      *((_BYTE *)v89 + 8) = BYTE5(v99);
      *((_QWORD *)v89 + 2) = 0i64;
      *((_QWORD *)v89 + 3) = 0i64;
      v90 = dword_1400056F0;
      if ( (unsigned int)dword_1400056F0 >= 0x3E8 )
      {
        v91 = Block;
        v92 = Block == (void *)qword_1400056E8;
        Block = (void *)*((_QWORD *)Block + 3);
        if ( v92 )
          qword_1400056E8 = v91[2];
        else
          *(_QWORD *)(v91[3] + 16i64) = v91[2];
        j_j_free(v91);
        v90 = --dword_1400056F0;
      }
      if ( qword_1400056E8 )
      {
        *(_QWORD *)(qword_1400056E8 + 24) = v89;
        *((_QWORD *)v89 + 2) = qword_1400056E8;
        v90 = dword_1400056F0;
      }
      else
      {
        Block = v89;
      }
      qword_1400056E8 = (__int64)v89;
      dword_1400056F0 = v90 + 1;
    }
  }
  v47 = (char *)&v99 + 1;
LABEL_107:
  printf(&unk_140003328, v47, envp, v3, v96, v97, v98, v99, v100);
  return 0;
}