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

f32 func_80047DA0_ovl_01(f32, f32, s32, s32);       /* extern */
extern f32 D_8010DD0C_ovl_01;
extern M2C_UNK D_801314F0_ovl_01;

void func_80055210_ovl_01(void) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(&D_801314F0_ovl_01, s32 *, 0x94) - M2C_FIELD(&D_801314F0_ovl_01, s32 *, 0x88);
    D_8010DD0C_ovl_01 = func_80047DA0_ovl_01((f32) (M2C_FIELD(&D_801314F0_ovl_01, s32 *, 0x8C) - M2C_FIELD(&D_801314F0_ovl_01, s32 *, 0x80)), (f32) temp_a0, temp_a0, M2C_FIELD(&D_801314F0_ovl_01, s32 *, 0x88));
}
