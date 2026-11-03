extern s32 func_8008797C_ovl_01(void *, void *, s32);

void func_8007A934_ovl_01(void *arg0) {
    u8 *p = arg0;
    u16 v = *(u16 *)(p + 0x1AA);

    if (v & 0x100) {
        u8 *b = *(u8 **)(p + 0x234);
        u8 *src = b + 0x1780;
        u8 *dst = b + 0x178;

        *(u16 *)(p + 0x1AA) = v & 0xFEFF;
        *(volatile s32 *)(dst + 0xA8) = *(volatile s32 *)(src + 0xA8);
        *(volatile s32 *)(dst + 0xAC) = *(volatile s32 *)(src + 0xAC);
        *(volatile s32 *)(dst + 0xB0) = *(volatile s32 *)(src + 0xB0);
        *(volatile s32 *)(dst + 0xB4) = *(volatile s32 *)(src + 0xB4);
        *(volatile u16 *)(dst + 0xC4) = *(volatile u16 *)(src + 0xC4);
        *(volatile u16 *)(dst + 0xC6) = *(volatile u16 *)(src + 0xC6);
        *(volatile s32 *)(dst + 0xCC) = *(volatile s32 *)(src + 0xCC);
        *(volatile s32 *)(dst + 0xC8) = *(volatile s32 *)(src + 0xC8);
        *(s32 *)(b + 0x1780) = 0;
        *(s32 *)(*(u8 **)(p + 0x234) + 0x2F0) = 0;
        *(s32 *)(*(u8 **)(p + 0x234) + 0x468) = 0;
        *(s32 *)(*(u8 **)(p + 0x234) + 0x5E0) = 0;
        *(s32 *)(*(u8 **)(p + 0x234) + 0x758) = 0;
        *(s32 *)(*(u8 **)(p + 0x234) + 0x8D0) = 0;
        *(s32 *)(*(u8 **)(p + 0x234) + 0xA48) = 0;
        func_8008797C_ovl_01(p, *(u8 **)(p + 0x234) + 0xBC0, 1);
        func_8008797C_ovl_01(p, *(u8 **)(p + 0x234), 1);
        func_8008797C_ovl_01(p, *(u8 **)(p + 0x234) + 0xD38, 1);
        func_8008797C_ovl_01(p, *(u8 **)(p + 0x234) + 0xEB0, 1);
        func_8008797C_ovl_01(p, *(u8 **)(p + 0x234) + 0x11A0, 1);
        func_8008797C_ovl_01(p, *(u8 **)(p + 0x234) + 0x1318, 1);
    }
}
