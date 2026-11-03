s32 func_800439B8_ovl_01(s32 arg0, void *arg1, s32 arg2, s32 arg3);
extern u8 D_800C7650_ovl_01[];
extern u8 D_801611A8_ovl_03[];

void func_8015FC80_ovl_03(void) {
    volatile u32 base = 0x18000;
    u8 *p = D_800C7650_ovl_01 + base;

    *(s32 *)(p + 0x204) = func_800439B8_ovl_01(*(s32 *)(p + 0x204), D_801611A8_ovl_03, 0, 0);
}
