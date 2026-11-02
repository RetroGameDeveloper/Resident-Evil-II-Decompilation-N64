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

M2C_UNK func_800377B0_ovl_01(s32, s16, M2C_UNK *, u16 *); /* extern */
M2C_UNK func_80040E88_ovl_01(u16 *, M2C_UNK *);     /* extern */
M2C_UNK func_8004279C_ovl_01(M2C_UNK *, s16 *, u16 *); /* extern */
M2C_UNK func_80069F4C_ovl_01(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800E8FC8_ovl_01;

void func_8016716C_ovl_17(void *arg0, s32 arg1, s16 arg2) {
    u16 sp10;
    u16 sp12;
    u16 sp14;
    s16 sp18;
    s16 sp1A;
    s16 sp1C;
    M2C_UNK sp20;
    M2C_UNK *var_a2;
    s32 var_a0;
    u16 var_v0;
    void *temp_s2;

    temp_s2 = M2C_FIELD(arg0, void **, 0x234);
    func_80069F4C_ovl_01(arg0 + 0x28, 0x64, 0x400, 0);
    if (!(arg1 & 0x80)) {
        var_a0 = (arg1 << 0x10) | 0x1D001000;
        var_a2 = temp_s2 + 0x38;
        sp10 = 0x3E8;
        var_v0 = -0x64U;
        sp12 = 0;
    } else {
        sp10 = M2C_FIELD(arg0, u16 *, 0x64);
        sp12 = M2C_FIELD(arg0, u16 *, 0x66);
        sp14 = M2C_FIELD(arg0, u16 *, 0x68);
        func_80040E88_ovl_01(&sp10, &sp20);
        sp18 = 0x3E8;
        sp1A = 0;
        sp1C = -0x64;
        func_8004279C_ovl_01(&sp20, &sp18, &sp10);
        var_a0 = ((arg1 & 0x7F) << 0x10) | 0x1D001000;
        sp10 += M2C_FIELD(temp_s2, u16 *, 0x4E);
        var_a2 = &D_800E8FC8_ovl_01;
        sp12 += M2C_FIELD(temp_s2, u16 *, 0x52);
        var_v0 = sp14 + M2C_FIELD(temp_s2, u16 *, 0x56);
    }
    sp14 = var_v0;
    func_800377B0_ovl_01(var_a0, arg2, var_a2, &sp10);
}
