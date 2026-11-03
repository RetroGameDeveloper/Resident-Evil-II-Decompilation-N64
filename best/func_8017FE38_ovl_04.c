typedef struct S_pk { s32 unk0; s8 unk4; s8 unk5; } __attribute__((packed)) S_pk;
extern S_pk D_8018032C_ovl_04;
extern s32 func_8017FF00_ovl_04(S_pk *, s32, s32, S_pk *);
s32 func_8017FE38_ovl_04(s32 arg0){
    S_pk local = D_8018032C_ovl_04;
    *(u8 *)((u8 *)&local + 2) += arg0;
    return func_8017FF00_ovl_04(&local, local.unk4, local.unk5, &D_8018032C_ovl_04) ^ 1;
}
