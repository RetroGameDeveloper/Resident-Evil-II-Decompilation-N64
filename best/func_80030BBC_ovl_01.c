/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */
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

M2C_UNK func_8002FCC4_ovl_01(void *, void *, s32);  /* extern */
M2C_UNK func_8002FCE8_ovl_01(void *, void *, s32);  /* extern */

void func_80030BBC_ovl_01(void *arg0, u32 arg1) {
    s32 temp_s1;
    s32 temp_s1_2;
    s32 var_v0;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s2;
    void *temp_v0;
    void *temp_v0_2;
    void *var_a1;
    void *var_a1_2;
    void *var_s0;
    void *var_s0_2;

    temp_s2 = M2C_FIELD(arg0, void **, 4);
    if (arg1 >= 2U) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 0xB;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u32 *, 0x18) = arg1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0)();
    }
    var_v0 = arg1 * 4;
    if (arg1 == 1) {
        var_s0 = M2C_FIELD(temp_s2, void **, 0x40);
        if (var_s0 != NULL) {
            do {
                if (M2C_FIELD(var_s0, s32 *, 0x20) != 0) {
                    M2C_FIELD(var_s0, s32 *, 0x20) = 0;
                    M2C_FIELD(var_s0, M2C_UNK (**)(void *, void *), 0x30)(arg0, var_s0 + 0x28);
                }
                var_s0 = M2C_FIELD(var_s0, void **, 0x24);
            } while (var_s0 != NULL);
        }
        var_s0_2 = M2C_FIELD(temp_s2, void **, 0x44);
        M2C_FIELD(temp_s2, void **, 0x40) = NULL;
        if (var_s0_2 != NULL) {
            do {
                if (M2C_FIELD(var_s0_2, s32 *, 0x20) != 0) {
                    M2C_FIELD(var_s0_2, s32 *, 0x20) = 0;
                    M2C_FIELD(var_s0_2, M2C_UNK (**)(void *, void *), 0x30)(arg0, var_s0_2 + 0x28);
                }
                var_s0_2 = M2C_FIELD(var_s0_2, void **, 0x24);
            } while (var_s0_2 != NULL);
        }
        M2C_FIELD(temp_s2, void **, 0x44) = NULL;
        var_v0 = arg1 * 4;
    }
    temp_v0 = temp_s2 + var_v0;
    var_a1 = M2C_FIELD(temp_v0, void **, 0x38);
    M2C_FIELD(temp_v0, void **, 0x38) = NULL;
loop_13:
    if (var_a1 != NULL) {
        temp_s0 = M2C_FIELD(var_a1, void **, 0);
        temp_s1 = M2C_FIELD(var_a1, s32 *, 4) + M2C_FIELD(var_a1, s32 *, 8) + 0x10;
        func_8002FCE8_ovl_01(arg0, var_a1, temp_s1);
        var_a1 = temp_s0;
        M2C_FIELD(temp_s2, s32 *, 0x48) = (s32) (M2C_FIELD(temp_s2, s32 *, 0x48) - temp_s1);
        goto loop_13;
    }
    temp_v0_2 = temp_s2 + (arg1 * 4);
    var_a1_2 = M2C_FIELD(temp_v0_2, void **, 0x30);
    M2C_FIELD(temp_v0_2, void **, 0x30) = NULL;
loop_16:
    if (var_a1_2 != NULL) {
        temp_s0_2 = M2C_FIELD(var_a1_2, void **, 0);
        temp_s1_2 = M2C_FIELD(var_a1_2, s32 *, 4) + M2C_FIELD(var_a1_2, s32 *, 8) + 0x10;
        func_8002FCC4_ovl_01(arg0, var_a1_2, temp_s1_2);
        var_a1_2 = temp_s0_2;
        M2C_FIELD(temp_s2, s32 *, 0x48) = (s32) (M2C_FIELD(temp_s2, s32 *, 0x48) - temp_s1_2);
        goto loop_16;
    }
}
