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

void func_800485C0_ovl_01(void *arg0, void *arg1) {
    f32 temp_ft2;
    f32 temp_ft2_2;
    f32 temp_ft2_3;
    f32 temp_ft2_4;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 temp_fv1_5;
    f32 temp_fv1_6;
    f32 temp_fv1_7;
    f32 temp_fv1_8;

    temp_fv1 = M2C_FIELD(arg0, f32 *, 0);
    temp_ft2 = M2C_FIELD(arg0, f32 *, 4);
    temp_fv1_2 = M2C_FIELD(arg0, f32 *, 8);
    temp_fv1_3 = M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0) = (f32) ((temp_fv1 * M2C_FIELD(arg1, f32 *, 0)) + (temp_ft2 * M2C_FIELD(arg1, f32 *, 0xC)) + (temp_fv1_2 * M2C_FIELD(arg1, f32 *, 0x18)));
    M2C_FIELD(arg0, f32 *, 4) = (f32) ((temp_fv1 * M2C_FIELD(arg1, f32 *, 4)) + (temp_ft2 * M2C_FIELD(arg1, f32 *, 0x10)) + (temp_fv1_2 * M2C_FIELD(arg1, f32 *, 0x1C)));
    M2C_FIELD(arg0, f32 *, 8) = (f32) ((temp_fv1 * M2C_FIELD(arg1, f32 *, 8)) + (temp_ft2 * M2C_FIELD(arg1, f32 *, 0x14)) + (temp_fv1_2 * M2C_FIELD(arg1, f32 *, 0x20)));
    temp_ft2_2 = M2C_FIELD(arg0, f32 *, 0x10);
    temp_fv1_4 = M2C_FIELD(arg0, f32 *, 0x14);
    temp_fv1_5 = M2C_FIELD(arg0, f32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) ((temp_fv1_3 * M2C_FIELD(arg1, f32 *, 0)) + (temp_ft2_2 * M2C_FIELD(arg1, f32 *, 0xC)) + (temp_fv1_4 * M2C_FIELD(arg1, f32 *, 0x18)));
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) ((temp_fv1_3 * M2C_FIELD(arg1, f32 *, 4)) + (temp_ft2_2 * M2C_FIELD(arg1, f32 *, 0x10)) + (temp_fv1_4 * M2C_FIELD(arg1, f32 *, 0x1C)));
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) ((temp_fv1_3 * M2C_FIELD(arg1, f32 *, 8)) + (temp_ft2_2 * M2C_FIELD(arg1, f32 *, 0x14)) + (temp_fv1_4 * M2C_FIELD(arg1, f32 *, 0x20)));
    temp_ft2_3 = M2C_FIELD(arg0, f32 *, 0x1C);
    temp_fv1_6 = M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) ((temp_fv1_5 * M2C_FIELD(arg1, f32 *, 0)) + (temp_ft2_3 * M2C_FIELD(arg1, f32 *, 0xC)) + (temp_fv1_6 * M2C_FIELD(arg1, f32 *, 0x18)));
    temp_fv1_7 = M2C_FIELD(arg0, f32 *, 0x24);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) ((temp_fv1_5 * M2C_FIELD(arg1, f32 *, 4)) + (temp_ft2_3 * M2C_FIELD(arg1, f32 *, 0x10)) + (temp_fv1_6 * M2C_FIELD(arg1, f32 *, 0x1C)));
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) ((temp_fv1_5 * M2C_FIELD(arg1, f32 *, 8)) + (temp_ft2_3 * M2C_FIELD(arg1, f32 *, 0x14)) + (temp_fv1_6 * M2C_FIELD(arg1, f32 *, 0x20)));
    temp_ft2_4 = M2C_FIELD(arg0, f32 *, 0x28);
    temp_fv1_8 = M2C_FIELD(arg0, f32 *, 0x2C);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) ((temp_fv1_7 * M2C_FIELD(arg1, f32 *, 0)) + (temp_ft2_4 * M2C_FIELD(arg1, f32 *, 0xC)) + (temp_fv1_8 * M2C_FIELD(arg1, f32 *, 0x18)) + M2C_FIELD(arg1, f32 *, 0x24));
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) ((temp_fv1_7 * M2C_FIELD(arg1, f32 *, 4)) + (temp_ft2_4 * M2C_FIELD(arg1, f32 *, 0x10)) + (temp_fv1_8 * M2C_FIELD(arg1, f32 *, 0x1C)) + M2C_FIELD(arg1, f32 *, 0x28));
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) ((temp_fv1_7 * M2C_FIELD(arg1, f32 *, 8)) + (temp_ft2_4 * M2C_FIELD(arg1, f32 *, 0x14)) + (temp_fv1_8 * M2C_FIELD(arg1, f32 *, 0x20)) + M2C_FIELD(arg1, f32 *, 0x2C));
}
