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

M2C_UNK func_80040D24_ovl_01(M2C_UNK, M2C_UNK *);   /* extern */
M2C_UNK func_80040E88_ovl_01(M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_8004279C_ovl_01(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80082230_ovl_01(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */

void func_8008386C_ovl_01(s16 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    M2C_UNK sp10;
    s16 sp12;
    M2C_UNK sp18;

    func_80082230_ovl_01(&sp10, 0, 8);
    sp12 = arg0;
    func_80040E88_ovl_01(&sp10, &sp18);
    func_80040D24_ovl_01(arg1, &sp18);
    func_8004279C_ovl_01(&sp18, arg2, arg3);
}
