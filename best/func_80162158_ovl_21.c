typedef void (*Fn)(void *, s32, s32);
extern Fn D_8016388C_ovl_21[];
extern Fn D_801638A0_ovl_21[];
void func_80162158_ovl_21(void *arg0, s32 arg1, s32 arg2) {
    register void *p0=arg0;
    register s32 p1=arg1;
    register s32 p2=arg2;
    ((volatile Fn *)D_8016388C_ovl_21)[*((u8 *)p0+5)](p0,p1,p2);
    ((volatile Fn *)D_801638A0_ovl_21)[*((u8 *)p0+5)](p0,p1,p2);
}
