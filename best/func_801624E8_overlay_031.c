typedef void (*Dispatch)(void *, s32, s32);
extern Dispatch D_8016C388_ovl_31[];
extern Dispatch D_8016C3D0_ovl_31[];
void func_801624E8_overlay_031(void *arg0, s32 arg1, s32 arg2) {
    s32 index = *((u8 *)arg0 + 5);
    D_8016C388_ovl_31[index](arg0, arg1, arg2);
    D_8016C3D0_ovl_31[index](arg0, arg1, arg2);
}
