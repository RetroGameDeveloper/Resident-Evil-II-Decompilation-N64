s32 func_80165D94_ovl_30(u8 *arg0, s16 arg1) {
    s16 temp_a3;
    s32 var_a2;
    s16 var_t0;
    s32 var_v0;
    u16 temp_t1;
    u16 var_v0_2;

    temp_t1 = *(u16 *)(arg0 + 0x66);
    temp_a3 = *(u16 *)(arg0 + 0x2B6) - (temp_t1 & 0xFFF);
    var_t0 = temp_a3;
    var_a2 = temp_a3;
    if (temp_a3 < 0) {
        var_a2 = -temp_a3;
    }
    var_v0 = temp_a3;
    if (var_a2 >= arg1) {
        if (var_v0 < 0) {
            var_v0 = -temp_a3;
        }
        if (var_v0 >= 0x800) {
            var_t0 = -temp_a3;
        }
        if ((var_t0 << 0x10) <= 0) {
            var_v0_2 = (s16)temp_t1 - arg1;
        } else {
            var_v0_2 = (s16)temp_t1 + arg1;
        }
        *(u16 *)(arg0 + 0x66) = var_v0_2;
        return 0;
    }
    return 1;
}
