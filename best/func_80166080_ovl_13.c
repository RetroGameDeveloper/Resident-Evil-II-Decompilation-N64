extern s32 func_80033634_ovl_01(void);
extern s32 func_800377B0_ovl_01(s32, s32, void *, s16 *);
extern u8 D_800E8FC8_ovl_01[];

void func_80166080_ovl_13(void *arg0) {
    s16 out[3];
    s32 n;
    n = func_80033634_ovl_01();
    out[0] = *(u16 *)((u8 *)arg0 + 0x2A) + (s8)n;
    n = func_80033634_ovl_01();
    out[1] = *(u16 *)((u8 *)arg0 + 0x2E) + (s8)n;
    n = func_80033634_ovl_01();
    out[2] = *(u16 *)((u8 *)arg0 + 0x32) + (s8)n;
    n = func_80033634_ovl_01();
    func_800377B0_ovl_01(0x12800, (n & 0xFF) << 4, D_800E8FC8_ovl_01, out);
}
