typedef void (*Fn)(void *, s32, s32);
extern Fn D_8016977C_ovl_29[];
extern Fn D_801697A4_ovl_29[];
void func_80162568_ovl_29(void *arg0, s32 arg1, s32 arg2) {
    register void *obj=arg0;
    register s32 a=arg1,b=arg2;
    ((volatile Fn *)D_8016977C_ovl_29)[*((u8 *)obj+5)](obj,a,b);
    ((volatile Fn *)D_801697A4_ovl_29)[*((u8 *)obj+5)](obj,a,b);
}
