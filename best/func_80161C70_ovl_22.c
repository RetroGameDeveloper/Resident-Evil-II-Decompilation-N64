extern s32 func_80036038_ovl_01(void *, void *, void *, s32);
extern u8 D_801663D8_ovl_22[], D_801664A8_ovl_22[], D_80166578_ovl_22[], D_801665B8_ovl_22[], D_801665F8_ovl_22[];
s32 func_80161C70_ovl_22(void *arg0, s32 arg1) {
 s32 r;
 r=func_80036038_ovl_01(arg0, *(void**)((u8*)arg0+0x234), D_801663D8_ovl_22, arg1);
 r=func_80036038_ovl_01(arg0, *(void**)((u8*)arg0+0x234), D_801664A8_ovl_22, r);
 r=func_80036038_ovl_01(arg0, *(void**)((u8*)arg0+0x234), D_80166578_ovl_22, r);
 r=func_80036038_ovl_01(arg0, *(void**)((u8*)arg0+0x234), D_801665B8_ovl_22, r);
 r=func_80036038_ovl_01(arg0, *(void**)((u8*)arg0+0x234), D_801665F8_ovl_22, r);
 return r;
}
