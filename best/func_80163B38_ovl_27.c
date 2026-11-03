extern u8 D_80163D9C_ovl_27[];
s32 func_800377B0_ovl_01(s32, s32, s32, s16 *);
void func_80163B38_ovl_27(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *rec;
    s16 result[3];
    s32 t;
    u8 *p;
    s32 packed;

    rec = D_80163D9C_ovl_27 + (arg2 & 0xFF) * 6;
    t = *(s16 *)(arg0 + 0x66);
    p = *(u8 **)(arg0 + 0x234) + (arg1 & 0xFF) * 0x178;
    result[0] = 0;
    result[1] = 0;
    result[2] = 0;
    packed = ((s32)rec[0] << 24) | ((s32)rec[1] << 16) | *(u16 *)(rec + 4);
    func_800377B0_ovl_01(packed, t, (s32)(p + 0x38), result);
}
