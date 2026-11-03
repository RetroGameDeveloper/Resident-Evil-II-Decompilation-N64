extern s32 D_800C527C_ovl_01;
extern u8 D_800DF650_ovl_01[];
extern u8 D_8012BF38_ovl_01[];
extern u8 D_801311F8_ovl_01[];
void func_800478E8_ovl_01(s32 arg0, s32 arg1, s32 arg2);
s32 func_800439B8_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

void func_80096D70_ovl_01(void) {
    u32 a1;
    u32 v1;
    s32 s1;
    s32 i;
    u8 *s0;
    s16 s5;
    s16 s4;
    s32 res;
    u8 *obj;

    v1 = D_800C527C_ovl_01 + 0x3C004;
    a1 = D_800C527C_ovl_01 + 0x3BB64;
    if (a1 < v1) {
        a1 = v1;
    }
    s1 = a1 + 0x758;
    i = 0x11;
    obj = D_800DF650_ovl_01;
    s0 = D_801311F8_ovl_01 + 0x44;
    s5 = *(s16 *)(D_8012BF38_ovl_01 + 0x38);
    s4 = *(s16 *)(D_8012BF38_ovl_01 + 0x3A);
    do {
        s0 -= 4;
        i -= 1;
        func_800478E8_ovl_01(s1,
                             (*(u16 *)(s0 + 0) + s5) & 0xFFFF,
                             (*(u16 *)(s0 + 2) + s4) & 0xFFFF);
        res = func_800439B8_ovl_01(*(s32 *)(obj + 0x204), s1, 0, 0);
        s1 += 0x14;
        *(s32 *)(obj + 0x204) = res;
    } while (i != 0);
}
