s32 func_800377B0_ovl_01(s32, s32, s32, s16 *);
extern u8 D_80163D9C_ovl_27[];

void func_80163B38_ovl_27(void *arg0, s32 arg1, s32 arg2) {
    s16 out[3];
    s32 t;
    s32 base;
    u8 *rec;

    rec = D_80163D9C_ovl_27 + (arg2 & 0xFF) * 6;
    t = *(s16 *)((u8 *)arg0 + 0x66);
    base = *(s32 *)((u8 *)arg0 + 0x234) + (arg1 & 0xFF) * 0x178;
    out[0] = 0;
    out[1] = 0;
    out[2] = 0;
    func_800377B0_ovl_01((rec[0] << 24) | (rec[1] << 16) | *(u16 *)(rec + 4), t, base + 0x38, out);
}
