extern u8 D_80148B80[];
extern u8 D_80148C00[];
extern u8 D_80148C20[];
extern u8 D_8014CF20[];

void func_800AC76C_ovl_01(u8 *arg0) {
    *(u8 *)(arg0 + 0xC4) = 7;
    *(u8 *)(arg0 + 0xD6) = 0xA;
    *(u8 *)(arg0 + 0xE8) = 0x83;
    *(u8 *)(arg0 + 0xFA) = 0x80;
    *(u8 *)(arg0 + 0x130) = 0x40;
    *(u8 *)(arg0 + 0x142) = 0x41;
    *(u8 *)(arg0 + 0x154) = 0x5B;
    *(u8 *)(arg0 + 0xC5) = 0;
    *(u16 *)(arg0 + 0xC6) = 0x100;
    *(u8 *)(arg0 + 0xD4) = 1;
    *(u8 *)(arg0 + 0xD7) = 0;
    *(u16 *)(arg0 + 0xD8) = 0x100;
    *(u8 *)(arg0 + 0xE6) = 1;
    *(u8 *)(arg0 + 0xE9) = 0;
    *(u16 *)(arg0 + 0xEA) = 0x100;
    *(u8 *)(arg0 + 0xF8) = 1;
    *(u8 *)(arg0 + 0xFB) = 0;
    *(u16 *)(arg0 + 0xFC) = 0x100;
    *(u8 *)(arg0 + 0x10A) = 1;
    *(u8 *)(arg0 + 0x11E) = 1;
    *(u8 *)(arg0 + 0x11F) = 0;
    *(u16 *)(arg0 + 0x120) = 0x100;
    *(u8 *)(arg0 + 0x12E) = 1;
    *(u8 *)(arg0 + 0x131) = 0;
    *(u16 *)(arg0 + 0x132) = 0x100;
    *(u8 *)(arg0 + 0x140) = 1;
    *(u8 *)(arg0 + 0x143) = 0;
    *(u16 *)(arg0 + 0x144) = 0x100;
    *(u8 *)(arg0 + 0x152) = 1;
    *(u8 *)(arg0 + 0x155) = 0;
    *(u16 *)(arg0 + 0x156) = 0x100;
    *(u8 *)(arg0 + 0x164) = 1;
    *(u8 *)(arg0 + 0x10C) = 0x84;
    *(u8 *)(arg0 + 0x10D) = 0;
    *(u16 *)(arg0 + 0x10E) = 0x100;
    *(u8 *)(arg0 + 0x11C) = 1;
}

u8 func_800AC684_ovl_01(s32 arg0, s32 arg1) {
    s32 t;

    t = arg1 & 0xFF;
    if (t == 0xFF) {
        return D_80148C00[arg0 & 0xFF];
    }
    return D_80148B80[(arg0 & 0xFF) + t * 0x10];
}

void func_800AC63C_ovl_01(s32 arg0, s32 arg1, u8 arg2) {
    s32 t;

    t = arg1 & 0xFF;
    if (t != 0xFF) {
        D_80148B80[(arg0 & 0xFF) + t * 0x10] = arg2;
    } else {
        D_80148C00[arg0 & 0xFF] = arg2;
    }
}

void func_800AC5B4_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 t;

    t = arg2 & 0xFF;
    if (t != 0xFF) {
        D_80148C20[(arg0 & 0xFF) + (arg1 & 0xFF) * 0x86 + t * 0x860] = arg3 & 0x7F;
    } else {
        D_8014CF20[(arg0 & 0xFF) + (arg1 & 0xFF) * 0x86] = arg3 & 0x7F;
    }
}
