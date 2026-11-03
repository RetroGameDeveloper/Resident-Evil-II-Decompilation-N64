extern u16 D_80110EE4_ovl_01[];
extern u8 D_80110E1C_ovl_01[];
extern u8 D_80110EA4_ovl_01[];

void func_80040E88_ovl_01(void *arg0, void *arg1);

void func_8005C294_ovl_01(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 0x234) + 0x1D60;

    *(s16 *)(p + 0x11C) = 0;
    *(s8 *)(p + 0x112) = 0;
    *(s16 *)(p + 0x11E) = 0;
}

void func_8005C35C_ovl_01(u8 *arg0) {
    u8 *s0;
    u8 *base;
    s16 v;

    if ((*(u16 *)(arg0 + 0x1AA) & 0xFFF) != 0x12) {
        return;
    }
    base = *(u8 **)(arg0 + 0x234);
    s0 = base + 0x1780;
    if (*(u8 *)(arg0 + 8) & 1) {
        s0 = base + 0x1D60;
    }
    if (*(s8 *)(s0 + 0x112) == 0) {
        v = *(u16 *)(s0 + 0x11E) - 8;
        *(u16 *)(s0 + 0x11E) = v;
        if (v < 0) {
            *(u16 *)(s0 + 0x11E) = 0;
        }
    } else {
        v = *(u16 *)(s0 + 0x11E) + 0x20;
        *(u16 *)(s0 + 0x11E) = v;
        if (v >= 0x201) {
            *(u16 *)(s0 + 0x11E) = 0x200;
        }
    }
    *(u16 *)(s0 + 0x5A) = *(u16 *)(s0 + 0x5A) + *(u16 *)(s0 + 0x11E);
    func_80040E88_ovl_01(s0 + 0x58, s0 + 8);
    *(s8 *)(s0 + 0x112) = 0;
}

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
    s32 t0;
    s32 off;
    s16 *tbl;
    s32 r;
    u32 flag;

    t0 = *(s32 *)(arg0 + 0) & 0x1FFFFFFF;
    *(s32 *)(arg0 + 0) = t0;
    off = ((s16)arg2 << 3) - 8;
    tbl = (s16 *)(D_80110E1C_ovl_01 + off);
    r = ((tbl[*(s8 *)(D_80110EA4_ovl_01 + *(u8 *)(arg0 + 8)) + 2] + *(s32 *)(arg0 + 0x2C)) * *(s16 *)(arg0 + 0x27A)) >> 12;
    if (arg1 < r + tbl[0]) {
        flag = 0x80000000;
    } else if (r + tbl[1] < arg1) {
        flag = 0x20000000;
    } else {
        flag = 0x40000000;
    }
    *(s32 *)(arg0 + 0) = t0 | flag;
}
