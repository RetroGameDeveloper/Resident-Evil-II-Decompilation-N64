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

extern f32 D_800B89B0_ovl_01;
extern f32 D_800B89B4_ovl_01;
extern s32 D_800EFBE0_ovl_01;

void func_80049BC4_ovl_01(void *arg0, void *arg1, s32 arg2) {
    f32 temp_ft0;
    s32 temp_ft2;
    s32 temp_ft2_10;
    s32 temp_ft2_11;
    s32 temp_ft2_12;
    s32 temp_ft2_2;
    s32 temp_ft2_3;
    s32 temp_ft2_4;
    s32 temp_ft2_5;
    s32 temp_ft2_6;
    s32 temp_ft2_7;
    s32 temp_ft2_8;
    s32 temp_ft2_9;

    temp_ft0 = D_800B89B0_ovl_01 / (f32) (1 << D_800EFBE0_ovl_01);
    temp_ft2 = (s32) (M2C_FIELD(arg0, f32 *, 0) * temp_ft0 * D_800B89B4_ovl_01);
    temp_ft2_2 = (s32) (M2C_FIELD(arg0, f32 *, 4) * temp_ft0 * D_800B89B4_ovl_01);
    M2C_FIELD(arg1, s32 *, 0) = (s32) ((temp_ft2 & 0xFFFF0000) | ((u32) temp_ft2_2 >> 0x10));
    M2C_FIELD(arg1, s32 *, 0x20) = (s32) (((temp_ft2 << 0x10) & 0xFFFF0000) | (temp_ft2_2 & 0xFFFF));
    temp_ft2_3 = (s32) (M2C_FIELD(arg0, f32 *, 8) * temp_ft0 * D_800B89B4_ovl_01);
    M2C_FIELD(arg1, s32 *, 4) = (s32) (temp_ft2_3 & 0xFFFF0000);
    M2C_FIELD(arg1, s32 *, 0x24) = (s32) ((temp_ft2_3 << 0x10) & 0xFFFF0000);
    temp_ft2_4 = (s32) (M2C_FIELD(arg0, f32 *, 0xC) * temp_ft0 * D_800B89B4_ovl_01);
    temp_ft2_5 = (s32) (M2C_FIELD(arg0, f32 *, 0x10) * temp_ft0 * D_800B89B4_ovl_01);
    M2C_FIELD(arg1, s32 *, 8) = (s32) ((temp_ft2_4 & 0xFFFF0000) | ((u32) temp_ft2_5 >> 0x10));
    M2C_FIELD(arg1, s32 *, 0x28) = (s32) (((temp_ft2_4 << 0x10) & 0xFFFF0000) | (temp_ft2_5 & 0xFFFF));
    temp_ft2_6 = (s32) (M2C_FIELD(arg0, f32 *, 0x14) * temp_ft0 * D_800B89B4_ovl_01);
    M2C_FIELD(arg1, s32 *, 0xC) = (s32) (temp_ft2_6 & 0xFFFF0000);
    M2C_FIELD(arg1, s32 *, 0x2C) = (s32) ((temp_ft2_6 << 0x10) & 0xFFFF0000);
    temp_ft2_7 = (s32) (M2C_FIELD(arg0, f32 *, 0x18) * temp_ft0 * D_800B89B4_ovl_01);
    temp_ft2_8 = (s32) (M2C_FIELD(arg0, f32 *, 0x1C) * temp_ft0 * D_800B89B4_ovl_01);
    M2C_FIELD(arg1, s32 *, 0x10) = (s32) ((temp_ft2_7 & 0xFFFF0000) | ((u32) temp_ft2_8 >> 0x10));
    M2C_FIELD(arg1, s32 *, 0x30) = (s32) (((temp_ft2_7 << 0x10) & 0xFFFF0000) | (temp_ft2_8 & 0xFFFF));
    temp_ft2_9 = (s32) (M2C_FIELD(arg0, f32 *, 0x20) * temp_ft0 * D_800B89B4_ovl_01);
    M2C_FIELD(arg1, s32 *, 0x14) = (s32) (temp_ft2_9 & 0xFFFF0000);
    M2C_FIELD(arg1, s32 *, 0x34) = (s32) ((temp_ft2_9 << 0x10) & 0xFFFF0000);
    if (arg2 != 0) {
        temp_ft2_10 = (s32) (M2C_FIELD(arg0, f32 *, 0x24) * temp_ft0 * D_800B89B4_ovl_01);
        temp_ft2_11 = (s32) (M2C_FIELD(arg0, f32 *, 0x28) * temp_ft0 * D_800B89B4_ovl_01);
        M2C_FIELD(arg1, s32 *, 0x18) = (s32) ((temp_ft2_10 & 0xFFFF0000) | ((u32) temp_ft2_11 >> 0x10));
        M2C_FIELD(arg1, s32 *, 0x38) = (s32) (((temp_ft2_10 << 0x10) & 0xFFFF0000) | (temp_ft2_11 & 0xFFFF));
        temp_ft2_12 = (s32) (M2C_FIELD(arg0, f32 *, 0x2C) * temp_ft0 * D_800B89B4_ovl_01);
        M2C_FIELD(arg1, s32 *, 0x1C) = (s32) ((temp_ft2_12 & 0xFFFF0000) | 1);
        M2C_FIELD(arg1, s32 *, 0x3C) = (s32) ((temp_ft2_12 << 0x10) & 0xFFFF0000);
    }
}
