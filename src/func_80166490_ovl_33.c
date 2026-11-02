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

M2C_UNK func_80040E88_ovl_01(s32, s32);             /* extern */
M2C_UNK func_8004251C_ovl_01(s32, s32, s32);        /* extern */

void func_80166490_ovl_33(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;

    temp_s0 = arg0 + 0x14;
    func_80040E88_ovl_01(arg0 + 0x64, temp_s0);
    temp_s0_2 = arg1 + 0x38;
    func_8004251C_ovl_01(temp_s0, arg1 + 8, temp_s0_2);
    temp_s0_3 = arg1 + 0x1B0;
    func_8004251C_ovl_01(temp_s0_2, arg1 + 0x180, temp_s0_3);
    temp_s0_4 = arg1 + 0x328;
    func_8004251C_ovl_01(temp_s0_3, arg1 + 0x2F8, temp_s0_4);
    func_8004251C_ovl_01(temp_s0_4, arg1 + 0x470, arg1 + 0x4A0);
}
