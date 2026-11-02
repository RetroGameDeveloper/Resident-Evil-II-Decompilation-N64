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

extern M2C_UNK D_80110E1C_ovl_01;
extern M2C_UNK D_80110EA4_ovl_01;

void func_8005BE24_ovl_01(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_t0;
    s32 var_v0;
    void *temp_a2_2;

    temp_t0 = M2C_FIELD(arg0, s32 *, 0) & 0x1FFFFFFF;
    M2C_FIELD(arg0, s32 *, 0) = temp_t0;
    temp_a2 = ((s32) (arg2 << 0x10) >> 0xD) - 8;
    temp_a2_2 = temp_a2 + &D_80110E1C_ovl_01;
    temp_a0 = (s32) ((*(((*(M2C_FIELD(arg0, u8 *, 8) + &D_80110EA4_ovl_01) + 2) * 2) + temp_a2 + &D_80110E1C_ovl_01) + M2C_FIELD(arg0, s32 *, 0x2C)) * M2C_FIELD(arg0, s16 *, 0x27A)) >> 0xC;
    var_v0 = 0x80000000;
    if (arg1 >= (temp_a0 + M2C_FIELD(temp_a2_2, s16 *, 0))) {
        var_v0 = 0x20000000;
        if ((temp_a0 + M2C_FIELD(temp_a2_2, s16 *, 2)) >= arg1) {
            var_v0 = 0x40000000;
        }
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_t0 | var_v0);
}
