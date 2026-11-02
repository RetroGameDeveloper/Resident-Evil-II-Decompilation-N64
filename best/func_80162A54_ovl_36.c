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

void func_80162A54_ovl_36(void *arg0) {
    void *temp_v1;

    temp_v1 = arg0 + 0x2B4;
    if (M2C_FIELD(arg0, s16 *, 0x270) != 0) {
        M2C_FIELD(arg0, s16 *, 0x270) = 0;
        M2C_FIELD(temp_v1, s8 *, 5) = 5;
        M2C_FIELD(temp_v1, u16 *, 6) = (u16) M2C_FIELD(arg0, u16 *, 0x2A);
        M2C_FIELD(temp_v1, u16 *, 8) = (u16) M2C_FIELD(arg0, u16 *, 0x32);
        M2C_FIELD(arg0, s16 *, 6) = 0x100;
    }
}
