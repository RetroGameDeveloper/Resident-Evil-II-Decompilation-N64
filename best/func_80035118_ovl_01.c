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

M2C_UNK func_80034E3C_ovl_01(void *, M2C_UNK, s16); /* extern */
M2C_UNK func_80040E88_ovl_01(void *, void *);       /* extern */
M2C_UNK func_8004251C_ovl_01(M2C_UNK *, s32, M2C_UNK *); /* extern */

void func_80035118_ovl_01(void *arg0) {
    M2C_UNK sp30;
    s16 temp_a0;
    s16 var_s0;
    void *temp_s1;
    void *temp_s2;

    temp_s1 = M2C_FIELD(arg0, void **, 0x234);
    temp_s2 = temp_s1 + 0xBC0;
    if (!(M2C_FIELD(arg0, s32 *, 0) & 0x40000)) {
        func_80040E88_ovl_01(arg0 + 0x64, arg0 + 0x14);
    }
    func_8004251C_ovl_01(arg0 + 0x14, temp_s1 + 8, &sp30);
    func_8004251C_ovl_01(&sp30, temp_s2 + 8, temp_s2 + 0x38);
    temp_a0 = M2C_FIELD(temp_s2, u16 *, 0x5A) + (M2C_FIELD(arg0, u16 *, 0x66) + M2C_FIELD(temp_s1, u16 *, 0x5A));
    M2C_FIELD(temp_s1, u16 *, 0x5C) = (u16) (M2C_FIELD(temp_s1, u16 *, 0x5C) & 0xFFF);
    var_s0 = temp_a0;
    if (!(M2C_FIELD(arg0, u8 *, 0x25C) & 1)) {
        var_s0 = M2C_FIELD(temp_s2, u16 *, 0x130) + temp_a0;
    }
    func_80034E3C_ovl_01(arg0, 0, var_s0);
    func_80034E3C_ovl_01(arg0, 1, var_s0);
    func_80034E3C_ovl_01(arg0, 2, var_s0);
    func_80034E3C_ovl_01(arg0, 3, var_s0);
}
