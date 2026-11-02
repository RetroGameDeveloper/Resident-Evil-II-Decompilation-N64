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

extern void *D_8017E860_ovl_10;

void func_8017D8E8_ovl_10(void) {
    u16 temp_v0;

    temp_v0 = M2C_FIELD(D_8017E860_ovl_10, u16 *, 2) + 1;
    M2C_FIELD(D_8017E860_ovl_10, u16 *, 2) = temp_v0;
    if ((s16) temp_v0 >= 0xB5) {
        M2C_FIELD(D_8017E860_ovl_10, u16 *, 2) = 0U;
        M2C_FIELD(D_8017E860_ovl_10, s16 *, 0) = 0;
    }
}
