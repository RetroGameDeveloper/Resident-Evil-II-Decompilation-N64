extern s32 D_800C7650_ovl_01;
extern s32 func_8003420C_ovl_01(void *, s32);

void func_801662F0_ovl_12(void *arg0) {
    u8 *p = (u8 *)arg0;
    u8 *st = p + 0x2B4;
    u8 *obj = *(u8 **)(p + 0x208);
    s32 state = st[9];
    s32 one = 1;

    if (state == one) goto advance;
    if (state >= 2) return;
    if (state != 0) return;
    st[9] = one;
    func_8003420C_ovl_01(obj, D_800C7650_ovl_01);
    p[0x207] = 0x5A;
advance:
    *(u16 *)(obj + 4) += 8;
    *(u16 *)(obj + 6) += 8;
    {
        s8 t = --p[0x207];
        if (t == 0)
            st[9] = 2;
    }
}
