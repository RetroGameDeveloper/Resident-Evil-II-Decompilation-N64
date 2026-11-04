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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */

s32 func_80007450();
s32 func_8000DCB0();
extern char D_8010B2C8_ovl_01[];
extern char D_80139AD0[];

void func_8004CE04_ovl_01(void) {
    **(s16 * *)(D_8010B2C8_ovl_01 + 0x390) = 0;
    func_80007450(&D_80139AD0, 0);
    func_8000DCB0(0);
}
