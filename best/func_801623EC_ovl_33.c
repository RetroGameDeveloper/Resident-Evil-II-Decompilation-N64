typedef void (*Dispatch)(void *, s32, s32);
extern Dispatch D_801670B8_ovl_33[];
extern Dispatch D_801670F8_ovl_33[];
void func_801623EC_ovl_33(void *arg0, s32 arg1, s32 arg2) {
    volatile Dispatch *p = D_801670B8_ovl_33;
    p[((u8 *)arg0)[5]](arg0, arg1, arg2);
    p = D_801670F8_ovl_33;
    p[((u8 *)arg0)[5]](arg0, arg1, arg2);
}
