extern s32 D_80184E4C_ovl_02;
extern s32 D_80184E8C_ovl_02;

s32 func_8017F96C_ovl_02(void) {
    s32 var_a0 = func_8017BB30_ovl_02(5);
    s32 var_v1;
    s8 *var_v1_2;
    s8 temp_s0;

    if (var_a0 < 0x1F) {
        var_v1_2 = (s8 *)&D_80184E4C_ovl_02;
    } else {
        var_a0 = func_8017BB30_ovl_02(0xA) - 0x3E0;
        var_v1_2 = (s8 *)&D_80184E8C_ovl_02;
    }
    temp_s0 = var_v1_2[var_a0 * 2];
    func_8017BB68_ovl_02(temp_s0);
    var_v1 = 0;
    if (temp_s0 != 0) {
        var_v1 = func_8017BE48_ovl_02(temp_s0);
        if (!((var_v1 >> (temp_s0 - 1)) & 1)) {
            var_v1 = (var_v1 + 1) - (1 << temp_s0);
        }
    }
    return var_v1;
}
