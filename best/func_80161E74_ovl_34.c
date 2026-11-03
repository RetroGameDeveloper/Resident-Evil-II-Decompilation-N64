typedef void (*Dispatch)(void *, s32, s32);
extern Dispatch D_80162598_ovl_34[];
extern Dispatch D_801625A0_ovl_34[];
void func_80161E74_ovl_34(void *arg0, s32 arg1, s32 arg2) {
    volatile Dispatch *p = D_80162598_ovl_34;
    p[((u8 *)arg0)[5]](arg0, arg1, arg2);
    p = D_801625A0_ovl_34;
    p[((u8 *)arg0)[5]](arg0, arg1, arg2);
}
