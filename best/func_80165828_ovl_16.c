extern void func_801658F4_ovl_16(void *);
extern u8 D_800E10D0_ovl_01;
extern s32 D_801674C0_ovl_16;
typedef void (*Fn)(void *, s32, s32);
extern volatile Fn D_80167478_ovl_16[];

void func_80165828_ovl_16(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = arg0;
    s32 c = 0xFF;
    if (p[5] != c) {
        s32 x = p[0xC];
        s32 hv;
        p[0x2CB] = *(volatile u8 *)(p + 5);
        hv = D_801674C0_ovl_16;
        *(u32 *)(p + 0x2C4) = (u32)&D_800E10D0_ovl_01;
        if (hv == x)
            D_801674C0_ovl_16 = 0;
        p[5] = c;
        p[0x2B5] = 2;
        func_801658F4_ovl_16(p);
        if (p[0x26E]) {
            *(u32 *)p &= ~0xE;
            *(u16 *)(p + 0x2C8) &= 0xFD0F;
        }
    }
    D_80167478_ovl_16[p[0x26E]](p, arg1, arg2);
}
