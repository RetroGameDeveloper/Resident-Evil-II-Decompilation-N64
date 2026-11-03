extern u8 D_801719FC_ovl_07;
void func_8017001C_ovl_07(u32 arg0, s8 arg1, s32 arg2) {
    u8 *var_v1 = &D_801719FC_ovl_07;
    u32 var_a3 = 0;
    do {
        if ((arg0 >> var_a3) & 1) {
            var_v1[0] = arg1;
        } else if (arg2 & 0xFF) {
            var_v1[0] = 0;
        }
        if (var_v1[1] & 0x20) {
            var_v1[0] = 0;
        }
        var_a3 += 1;
        var_v1 += 0xC;
    } while (var_a3 < 0x1FU);
}
