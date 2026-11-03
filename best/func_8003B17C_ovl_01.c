extern void *D_800EBB34_ovl_01;
extern s32 D_801126AC_ovl_01;
s32 func_80069F4C_ovl_01(s32 *a, s32 b, s32 c, s32 d);
void func_8003B17C_ovl_01(void) {
    s32 a[3];
    u8 *p = D_800EBB34_ovl_01;
    a[0] = *(s16 *)(p + 0x34);
    a[1] = *(s16 *)(p + 0x36);
    a[2] = *(s16 *)(p + 0x38);
    func_80069F4C_ovl_01(a, 2, 0x2000, 0);
    if (D_801126AC_ovl_01) {
        p = D_800EBB34_ovl_01;
        p[0] = 0;
        *(u16 *)(p + 0x18) = 0;
    }
}
