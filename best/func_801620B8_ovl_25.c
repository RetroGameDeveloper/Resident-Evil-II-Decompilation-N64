typedef void (*Fn)(void *, s32, s32);
extern Fn D_80163018_ovl_25[];
extern Fn D_80163038_ovl_25[];
void func_801620B8_ovl_25(void *arg0, s32 arg1, s32 arg2) {
    register void *p0=arg0;
    register s32 p1=arg1;
    register s32 p2=arg2;
    ((volatile Fn *)D_80163018_ovl_25)[*((u8 *)p0+5)](p0,p1,p2);
    ((volatile Fn *)D_80163038_ovl_25)[*((u8 *)p0+5)](p0,p1,p2);
}
