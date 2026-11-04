/* machine draft (m2c) for gcc-2.7.2-kmc -O2 -mips3 -mgp32 -mfp32 -G0 -mcpu=r4600, tried by autopilot */
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

s16 func_80074D94_ovl_01(s32, s32);                 /* extern */
M2C_UNK func_80166834_ovl_17(void *);               /* extern */

void func_80165658_ovl_17(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2D8) = (u8) M2C_FIELD(arg0, u8 *, 5);
    }
    if (M2C_FIELD(arg0, s16 *, 0x1A8) == 0) {
        M2C_FIELD(arg0, s16 *, 0x1A8) = func_80074D94_ovl_01(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x30));
    }
    D_80167E9C_ovl_17[M2C_FIELD(arg0, u8 *, 5) - 1](arg0, arg1, arg2);
    func_80166834_ovl_17(arg0);
    func_80035AAC_ovl_01_108(arg0);
}
