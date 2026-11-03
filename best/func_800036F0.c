extern s32 func_800011A0(s32, s32, u32);
extern s32 func_80002314(s32, u8 *, s32, u32);

s32 func_800036F0(u8 *arg0, s32 arg1, u32 arg2) {
    u32 old = arg2;
    u8 *a3;
    s32 v0;
    s32 sh;
    if (!arg0) return -2;
    a3 = *(u8 **)(arg0 + 0x1C);
    if (!a3) return -2;
    if (*(s32 *)a3 != 6) return -2;
    v0 = func_800011A0(1, arg1, arg2);
    if (v0 != *(s32 *)(arg0 + 0x30)) return -3;
    a3 = *(u8 **)(arg0 + 0x1C);
    *(s32 *)(arg0 + 0x30) = 1;
    sh = *(s32 *)(a3 + 0x10);
    if (arg2 >> sh) {
        arg2 = (1u << sh) - 1;
        arg1 += old - arg2;
    }
    func_80002314(*(s32 *)(a3 + 0x14), arg0, arg1, arg2);
    *(s32 *)(*(u8 **)(arg0 + 0x1C)) = 7;
    return 0;
}
