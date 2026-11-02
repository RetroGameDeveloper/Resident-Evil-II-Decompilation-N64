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

extern f32 D_800BA7F0_ovl_01;

void func_800AAF30_ovl_01(void *arg0, void *arg1) {
    f32 temp_fa0;
    f32 temp_fa0_2;
    f32 temp_fa1;
    f32 temp_ft1;
    f32 temp_ft1_2;
    f32 temp_ft1_3;
    f32 temp_ft2;
    f32 temp_ft2_2;
    f32 temp_ft2_3;
    f32 temp_ft3;
    f32 temp_ft3_2;
    f32 temp_ft3_3;
    f32 temp_fv0;
    f32 temp_fv1;

    temp_fa1 = M2C_FIELD(arg1, f32 *, 0x10);
    temp_ft1 = M2C_FIELD(arg1, f32 *, 0x20);
    temp_fv1 = M2C_FIELD(arg1, f32 *, 0x1C);
    temp_fv0 = M2C_FIELD(arg1, f32 *, 0x14);
    temp_ft2 = M2C_FIELD(arg1, f32 *, 0xC);
    temp_ft3 = M2C_FIELD(arg1, f32 *, 0x18);
    temp_fa0 = (temp_fa1 * temp_ft1) - (temp_fv1 * temp_fv0);
    temp_ft1_2 = -((temp_ft2 * temp_ft1) - (temp_ft3 * temp_fv0));
    temp_ft2_2 = (temp_ft2 * temp_fv1) - (temp_ft3 * temp_fa1);
    temp_ft3_2 = D_800BA7F0_ovl_01 / ((M2C_FIELD(arg1, f32 *, 0) * temp_fa0) + (M2C_FIELD(arg1, f32 *, 4) * temp_ft1_2) + (M2C_FIELD(arg1, f32 *, 8) * temp_ft2_2));
    temp_fa0_2 = temp_ft3_2 * temp_fa0;
    temp_ft2_3 = temp_ft3_2 * temp_ft2_2;
    M2C_FIELD(arg0, f32 *, 0) = temp_fa0_2;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (temp_ft3_2 * temp_ft1_2);
    M2C_FIELD(arg0, f32 *, 0x18) = temp_ft2_3;
    temp_ft1_3 = -temp_ft3_2;
    M2C_FIELD(arg0, f32 *, 4) = (f32) (temp_ft1_3 * ((M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(arg1, f32 *, 0x20)) - (M2C_FIELD(arg1, f32 *, 0x1C) * M2C_FIELD(arg1, f32 *, 8))));
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (temp_ft3_2 * ((M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(arg1, f32 *, 0x20)) - (M2C_FIELD(arg1, f32 *, 0x18) * M2C_FIELD(arg1, f32 *, 8))));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (temp_ft1_3 * ((M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(arg1, f32 *, 0x1C)) - (M2C_FIELD(arg1, f32 *, 0x18) * M2C_FIELD(arg1, f32 *, 4))));
    M2C_FIELD(arg0, f32 *, 8) = (f32) (temp_ft3_2 * ((M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(arg1, f32 *, 0x14)) - (M2C_FIELD(arg1, f32 *, 0x10) * M2C_FIELD(arg1, f32 *, 8))));
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (temp_ft1_3 * ((M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(arg1, f32 *, 0x14)) - (M2C_FIELD(arg1, f32 *, 0xC) * M2C_FIELD(arg1, f32 *, 8))));
    temp_ft3_3 = temp_ft3_2 * ((M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(arg1, f32 *, 0x10)) - (M2C_FIELD(arg1, f32 *, 0xC) * M2C_FIELD(arg1, f32 *, 4)));
    M2C_FIELD(arg0, f32 *, 0x20) = temp_ft3_3;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (((-M2C_FIELD(arg1, f32 *, 0x24) * temp_fa0_2) - (M2C_FIELD(arg1, f32 *, 0x28) * M2C_FIELD(arg0, f32 *, 4))) - (M2C_FIELD(arg1, f32 *, 0x2C) * M2C_FIELD(arg0, f32 *, 8)));
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (((-M2C_FIELD(arg1, f32 *, 0x24) * M2C_FIELD(arg0, f32 *, 0xC)) - (M2C_FIELD(arg1, f32 *, 0x28) * M2C_FIELD(arg0, f32 *, 0x10))) - (M2C_FIELD(arg1, f32 *, 0x2C) * M2C_FIELD(arg0, f32 *, 0x14)));
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (((-M2C_FIELD(arg1, f32 *, 0x24) * temp_ft2_3) - (M2C_FIELD(arg1, f32 *, 0x28) * M2C_FIELD(arg0, f32 *, 0x1C))) - (M2C_FIELD(arg1, f32 *, 0x2C) * temp_ft3_3));
}
