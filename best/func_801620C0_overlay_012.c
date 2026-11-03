extern void (* volatile D_80166CB4_ovl_12[])(void);
s32 func_80077D48_ovl_01(s32 arg0, void *arg1);

void func_801620C0_overlay_012(void *arg0) {
    u8 *p = (u8 *)arg0;
    u32 *q;

    D_80166CB4_ovl_12[p[5]]();
    q = *(u32 **)(p + 0x214);
    if (*q & 0x40000) {
        func_80077D48_ovl_01(8, p);
    }
}
