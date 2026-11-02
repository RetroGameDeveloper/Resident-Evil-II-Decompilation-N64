extern u8 D_80166ED4_ovl_32[];

void func_8016690C_ovl_32(s32 arg0, s8 arg1, s8 arg2) {
    u8 *p = D_80166ED4_ovl_32 + (arg0 & 0xFF) * 0x1C;

    p[2] = arg1;
    p[3] = arg2;
}
