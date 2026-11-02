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

M2C_UNK func_80009170(void *);                      /* extern */
M2C_UNK func_80042AC0_ovl_01();                     /* extern */
extern f32 D_800B8814_ovl_01;
extern f32 D_800B8818_ovl_01;
extern M2C_UNK D_801314F0_ovl_01;

void func_80042A54_ovl_01(void) {
    func_80042AC0_ovl_01();
    func_80009170(&D_801314F0_ovl_01 + 0xF0);
    M2C_FIELD(&D_801314F0_ovl_01, s32 *, 0x1C4) = 0;
    M2C_FIELD(&D_801314F0_ovl_01, s32 *, 0x1C8) = 0;
    M2C_FIELD(&D_801314F0_ovl_01, s32 *, 0x1CC) = 0;
    M2C_FIELD(&D_801314F0_ovl_01, s32 *, 0x1D4) = 0;
    M2C_FIELD(&D_801314F0_ovl_01, s32 *, 0x1D8) = 0;
    M2C_FIELD(&D_801314F0_ovl_01, s32 *, 0x228) = 0;
    M2C_FIELD(&D_801314F0_ovl_01, s32 *, 0x1E4) = 0;
    M2C_FIELD(&D_801314F0_ovl_01, s32 *, 0x1E0) = 1;
    M2C_FIELD(&D_801314F0_ovl_01, f32 *, 0x1D0) = (f32) D_800B8814_ovl_01;
    M2C_FIELD(&D_801314F0_ovl_01, f32 *, 0x1DC) = (f32) D_800B8818_ovl_01;
}
