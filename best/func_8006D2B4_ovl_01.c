extern u8 D_800C7650_ovl_01[];
extern u8 D_80113A70_ovl_01[];

s32 func_80032B40_ovl_01(s32 *arg0, s16 *arg1) {
    if ((u32)arg1[2] < (u32)(arg0[0] - arg1[0])) {
        return 0;
    }
    if ((u32)arg1[3] < (u32)(arg0[2] - arg1[1])) {
        return 0;
    }
    return 1;
}

void func_8006CC88_ovl_01(u8 *arg0, s32 arg1) {
    u32 v = *(u32 *)(arg0 + 0x1C);
    s32 hi = (v >> 16) + arg1;
    s32 lo = (v & 0xFFFF) + arg1;
    hi %= 65535;
    lo %= 65535;
    *(u32 *)(arg0 + 0x1C) = (hi << 16) | lo;
}

s32 func_8006D138_ovl_01(s32 arg0) {
    s32 v0 = 0x10;
    s32 v1 = v0;
    if (arg0 != v1) {
        v0 = 0x80;
    }
    return v0;
}

void func_8006D2B4_ovl_01(void) {
    u32 *p = (u32 *)(D_80113A70_ovl_01 + 0x1458);
    u32 v = *p;
    u32 t = v * 2;
    v = (v + (t >> 16)) & 0xFFFF;
    v = v + (t & 0xFFFF0000);
    *p = v;
    *(s16 *)(D_800C7650_ovl_01 + 0x21602) = (s16)v;
}
