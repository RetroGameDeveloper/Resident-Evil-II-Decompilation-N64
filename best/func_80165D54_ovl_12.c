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

extern M2C_UNK D_800E7650_ovl_01;
extern u8 D_80166ED0_ovl_12;

void func_80165D54_ovl_12(void *arg0) {
    s32 var_a1;
    u32 var_a2;
    u8 *var_v0;
    void *temp_v1;

    var_a2 = 0;
    M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 1);
    var_v0 = &D_80166ED0_ovl_12;
    do {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x234) + (*var_v0 * 0x178);
        var_a1 = M2C_FIELD(temp_v1, s32 *, 0);
        if (M2C_FIELD(&D_800E7650_ovl_01, u8 *, 0x1962) & 8) {
            var_a1 |= 0x4A;
        }
        M2C_FIELD(temp_v1, s32 *, 0) = var_a1;
        var_a2 += 1;
        M2C_FIELD(temp_v1, s16 *, 0x138) = 0;
        M2C_FIELD(temp_v1, s16 *, 0x134) = 0x320;
        M2C_FIELD(temp_v1, s16 *, 0x132) = -0x96;
        M2C_FIELD(temp_v1, s16 *, 0x136) = 0xA;
        M2C_FIELD(temp_v1, s16 *, 0x13C) = -0x64;
        M2C_FIELD(temp_v1, s32 *, 0x60) = 0x101040;
        M2C_FIELD(temp_v1, u16 *, 0x130) = (u16) M2C_FIELD(arg0, u16 *, 0x66);
        var_v0 = &(&D_80166ED0_ovl_12)[var_a2];
    } while (var_a2 < 7U);
}
