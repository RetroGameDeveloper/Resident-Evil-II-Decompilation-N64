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

extern f32 D_800BA658_ovl_01;
extern f64 D_800BA660_ovl_01;
extern s32 D_80143EAC;

void func_800A548C_ovl_01(s32 arg0, void *arg1, s32 arg2) {
    f64 var_fv1;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u32 temp_v0_4;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_v0;
    void *temp_v0_5;
    void *temp_v1;

    temp_v1 = D_80143EAC + ((arg0 & 0xFFFF) * 0x68);
    M2C_FIELD(temp_v1, s16 *, 4) = 0x1000;
    M2C_FIELD(temp_v1, s8 *, 0) = 0;
    M2C_FIELD(temp_v1, s16 *, 2) = 0;
    M2C_FIELD(temp_v1, s8 *, 1) = 1;
    M2C_FIELD(temp_v1, s16 *, 0x18) = 0;
    M2C_FIELD(temp_v1, s16 *, 0x1A) = 0;
    M2C_FIELD(temp_v1, s16 *, 0x1C) = 0;
    M2C_FIELD(temp_v1, s16 *, 0x1E) = 0;
    M2C_FIELD(temp_v1, s16 *, 0x40) = 0;
    M2C_FIELD(temp_v1, s16 *, 0x42) = 0;
    M2C_FIELD(temp_v1, s16 *, 0x44) = 0;
    M2C_FIELD(temp_v1, s16 *, 0x46) = 0;
    if (arg2 & 0xFF) {
        temp_v0 = (arg0 * 0x68) + D_80143EAC;
        M2C_FIELD(temp_v0, s16 *, 0x20) = 0;
        M2C_FIELD(temp_v0, s16 *, 0x22) = 0;
        M2C_FIELD(temp_v0, f32 *, 0x24) = (f32) D_800BA658_ovl_01;
        M2C_FIELD(temp_v0, s16 *, 0x28) = 0x14;
    }
    temp_a3 = arg0 * 0x68;
    temp_a2 = temp_a3 + D_80143EAC;
    M2C_FIELD(temp_a2, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 4);
    temp_v0_2 = M2C_FIELD(arg1, s32 *, 8);
    var_fv1 = (f64) temp_v0_2;
    if (temp_v0_2 < 0) {
        var_fv1 += D_800BA660_ovl_01;
    }
    M2C_FIELD(temp_a2, f64 *, 8) = var_fv1;
    temp_v0_3 = M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(temp_a2, s32 *, 0x14) = temp_v0_3;
    M2C_FIELD(temp_a2, s32 *, 0x10) = temp_v0_3;
    M2C_FIELD(temp_a2, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(temp_a2, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(temp_a2, s32 *, 0x38) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(temp_a2, u8 *, 0x5D) = (u8) M2C_FIELD(arg1, u8 *, 0x18);
    temp_a2_2 = temp_a3 + D_80143EAC;
    temp_a3_2 = M2C_FIELD(temp_a2_2, s32 *, 0x38);
    if ((temp_a3_2 == 0) || (temp_v0_4 = M2C_FIELD(temp_a2_2, s32 *, 0x30) - (M2C_FIELD(temp_a2_2, s32 *, 0x34) + temp_a3_2), M2C_FIELD(temp_a2_2, u32 *, 0x3C) = temp_v0_4, ((temp_v0_4 < 0xAU) != 0))) {
        M2C_FIELD(temp_a2_2, u32 *, 0x3C) = 0U;
    }
    if ((M2C_FIELD(arg1, s32 *, 4) & 0xF0000000) != 0x80000000) {
        temp_v0_5 = (arg0 * 0x68) + D_80143EAC;
        M2C_FIELD(temp_v0_5, u16 *, 2) = (u16) (M2C_FIELD(temp_v0_5, u16 *, 2) | 1);
    }
}
