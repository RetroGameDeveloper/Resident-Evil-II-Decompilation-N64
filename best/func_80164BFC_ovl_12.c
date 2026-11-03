s32 func_801630BC_ovl_12(void *);
extern u8 D_800C7650_ovl_01[];

void func_80164BFC_ovl_12(void *arg0) {
    if (*(s32 *)((u8 *)arg0 + 0x2C) + *(s16 *)((u8 *)arg0 + 0x134) <= *(s32 *)((u8 *)arg0 + 0x2C)) {
        *(s32 *)arg0 &= -9;
    }
    if (func_801630BC_ovl_12(arg0) != 0) {
        ((u8 *)arg0)[5] = 2;
        *(s16 *)((u8 *)arg0 + 6) = 0;
        ((u8 *)arg0)[0x2B9] = 0;
        ((u8 *)arg0)[0x2C8] = 0;
        ((u8 *)arg0)[0x26F] &= 0x7F;
        ((u8 *)arg0)[0x1A2] = *(volatile u8 *)(D_800C7650_ovl_01 + 0x19C22);
    }
}
