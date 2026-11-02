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

M2C_UNK func_800765CC_ovl_01();                     /* extern */
M2C_UNK func_800824A4_ovl_01(void *, void *, s32);  /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80065064_ovl_01(void) {
    s32 *temp_a1;
    s32 *temp_v0;
    s32 *temp_v0_3;
    s32 *temp_v0_4;
    s32 *temp_v0_5;
    s32 *temp_v0_6;
    s32 *temp_v1;
    s32 temp_a0;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_s0;
    s32 temp_s6;
    s32 temp_v0_2;
    s32 temp_v1_3;
    s32 var_a2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s5;
    s32 var_v0;
    u32 temp_s7;
    u32 var_s4;
    void *temp_v1_2;

    temp_v1 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 **, 0x60);
    var_s4 = 0;
    if (temp_v1 != NULL) {
        var_s5 = 0;
        var_s2 = 0;
        temp_s7 = M2C_FIELD(temp_v1, u32 *, 4);
        temp_s6 = temp_s7 - 1;
        var_s1 = *(temp_v1 + M2C_FIELD(temp_v1, s32 *, 0));
loop_2:
        if (var_s4 < temp_s7) {
            temp_v0 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 **, 0x60);
            temp_a2 = *temp_v0;
            temp_v1_2 = var_s2 + temp_v0 + temp_a2;
            temp_v0_2 = M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A38);
            temp_s0 = M2C_FIELD(temp_v1_2, s32 *, 0);
            if (temp_v0_2 < 0) {
                var_s2 += 8;
            } else {
                if (var_s1 != temp_s0) {
                    var_a2 = temp_a2 - temp_s0;
                    if (var_s4 != temp_s6) {
                        var_a2 = M2C_FIELD(temp_v1_2, s32 *, 0xC) - temp_s0;
                    }
                    temp_a1 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 **, 0x60);
                    func_800824A4_ovl_01(temp_a1 + var_s1, temp_a1 + temp_s0, var_a2);
                    temp_a2_2 = temp_s0 - var_s1;
                    temp_v0_3 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 **, 0x60);
                    temp_a1_2 = var_s5 * 8;
                    temp_a0 = *temp_v0_3;
                    *(temp_a1_2 + temp_v0_3 + temp_a0) = *(var_s2 + temp_v0_3 + temp_a0) - temp_a2_2;
                    temp_v0_4 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 **, 0x60);
                    temp_v1_3 = *temp_v0_4;
                    M2C_FIELD((temp_v1_3 + (temp_a1_2 + temp_v0_4)), s32 *, 4) = (s32) (M2C_FIELD((temp_v1_3 + (var_s2 + temp_v0_4)), s32 *, 4) - temp_a2_2);
                }
                if (var_s4 != temp_s6) {
                    temp_v0_5 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 **, 0x60);
                    var_v0 = M2C_FIELD((var_s2 + temp_v0_5 + *temp_v0_5), s32 *, 8) - temp_s0;
                } else {
                    var_v0 = *M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 **, 0x60) - temp_s0;
                }
                var_s1 += var_v0;
                var_s5 += 1;
                var_s2 += 8;
            }
            var_s4 += 1;
            M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A38) = (s32) (temp_v0_2 * 2);
            goto loop_2;
        }
        temp_v0_6 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 **, 0x60);
        func_800824A4_ovl_01(temp_v0_6 + var_s1, temp_v0_6 + *temp_v0_6, var_s5 * 8);
        *M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 **, 0x60) = var_s1;
        M2C_FIELD(M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 **, 0x60), s32 *, 4) = var_s5;
        func_800765CC_ovl_01();
    }
}
