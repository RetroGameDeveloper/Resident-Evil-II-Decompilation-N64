extern s32 func_80162FE0_ovl_12(void *p, s32 a1, s32 a2);
extern void func_80089D34_ovl_01(void *p, s32 a1, s32 a2, s32 a3);

void func_801647B8_ovl_12(void *p, s32 a1, s32 a2) {
    u8 *q = p;
    *(s8 *)(q + 0x2C8) = 1;
    if (func_80162FE0_ovl_12(p, a1, a2) < 0) {
        *(s16 *)(q + 6) = 0x200;
        *(s32 *)(q + 0x1E8) = 0x15000F00;
        func_80089D34_ovl_01(p, a1, a2, 0x100);
    }
}
