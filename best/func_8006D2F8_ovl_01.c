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

extern M2C_UNK D_800C7650_ovl_01;

void func_8006D2F8_ovl_01(void) {
    s32 var_a0;
    s32 var_a0_2;
    u8 temp_a0;
    void *var_a1;

    var_a1 = &D_800C7650_ovl_01 + 0x1A248;
    var_a0 = 0x20;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x184A0) = 0;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x184A4) = 0;
    do {
        M2C_FIELD(var_a1, s32 *, 0) = 0;
        M2C_FIELD(var_a1, s8 *, 0x1E1) = 0;
        var_a0 -= 1;
        var_a1 += 0x368;
    } while (var_a0 != 0);
    temp_a0 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), u8 *, 2);
    var_a0_2 = temp_a0 - 1;
    if (temp_a0 != 0) {
        do {
            var_a0_2 -= 1;
        } while (var_a0_2 != 0);
    }
}
