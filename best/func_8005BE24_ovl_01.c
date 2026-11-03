extern u16 D_80110EE4_ovl_01[];
extern u8 D_80110E1C_ovl_01[];
extern s8 D_80110EA4_ovl_01[];

void func_80040E88_ovl_01(void *arg0, void *arg1);

void func_8005C2AC_ovl_01(u8 *arg0) {
    u8 *base;
    u8 *p;

    if ((u32)((*(u16 *)(arg0 + 0x1AA) & 0xFFF) - 9) >= 3) {
        return;
    }
    base = *(u8 **)(arg0 + 0x234);
    p = base + 0x1D60;
    if (*(s16 *)(p + 0x11E) == 0xFF) {
        return;
    }
    *(u16 *)(p + 0x5C) = D_80110EE4_ovl_01[*(s8 *)(p + 0x112)];
    if (*(u16 *)(p + 0x5C) == 0x8000) {
        *(u16 *)(p + 0x5C) = 0;
        *(s16 *)(p + 0x11E) = 0xFF;
        return;
    }
    *(u8 *)(p + 0x112) = *(s8 *)(p + 0x112) + 1;
    func_80040E88_ovl_01(base + 0x1DB8, base + 0x1D68);
}

void func_8005BE24_ovl_01(u8 *arg0, s32 arg1, s16 arg2) {
    u8 *tab = D_80110E1C_ovl_01;
    s32 off;
    s32 t0;
    s32 r;
    s32 t1;
    u32 flag;

    t1 = arg1;
    off = ((s16)arg2 << 3) - 8;
    t0 = *(s32 *)(arg0 + 0) & 0x1FFFFFFF;
    *(s32 *)(arg0 + 0) = t0;
    r = ((*(s16 *)(tab + ((s8)D_80110EA4_ovl_01[*(u8 *)(arg0 + 8)] + 2) * 2 + off) + *(s32 *)(arg0 + 0x2C)) * *(s16 *)(arg0 + 0x27A)) >> 12;
    if (t1 < r + *(s16 *)(tab + off)) {
        flag = 0x80000000;
    } else if (r + *(s16 *)(tab + off + 2) < t1) {
        flag = 0x20000000;
    } else {
        flag = 0x40000000;
    }
    *(s32 *)(arg0 + 0) = t0 | flag;
}
