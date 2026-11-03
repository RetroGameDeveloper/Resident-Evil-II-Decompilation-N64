void func_800334F8_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_8008A974_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80032C9C_ovl_01(void *arg0, s32 arg1, s32 arg2);

typedef struct S_obj {
    u8 pad0[0x1A4];
    s32 unk_1A4;
    u8 pad1[0x40];
    u8 unk_1E8;
    s8 unk_1E9;
    s8 unk_1EA;
    u8 pad2[0x2D];
    s32 unk_218;
} S_obj;

s32 func_80036D44_ovl_01(S_obj *p, s32 arg1, s32 arg2, s32 arg3) {
    if (p->unk_1E8 != arg1) {
        p->unk_1E8 = arg1;
        p->unk_1E9 = 0;
        p->unk_1EA = arg2;
    }
    func_800334F8_ovl_01(p, p->unk_1A4, p->unk_218, 0);
    if (func_8008A974_ovl_01(p, p->unk_1A4, p->unk_218,
            (0x1000U / (u32)(arg2 + 1)) | (arg3 << 16)) != 0) {
        return 1;
    }
    func_80032C9C_ovl_01(p, 0, 0);
    return 0;
}
