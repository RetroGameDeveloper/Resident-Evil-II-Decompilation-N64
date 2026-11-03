extern u8 D_800E9118_ovl_01[];
extern u8 D_800C7650_ovl_01[];
extern u8 D_800E1898_ovl_01[];
s32 func_80066804_ovl_01(void *, u16, s32, s32);
s32 func_8004EBA4_ovl_01(void *, void *);
s32 func_8004F57C_ovl_01(void *, void *);

void func_8002751C_ovl_01(s8 arg0, s16 arg1) {
    u8 *p = D_800E9118_ovl_01;
    *(s16 *)(p + 0xD6) = arg1;
    *(s8 *)(p + 0xC8) = arg0;
}

void func_8004DCE8_ovl_01(u8 *s0, s32 arg1) {
    s32 v1 = *(s32 *)(s0 + 0x0);
    *(s32 *)(s0 + 0x1AC) = 0;
    if (!(v1 & 8) && *(s32 *)(s0 + 0x280) == 0) {
        s32 r;
        *(s32 *)(s0 + 0x0) = v1 & ~0x4000;
        r = func_80066804_ovl_01(s0 + 0x120, *(u16 *)(s0 + 0x12C), 1 << *(u8 *)(s0 + 0x1A2), arg1 | 0x1000000);
        *(s32 *)(s0 + 0x1AC) = r;
        *(s32 *)(s0 + 0x1B0) = *(s32 *)((u8 *)D_800C7650_ovl_01 + 0x18000 + 0x19B8);
    }
    *(u16 *)(s0 + 0x1B4) = *(u16 *)(s0 + 0x122);
    *(u16 *)(s0 + 0x1B6) = *(u16 *)(s0 + 0x12A);
}

u8 *func_8004ECFC_ovl_01(u8 *arg0) {
    u32 *end = (u32 *)((u8 *)D_800C7650_ovl_01 + 0x20F48);
    u8 *p;
    for (p = D_800E1898_ovl_01; (u32)p < *end; p += 0x368) {
        if ((*(s32 *)p & 0x101) != 0x101) {
            continue;
        }
        if (p[0x1A2] != arg0[0x1A2]) {
            continue;
        }
        if (*(u8 **)(arg0 + 0x280) == p) {
            continue;
        }
        if (func_8004EBA4_ovl_01(arg0, p)) {
            return p;
        }
    }
    return NULL;
}

void func_8004F4AC_ovl_01(u8 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    u8 *t0 = arg0 + 0x120;
    s32 old = *(s32 *)(arg0 + 0x28);
    s32 v = *arg1 - *(s16 *)(t0 + 0x10);
    if (arg2 < 0) {
        v = v + arg3;
    } else {
        v = v - arg3;
    }
    *(s32 *)(arg0 + 0x28) = v;
    *(s32 *)t0 = *(s32 *)t0 + (v - old);
    *(s32 *)(arg0 + 0x280) = func_8004F57C_ovl_01(arg0, t0);
}
