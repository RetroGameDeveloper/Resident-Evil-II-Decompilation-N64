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

void func_80166BF0_ovl_17(void *arg0, s32 arg1) {
    s32 var_a2;
    u8 temp_v1;
    void *temp_a3;

    temp_a3 = arg0 + 0x2B4;
    temp_v1 = M2C_FIELD(temp_a3, u8 *, 0x18);
    var_a2 = arg1;
    if (temp_v1 & 1) {
        M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + arg1);
    } else {
        if (!(temp_v1 & 2)) {
            var_a2 = -arg1;
        }
        M2C_FIELD(arg0, u16 *, 0x64) = (u16) (M2C_FIELD(arg0, u16 *, 0x64) + var_a2);
    }
    M2C_FIELD(temp_a3, u16 *, 0xE) = (u16) (M2C_FIELD(temp_a3, u16 *, 0xE) + var_a2);
}
