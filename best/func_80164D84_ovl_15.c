/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */
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

M2C_UNK func_800377B0_ovl_01(M2C_UNK, s16, s32, void *); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_80165EDC_ovl_15;

void func_80164D84_ovl_15(s32 arg0) {
    M2C_UNK sp10;
    M2C_UNK *var_a1;
    M2C_UNK *var_v1;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s5;
    s32 temp_s6;
    void *temp_s2;
    void *temp_s3;
    void *temp_s4;

    var_a1 = &sp10;
    var_v1 = &D_80165EDC_ovl_15;
    do {
        M2C_FIELD(var_a1, s32 *, 0) = (s32) M2C_FIELD(var_v1, s32 *, 0);
        M2C_FIELD(var_a1, s32 *, 4) = (s32) M2C_FIELD(var_v1, s32 *, 4);
        M2C_FIELD(var_a1, s32 *, 8) = (s32) M2C_FIELD(var_v1, s32 *, 8);
        M2C_FIELD(var_a1, s32 *, 0xC) = (s32) M2C_FIELD(var_v1, s32 *, 0xC);
        var_v1 += 0x10;
        var_a1 += 0x10;
    } while (var_v1 != (&D_80165EDC_ovl_15 + 0x60));
    temp_s0 = arg0 * 0x24;
    temp_s2 = &sp10 + temp_s0;
    M2C_FIELD(var_a1, s32 *, 0) = (s32) M2C_FIELD(var_v1, s32 *, 0);
    M2C_FIELD(var_a1, s32 *, 4) = (s32) M2C_FIELD(var_v1, s32 *, 4);
    M2C_FIELD(var_a1, s32 *, 8) = (s32) M2C_FIELD(var_v1, s32 *, 8);
    temp_s1 = M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19CB4) + (M2C_FIELD(temp_s2, s32 *, 8) * 0x178);
    temp_s5 = temp_s1 + 0x38;
    func_800377B0_ovl_01(0x11800, M2C_FIELD(temp_s2, s16 *, 6), temp_s5, temp_s2);
    temp_s6 = temp_s1 + 0x1B0;
    temp_s3 = &sp10 + (temp_s0 + 0xC);
    func_800377B0_ovl_01(0x21000, M2C_FIELD(temp_s2, s16 *, 6), temp_s6, temp_s3);
    temp_s1_2 = temp_s1 + 0x328;
    temp_s4 = &sp10 + (temp_s0 + 0x18);
    func_800377B0_ovl_01(0x11800, M2C_FIELD(temp_s2, s16 *, 6), temp_s1_2, temp_s4);
    func_800377B0_ovl_01(0x22000, (s16) ((u16) M2C_FIELD(temp_s2, s16 *, 6) + 0x400), temp_s5, temp_s2);
    func_800377B0_ovl_01(0x1800, (s16) ((u16) M2C_FIELD(temp_s2, s16 *, 6) + 0x400), temp_s6, temp_s3);
    func_800377B0_ovl_01(0x1000, (s16) ((u16) M2C_FIELD(temp_s2, s16 *, 6) + 0x400), temp_s1_2, temp_s4);
}
