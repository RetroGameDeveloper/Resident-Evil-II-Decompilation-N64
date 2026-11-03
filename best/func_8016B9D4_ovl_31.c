extern u8 D_8016C600_ovl_31;
s32 func_800362C0_ovl_01(void *, s32, void *);
s32 func_80036764_ovl_01(void *, s32);

void func_8016B9D4_ovl_31(void *arg0) {
    s32 p = *(s32 *)((u8 *)arg0 + 0x234) + 0x2630;
    func_800362C0_ovl_01(arg0, p, &D_8016C600_ovl_31);
    func_80036764_ovl_01(arg0, p);
}
