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

M2C_UNK func_80006D30(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_8000CB60(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_80012920;
extern M2C_UNK D_80017700;
extern M2C_UNK D_80017710;

void func_8000C780(void) {
    D_80012920 = 1;
    func_80006D30(&D_80017710, &D_80017700, 1);
    func_8000CB60(&D_80017710, 0, 0);
}
