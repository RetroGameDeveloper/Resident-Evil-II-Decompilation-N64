s32 func_800408F0_ovl_01(s16);
s32 func_80040998_ovl_01(s16);
void func_80040E88_ovl_01(void *, s32);

void func_80163448_ovl_21(u8 *arg0) {
    s32 v;
    s16 w;

    w = func_80032D44_ovl_01(-0x6270, -0x708, *(s16 *)(arg0 + 0x32), *(s16 *)(arg0 + 0x2E));
    *(u16 *)(arg0 + 0x2B4) = w;
    v = func_800408F0_ovl_01(w) * 0x708;
    if (v < 0) {
        v += 0xFFF;
    }
    *(s32 *)(arg0 + 0x30) = (v >> 12) - 0x6270;
    v = -(func_80040998_ovl_01(*(s16 *)(arg0 + 0x2B4)) * 0x708);
    if (v < 0) {
        v += 0xFFF;
    }
    *(s32 *)(arg0 + 0x2C) = (v >> 12) - 0x708;
    *(s16 *)(arg0 + 0x1DA) = 0xC00;
    *(s16 *)(arg0 + 0x1DC) = 0xC00 - *(u16 *)(arg0 + 0x2B4);
    func_80040E88_ovl_01(arg0 + 0x1D8, *(s32 *)(arg0 + 0x70));
}
