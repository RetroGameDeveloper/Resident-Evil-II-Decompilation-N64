extern s32 func_80033634_ovl_01(void);
extern s32 func_800377B0_ovl_01(s32, s32, void *, s16 *);
extern u8 D_800E8FC8_ovl_01[];

void func_80166158_ovl_13(void *arg0, s32 arg1) {
    s16 out[3];
    u8 *base;
    s32 n;
    s32 i;

    if (arg1 != 0) {
        base = D_800E8FC8_ovl_01;
        i = arg1 - 1;
        do {
            i--;
            n = func_80033634_ovl_01();
            out[0] = *(u16 *)((u8 *)arg0 + 0x2A) + ((s8)n << 2);
            n = func_80033634_ovl_01();
            out[1] = *(u16 *)((u8 *)arg0 + 0x2E) + ((s8)n << 2);
            n = func_80033634_ovl_01();
            out[2] = *(u16 *)((u8 *)arg0 + 0x32) + ((s8)n << 2);
            n = func_80033634_ovl_01();
            func_800377B0_ovl_01(0x0C000800, (n & 0xFF) << 4, base, out);
        } while (i != -1);
    }
}
