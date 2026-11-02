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

void func_8008C2F4_ovl_01(s32 arg0, s8 arg1, s8 arg2, s8 arg3) {
    void *temp_a0;

    temp_a0 = (arg0 * 4) + &D_800C7650_ovl_01;
    M2C_FIELD(temp_a0, s8 *, 0x21818) = arg1;
    M2C_FIELD(temp_a0, s8 *, 0x21819) = arg2;
    M2C_FIELD(temp_a0, s8 *, 0x2181A) = arg3;
}
