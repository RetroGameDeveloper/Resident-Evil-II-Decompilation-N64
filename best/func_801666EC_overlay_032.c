extern u8 D_800C7650_ovl_01[];
extern s32 func_80084514_ovl_01(void);

void func_801666EC_overlay_032(void) {
    volatile u32 base = (u32)D_800C7650_ovl_01 + 0x18000;
    u8 *p = (u8 *)base;
    s32 v = func_80084514_ovl_01();
    *(s32 *)(*(u8 **)(p + 0x1D44) + 4) = v;
    *(s32 *)(*(u8 **)(p + 0x1D48) + 4) = v;
    *(s32 *)(*(u8 **)(p + 0x1D4C) + 4) = v;
    *(s32 *)(*(u8 **)(p + 0x1D50) + 4) = v;
}
