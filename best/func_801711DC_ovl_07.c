extern volatile u8 D_800E9128_ovl_01[];

void func_801711DC_ovl_07(s32 arg0, s16 arg1) {
    u8 *p = (u8 *)((u32)D_800E9128_ovl_01 + (u32)(arg0 * 0x2C));
    *(volatile s16 *)p = arg1;
}
