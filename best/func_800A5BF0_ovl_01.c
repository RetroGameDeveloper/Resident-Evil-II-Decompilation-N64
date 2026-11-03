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

M2C_UNK func_8000EFA0(void *, M2C_UNK);             /* extern */

void func_800A5BF0_ovl_01(void *arg0, s32 arg1) {
    void *temp_a0;

    temp_a0 = (arg1 * 2) + arg0;
    M2C_FIELD(temp_a0, u16 *, 0) = (u16) M2C_FIELD(arg0, u16 *, 0);
    M2C_FIELD(temp_a0, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 2);
    M2C_FIELD(temp_a0, u16 *, 4) = (u16) M2C_FIELD(arg0, u16 *, 4);
    M2C_FIELD(temp_a0, u16 *, 6) = (u16) M2C_FIELD(arg0, u16 *, 6);
    func_8000EFA0(temp_a0, 8);
}
