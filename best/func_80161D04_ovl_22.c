void func_800362C0_ovl_01(void *, s32, void *);
void func_80036764_ovl_01(void *, s32);
extern u8 D_801663D8_ovl_22[], D_801664A8_ovl_22[], D_80166578_ovl_22[], D_801665B8_ovl_22[], D_801665F8_ovl_22[];
void func_80161D04_ovl_22(u8 *p) {
 func_800362C0_ovl_01(p,*(s32 *)(p+0x234),D_801663D8_ovl_22);
 func_800362C0_ovl_01(p,*(s32 *)(p+0x234),D_801664A8_ovl_22);
 func_800362C0_ovl_01(p,*(s32 *)(p+0x234),D_80166578_ovl_22);
 func_800362C0_ovl_01(p,*(s32 *)(p+0x234),D_801665B8_ovl_22);
 func_800362C0_ovl_01(p,*(s32 *)(p+0x234),D_801665F8_ovl_22);
 func_80036764_ovl_01(p,*(s32 *)(p+0x234));
}
