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

M2C_UNK func_800066F0(M2C_UNK *);                   /* extern */
M2C_UNK func_8000C9E0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8000CB60(s32, s32, M2C_UNK);           /* extern */
extern M2C_UNK D_8013A290;

void func_80087A00_ovl_01(void *arg0) {
    func_800066F0(&D_8013A290);
    func_8000C9E0(&D_8013A290, 0, 1);
    func_8000CB60(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0), 0);
}
