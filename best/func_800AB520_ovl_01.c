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

M2C_UNK func_800A1E6C_ovl_01();                     /* extern */
s32 func_800A4FB8_ovl_01(s32 *, u8, s32, s32);      /* extern */
M2C_UNK func_800A8068_ovl_01(s32);                  /* extern */
M2C_UNK func_800A8C88_ovl_01();                     /* extern */
M2C_UNK func_800A94E0_ovl_01();                     /* extern */
M2C_UNK func_800AAF10_ovl_01();                     /* extern */
M2C_UNK func_800AE074_ovl_01();                     /* extern */
extern s8 D_801362B0_ovl_01;
extern s8 D_801443E0;
extern u8 D_801479F8;
extern s8 D_801479F9;
extern s8 D_80147F48;

s32 func_800AB520_ovl_01(s32 arg0, u8 arg1, s8 arg2, s8 arg3, u16 arg4, s32 arg5) {
    s32 temp_v0;

    D_801362B0_ovl_01 = 0;
    if ((u32) (arg1 & 0xFF) < 0x21U) {
        D_801479F8 = arg1;
    } else {
        D_801479F8 = 0x20;
    }
    D_801479F9 = arg2;
    D_801443E0 = arg3;
    temp_v0 = func_800A4FB8_ovl_01(&arg0, D_801479F8, arg4 & 0xFFFF, arg5);
    if (temp_v0 == 0) {
        func_800A8C88_ovl_01();
        func_800AE074_ovl_01();
        func_800A1E6C_ovl_01();
        D_80147F48 = 0;
        func_800A8068_ovl_01(arg0);
        func_800A94E0_ovl_01();
        func_800AAF10_ovl_01();
        D_801362B0_ovl_01 = 1;
    }
    return temp_v0;
}
