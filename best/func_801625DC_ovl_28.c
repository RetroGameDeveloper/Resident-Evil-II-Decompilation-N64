typedef void (*Fn)(void *, s32, s32);
extern Fn D_80168EE8_ovl_28[];
extern Fn D_80168F20_ovl_28[];
void func_801625DC_ovl_28(void *arg0, s32 arg1, s32 arg2) {
    register void *obj=arg0;
    register s32 a=arg1,b=arg2;
    ((volatile Fn *)D_80168EE8_ovl_28)[*((u8 *)obj+5)](obj,a,b);
    ((volatile Fn *)D_80168F20_ovl_28)[*((u8 *)obj+5)](obj,a,b);
}
