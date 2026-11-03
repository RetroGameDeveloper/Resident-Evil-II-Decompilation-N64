extern s32 func_80032C08_ovl_01(void *, s32, s32);
extern s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern s32 func_8016687C_ovl_12(void *);

s32 func_80162FE0_ovl_12(void *arg0, s32 arg1, s32 arg2) {
    s32 var_s1;

    func_80032C08_ovl_01(arg0, 0, 0);
    *(u16 *)((u8 *)arg0 + 0x1E2) = *(u16 *)((u8 *)arg0 + 0x1E2) + 0x28;
    var_s1 = func_8016687C_ovl_12(arg0) == 1;
    if (*(s16 *)((u8 *)arg0 + 0x1E2) >= 0 && var_s1 == 0) {
        var_s1 = -1;
    } else if (*(u8 *)((u8 *)arg0 + 0x1E9) != 0) {
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
    }
    return var_s1;
}
