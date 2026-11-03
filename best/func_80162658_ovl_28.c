typedef void (*Fn)(void *, s32, s32);
extern Fn D_80168F58_ovl_28[];
void func_80162658_ovl_28(void *arg0, s32 arg1, s32 arg2) {
    void *p;
    s32 x;
    s32 y;
    p=arg0; x=arg1; y=arg2;
    D_80168F58_ovl_28[*((u8 *)p+5)](p,x,y);
    D_80168F58_ovl_28[*((u8 *)p+5)](p,x,y);
}
