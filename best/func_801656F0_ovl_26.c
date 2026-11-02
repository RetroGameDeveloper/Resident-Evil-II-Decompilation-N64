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

extern M2C_UNK D_800E7650_ovl_01;

void func_801656F0_ovl_26(void *arg0, u32 arg1, u32 arg2) {
    s32 var_a3;
    s32 var_t0;
    u32 var_a1;
    void *temp_v1;

    var_a1 = arg1;
    if (var_a1 < arg2) {
        var_t0 = var_a1 * 0x178;
        do {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x234) + var_t0;
            var_a3 = M2C_FIELD(temp_v1, s32 *, 0);
            if (M2C_FIELD(&D_800E7650_ovl_01, u8 *, 0x1962) & 8) {
                var_a3 |= 0x4A;
            }
            M2C_FIELD(temp_v1, s32 *, 0) = (s32) (var_a3 & 0xFFFF7FFF);
            var_a1 += 1;
            M2C_FIELD(temp_v1, s16 *, 0x138) = 0;
            M2C_FIELD(temp_v1, s16 *, 0x134) = 0x12C;
            M2C_FIELD(temp_v1, s16 *, 0x132) = -0x96;
            M2C_FIELD(temp_v1, s16 *, 0x136) = 0xA;
            M2C_FIELD(temp_v1, s16 *, 0x13C) = -0x64;
            M2C_FIELD(temp_v1, s32 *, 0x60) = 0x104010;
            M2C_FIELD(temp_v1, u16 *, 0x130) = (u16) M2C_FIELD(arg0, u16 *, 0x66);
            var_t0 += 0x178;
        } while (var_a1 < arg2);
    }
}
