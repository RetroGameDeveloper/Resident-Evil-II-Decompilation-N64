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

M2C_UNK func_80006814();                            /* extern */
M2C_UNK func_8000C9E0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_8000CFB4();                            /* extern */
M2C_UNK func_8000D020();                            /* extern */
s32 func_8000D1F0(M2C_UNK, M2C_UNK *);              /* extern */
extern M2C_UNK D_80014FA0;
extern u8 D_80014FE0;

s32 func_800066F0(s32 arg0) {
    s32 temp_v0;

    func_8000CFB4();
    if (D_80014FE0 != 1) {
        func_80006814();
        func_8000D1F0(1, &D_80014FA0);
        func_8000C9E0(arg0, 0, 1);
    }
    temp_v0 = func_8000D1F0(0, &D_80014FA0);
    D_80014FE0 = 1;
    func_8000D020();
    return temp_v0;
}
