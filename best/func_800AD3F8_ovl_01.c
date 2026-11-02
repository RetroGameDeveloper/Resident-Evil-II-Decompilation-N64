/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK func_800A5618_ovl_01();                     /* extern */
M2C_UNK func_800A5660_ovl_01();                     /* extern */
M2C_UNK func_800A5C8C_ovl_01(u16 *, s32);           /* extern */
extern s32 D_8014E10C;
extern u16 *D_8014E110;

s32 func_800AD3F8_ovl_01(s32 arg0) {
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_s0_2;
    s32 var_s4;
    s32 var_v0;
    s32 var_v1_3;
    u16 **var_s2;
    u16 **var_v1_2;
    u16 *var_s0;
    u16 *var_s1;
    u16 temp_v0;
    u16 var_v1;
    u32 var_s3;
    void *temp_v0_3;
    void *var_a1_2;

    var_a1 = 0;
    var_s3 = 0;
    if (D_8014E10C != 0) {
        var_s2 = &D_8014E110;
loop_2:
        var_s1 = *var_s2;
        var_v1 = *var_s1;
        var_s4 = 0;
        if (var_v1 != 0xFFFF) {
            var_s0 = var_s1 + 2;
            do {
                if (var_v1 == (arg0 & 0xFFFF)) {
                    temp_v0 = M2C_FIELD(var_s0, u16 *, 0) - 1;
                    M2C_FIELD(var_s0, u16 *, 0) = temp_v0;
                    var_a1 = 1;
                    if (!(temp_v0 & 0xFFFF)) {
                        func_800A5C8C_ovl_01(var_s1 + 0xC, M2C_FIELD(var_s0, s32 *, 2));
                        var_a1 = 1;
                    }
                }
                if (M2C_FIELD(var_s0, u16 *, 0) != 0) {
                    var_s4 = 1;
                }
                var_s1 += 0x1C;
                var_v1 = *var_s1;
                var_s0 += 0x1C;
            } while (var_v1 != 0xFFFF);
        }
        if (var_a1 & 0xFF) {
            var_v0 = 1;
            if (!(var_s4 & 0xFF)) {
                var_s0_2 = 0;
                if (D_8014E10C > 0) {
                    var_v1_2 = &D_8014E110;
loop_14:
                    if (*var_v1_2 != *var_s2) {
                        var_s0_2 += 1;
                        var_v1_2 += 0xC;
                        if (var_s0_2 < D_8014E10C) {
                            goto loop_14;
                        }
                    }
                }
                var_v0 = 1;
                if (var_s0_2 != D_8014E10C) {
                    func_800A5618_ovl_01();
                    var_v1_3 = var_s0_2 + 1;
                    if (var_v1_3 < D_8014E10C) {
                        temp_v0_2 = var_v1_3 * 0xC;
                        var_a1_2 = temp_v0_2 + &D_8014E110;
                        var_a0 = temp_v0_2 - 0xC;
                        do {
                            temp_v0_3 = var_a0 + &D_8014E110;
                            M2C_FIELD(temp_v0_3, s32 *, 0) = (s32) M2C_FIELD(var_a1_2, s32 *, 0);
                            M2C_FIELD(temp_v0_3, s32 *, 4) = (s32) M2C_FIELD(var_a1_2, s32 *, 4);
                            M2C_FIELD(temp_v0_3, s32 *, 8) = (s32) M2C_FIELD(var_a1_2, s32 *, 8);
                            var_a1_2 += 0xC;
                            var_v1_3 += 1;
                            var_a0 += 0xC;
                        } while (var_v1_3 < D_8014E10C);
                    }
                    D_8014E10C -= 1;
                    func_800A5660_ovl_01();
                    return 1;
                }
                /* Duplicate return node #24. Try simplifying control flow for better match */
                return var_v0;
            }
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return var_v0;
        }
        var_s3 += 1;
        var_s2 += 0xC;
        if (var_s3 >= (u32) D_8014E10C) {
            goto block_23;
        }
        goto loop_2;
    }
block_23:
    var_v0 = 0;
    return var_v0;
}
