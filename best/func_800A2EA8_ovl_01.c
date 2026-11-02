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

extern f32 D_800BA5B0_ovl_01;
extern f64 D_800BA5B8_ovl_01;
extern f32 D_800BA5C0_ovl_01;
extern f32 D_800BA5C4_ovl_01;
extern u32 D_80143EA4;

void func_800A2EA8_ovl_01(void *arg0, s32 arg1, s8 *arg2) {
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_ft0_2;
    f64 var_ft0;
    s32 temp_v0;
    u8 temp_v1;

    if ((M2C_FIELD(arg0, u8 *, 1) == 0) && (M2C_FIELD(arg0, u8 *, 0x5C) != 3)) {
        M2C_FIELD(arg0, u8 *, 0x5C) = 3U;
        M2C_FIELD(arg0, f32 *, 0x54) = 0.0f;
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
        M2C_FIELD(arg0, f32 *, 0x58) = (f32) M2C_FIELD(arg0, f32 *, 0x4C);
        M2C_FIELD(arg0, u16 *, 0x48) = (u16) M2C_FIELD(arg0, u16 *, 0x28);
        goto block_15;
    }
    if ((u16) M2C_FIELD(arg0, s32 *, 0x50) >= (u16) M2C_FIELD(arg0, u16 *, 0x48)) {
        temp_v1 = M2C_FIELD(arg0, u8 *, 0x5C);
        switch (temp_v1) {                          /* irregular */
        case 3:
            *arg2 = 0;
            M2C_FIELD(arg0, f32 *, 0x4C) = 0.0f;
            return;
        case 0:
            M2C_FIELD(arg0, u8 *, 0x5C) = 1U;
            M2C_FIELD(arg0, s32 *, 0x50) = 0;
            M2C_FIELD(arg0, f32 *, 0x58) = (f32) D_800BA5B0_ovl_01;
            M2C_FIELD(arg0, f32 *, 0x54) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
            M2C_FIELD(arg0, u16 *, 0x48) = (u16) M2C_FIELD(arg0, u16 *, 0x22);
            goto block_15;
        case 1:
            temp_fv0 = M2C_FIELD(arg0, f32 *, 0x24);
            M2C_FIELD(arg0, u8 *, 0x5C) = 2U;
            M2C_FIELD(arg0, f32 *, 0x58) = temp_fv0;
            M2C_FIELD(arg0, f32 *, 0x54) = temp_fv0;
            M2C_FIELD(arg0, f32 *, 0x4C) = temp_fv0;
            return;
        }
    } else {
block_15:
        if (M2C_FIELD(arg0, u16 *, 0x48) != 0) {
            temp_v0 = M2C_FIELD(arg0, s32 *, 0x50);
            var_ft0 = (f64) temp_v0;
            if (temp_v0 < 0) {
                var_ft0 += D_800BA5B8_ovl_01;
            }
            var_ft0_2 = (f32) var_ft0 / ((f32) M2C_FIELD(arg0, u16 *, 0x48) * D_800BA5C0_ovl_01);
        } else {
            var_ft0_2 = D_800BA5C4_ovl_01;
        }
        temp_fv1 = M2C_FIELD(arg0, f32 *, 0x58);
        M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) + (((u32) ((arg1 & 0xFFFF) * 0x7D00) / (u32) D_80143EA4) << 0xB));
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (((M2C_FIELD(arg0, f32 *, 0x54) - temp_fv1) * var_ft0_2) + temp_fv1);
    }
}
