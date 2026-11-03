extern s32 (* volatile D_80166564_ovl_23[])();
extern s32 (* volatile D_80166588_ovl_23[])();
void func_80163588_ovl_23(void *arg0, s32 arg1, s32 arg2) {
    s32 (*f0)();
    s32 (*f1)();
    s32 saved;
    f0 = D_80166564_ovl_23[((u8 *)arg0)[5]];
    saved = arg2;
    f0();
    f1 = D_80166588_ovl_23[((u8 *)arg0)[5]];
    f1(arg0, arg1, saved);
    func_80036764_ovl_01_510(arg0, *(s32 *)((u8 *)arg0 + 0x2B4), arg1, arg2);
    *(s32 *)((u8 *)arg0 + 0x2B4) = *(s32 *)((u8 *)arg0 + 4);
}
