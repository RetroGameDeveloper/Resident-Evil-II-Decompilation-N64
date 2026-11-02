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
extern s32 D_8010D8E0_ovl_01;

void func_800537D4_ovl_01(s16 arg0, s16 arg1, s16 arg2, s16 arg3) {
    s32 *var_v0;
    s32 var_t0;
    s32 var_t0_2;
    void *temp_v1;

    var_t0 = 3;
    temp_v1 = D_8010D8E0_ovl_01 + ((M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x18538) << 6) + 0x52A0);
    var_v0 = temp_v1 + 0x30;
    do {
        *var_v0 = -0x100;
        var_t0 -= 1;
        var_v0 -= 0x10;
    } while (var_t0 >= 0);
    M2C_FIELD(temp_v1, s16 *, 4) = arg0;
    M2C_FIELD(temp_v1, s16 *, 8) = arg2;
    M2C_FIELD(temp_v1, s16 *, 0x14) = arg0;
    M2C_FIELD(temp_v1, s16 *, 0x18) = arg2;
    M2C_FIELD(temp_v1, s16 *, 0x24) = arg0;
    M2C_FIELD(temp_v1, s16 *, 0x28) = arg0;
    M2C_FIELD(temp_v1, s16 *, 0x34) = arg2;
    M2C_FIELD(temp_v1, s16 *, 0x38) = arg2;
    M2C_FIELD(temp_v1, s16 *, 6) = arg1;
    M2C_FIELD(temp_v1, s16 *, 0xA) = arg1;
    M2C_FIELD(temp_v1, s16 *, 0x16) = arg3;
    M2C_FIELD(temp_v1, s16 *, 0x1A) = arg3;
    M2C_FIELD(temp_v1, s16 *, 0x26) = arg1;
    M2C_FIELD(temp_v1, s16 *, 0x2A) = arg3;
    M2C_FIELD(temp_v1, s16 *, 0x36) = arg1;
    M2C_FIELD(temp_v1, s16 *, 0x3A) = arg3;
    var_t0_2 = 2;
    do {
        var_t0_2 -= 1;
    } while (var_t0_2 >= 0);
}
