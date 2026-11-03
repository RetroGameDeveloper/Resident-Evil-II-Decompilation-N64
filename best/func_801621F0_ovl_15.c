extern s32 (*D_80165FF0_ovl_15[])(void *, s32, s32);
extern void func_8016600C_ovl_13(void);
extern s32 func_80036764_ovl_01_510(void *, s32, s32, s32);

void func_801621F0_ovl_15(void *arg0, s32 arg1, s32 arg2)
{
    u8 *p = arg0;

    D_80165FF0_ovl_15[p[5]](arg0, arg1, arg2);
    ((s32 (*)(void *, s32))func_80036764_ovl_01_510)(arg0, *(s32 *)(p + 0x2BC));
    *(s32 *)(p + 0x2BC) = *(s32 *)(p + 4);
    ((s32 (*)(void *, s32, s32))(u8 *)func_8016600C_ovl_13 + 4)[p[5]](arg0, arg1, arg2);
}
