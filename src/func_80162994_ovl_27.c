s32 func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, u32 arg3);
s32 func_80033634_ovl_01(void);
void D_80033678(void *);
u8 func_801639B0_ovl_27(void *, s32);

void func_80162994_ovl_27(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *)arg0;

    if (p[7] == 0) {
        p[7] = 1;
        *(s32 *)(p + 0x1E8) = 0x04000700;
        *(s16 *)(p + 0x66) = 0x400;
        p[0x2C5] = 0;
    }
    if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0) {
        *(s16 *)(p + 6) = 0;
        *(s8 *)(p + 0x2BE) = (func_80033634_ovl_01() & 0xF) + 0x1E;
        *(s16 *)(p + 0x66) = 0x800;
    }
    D_80033678(arg0);
    if ((*(s32 *)(*(u32 **)(p + 0x214)) & 0x20000) && (p[0x2C5] == 0)) {
        p[0x2C5] = func_801639B0_ovl_27(arg0, 1);
    }
}
