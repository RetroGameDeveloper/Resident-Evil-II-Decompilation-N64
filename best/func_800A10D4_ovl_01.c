typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
void func_800A5618_ovl_01();
void func_800A5660_ovl_01(s32, s32, s32);
extern u8 D_801362B0_ovl_01;
extern u8 D_8013BC30[];
void func_800A10D4_ovl_01(s32 arg0, s16 arg1) {
    u8 *var_v1;
    s32 temp_a1;
    s32 temp_a2;
    s32 var_a0_2;
    s32 var_a1;
    u32 var_a0;
    void *temp_v0;
    if (D_801362B0_ovl_01 != 0) {
        func_800A5618_ovl_01();
        var_a0 = 0;
        temp_a1 = arg0;
        temp_a2 = temp_a1 & 0x7FFFFFFF;
        var_v1 = D_8013BC30;
loop_2:
        if ((M2C_FIELD(var_v1, u8 *, 0xFC1) != 0) || (M2C_FIELD(var_v1, s32 *, 0) != temp_a2)) {
            var_a0 += 1;
            var_v1 += 0xFF8;
            if (var_a0 >= 8U) {
                var_a0_2 = -1;
            } else {
                goto loop_2;
            }
        } else {
            var_a0_2 = var_a0 | (temp_a1 & 0x80000000);
        }
        var_a1 = var_a0_2;
        if (var_a1 != -1) {
            if (var_a1 >= 0) {
                temp_v0 = (var_a1 * 0xFF8) + D_8013BC30;
                M2C_FIELD(temp_v0, s16 *, 0xFC2) = arg1;
            } else {
                var_a1 &= 0x7FFFFFFF;
                temp_v0 = (var_a1 * 0xFF8) + D_8013BC30;
                M2C_FIELD(temp_v0, s16 *, 0xFEC) = arg1;
                M2C_FIELD(temp_v0, u8 *, 0xFEE) = (u8) (M2C_FIELD(temp_v0, u8 *, 0xFEE) | 0x20);
            }
        }
        func_800A5660_ovl_01(var_a0_2, var_a1, temp_a2);
    }
}
