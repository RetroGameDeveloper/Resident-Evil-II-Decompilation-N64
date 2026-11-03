/* identical to func_8015EC28_overlay_026 in Resident Evil II (matched), with its names changed by decompdecomp */
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

M2C_UNK func_80040E88_ovl_01(s32, s32);        /* extern */
M2C_UNK func_8004251C_ovl_01(s32, s32, s32);   /* extern */

void func_80166D38_overlay_026(void *arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s1_5;
    s32 temp_s2;

    temp_s1 = arg0 + 0x14;
    temp_s0 = M2C_FIELD(arg0, s32 *, 0x234);
    func_80040E88_ovl_01(arg0 + 0x64, temp_s1);
    temp_s1_2 = temp_s0 + 0x38;
    func_8004251C_ovl_01(temp_s1, temp_s0 + 8, temp_s1_2);
    func_8004251C_ovl_01(temp_s1_2, temp_s0 + 0x180, temp_s0 + 0x1B0);
    func_8004251C_ovl_01(temp_s1_2, temp_s0 + 0x760, temp_s0 + 0x790);
    temp_s1_3 = temp_s0 + 0xD70;
    func_8004251C_ovl_01(temp_s1_2, temp_s0 + 0xD40, temp_s1_3);
    temp_s2 = temp_s0 + 0xEE8;
    func_8004251C_ovl_01(temp_s1_3, temp_s0 + 0xEB8, temp_s2);
    temp_s1_4 = temp_s0 + 0x14C8;
    func_8004251C_ovl_01(temp_s2, temp_s0 + 0x1498, temp_s1_4);
    func_8004251C_ovl_01(temp_s1_4, temp_s0 + 0x1610, temp_s0 + 0x1640);
    temp_s1_5 = temp_s0 + 0x1D98;
    func_8004251C_ovl_01(temp_s2, temp_s0 + 0x1D68, temp_s1_5);
    func_8004251C_ovl_01(temp_s1_5, temp_s0 + 0x1EE0, temp_s0 + 0x1F10);
}
