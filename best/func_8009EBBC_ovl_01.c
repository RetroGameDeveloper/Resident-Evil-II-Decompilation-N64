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

s32 func_8000F020();
s32 func_8006C074_ovl_01();
extern char D_80134238_ovl_01[];
extern s32 D_801343C0_ovl_01;
extern char D_801343C8_ovl_01[];
extern s32 D_80134494_ovl_01;

void func_8009EBBC_ovl_01(void *arg0, s32 arg1) {
    s32 temp_a1;

    D_80134494_ovl_01 = 1;
    *(s32 *)(D_80134238_ovl_01 + 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & 0x0FFFFFFF);
    *(s32 *)(D_80134238_ovl_01 + 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & 0x0FFFFFFF);
    temp_a1 = (arg1 + D_801343C0_ovl_01) & 0x0FFFFFFF;
    *(s32 *)(D_80134238_ovl_01 + 0xC) = temp_a1;
    *(s32 *)(D_80134238_ovl_01 + 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & 0x0FFFFFFF);
    func_8000F020(arg0, temp_a1, &D_80134238_ovl_01);
    func_8006C074_ovl_01(&D_801343C8_ovl_01, 0);
}
