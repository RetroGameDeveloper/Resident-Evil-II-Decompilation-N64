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

M2C_UNK func_800A7644_ovl_01(s32, s32);             /* extern */
M2C_UNK func_800A771C_ovl_01(s32, s32);             /* extern */
M2C_UNK func_800A77F4_ovl_01(s32, s32);             /* extern */
M2C_UNK func_800A7A2C_ovl_01(s32, s32);             /* extern */
extern f32 D_800BA790_ovl_01;
extern f32 D_800BA794_ovl_01;
extern f32 D_800BA798_ovl_01;
extern f32 D_800BA79C_ovl_01;
extern f32 D_800BA7A0_ovl_01;
extern f32 D_800BA7A4_ovl_01;
extern f32 D_800BA7A8_ovl_01;
extern f32 D_800BA7AC_ovl_01;
extern f32 D_800BA7B0_ovl_01;
extern f32 D_800BA7B4_ovl_01;
extern f32 D_800BA7B8_ovl_01;
extern f32 D_800BA7BC_ovl_01;

void func_800A9A38_ovl_01(void *arg0, f32 arg1, f32 arg2, f32 arg4, f32 arg5) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    s32 temp_s0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    u32 var_a1_5;
    u32 var_v0_2;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x34);
    if (M2C_FIELD(arg0, s32 *, 8) & 0x100000) {
        temp_fv0 = M2C_FIELD(arg0, f32 *, 0x40) * arg1 * D_800BA790_ovl_01;
        if (D_800BA794_ovl_01 <= temp_fv0) {
            var_v1 = (s32) (temp_fv0 - D_800BA794_ovl_01) | 0x80000000;
            var_a1 = var_v1;
        } else {
            var_v1 = (s32) temp_fv0;
            var_a1 = var_v1;
        }
        if (var_v1 & 0x80) {
            var_a1 = 0x7F;
        }
    } else {
        temp_fv0_2 = arg1 * D_800BA798_ovl_01;
        if (D_800BA79C_ovl_01 <= temp_fv0_2) {
            var_a1_2 = (s32) (temp_fv0_2 - D_800BA79C_ovl_01) | 0x80000000;
            var_v1_2 = var_a1_2;
        } else {
            var_a1_2 = (s32) temp_fv0_2;
            var_v1_2 = var_a1_2;
        }
        if (var_a1_2 & 0x80) {
            var_a1 = 0x7F;
        } else {
            var_a1 = var_v1_2;
        }
    }
    func_800A7A2C_ovl_01(temp_s0, var_a1 & 0xFF);
    temp_fv0_3 = (arg2 + D_800BA7A0_ovl_01) * D_800BA7A4_ovl_01;
    if (D_800BA7A8_ovl_01 <= temp_fv0_3) {
        var_v1_3 = (s32) (temp_fv0_3 - D_800BA7A8_ovl_01) | 0x80000000;
        var_a1_3 = var_v1_3;
    } else {
        var_v1_3 = (s32) temp_fv0_3;
        var_a1_3 = var_v1_3;
    }
    if (var_v1_3 & 0x80) {
        var_a1_3 = 0x7F;
    }
    func_800A7644_ovl_01(temp_s0, var_a1_3 & 0xFF);
    temp_fv0_4 = (D_800BA7AC_ovl_01 - arg4) * D_800BA7B0_ovl_01;
    if (D_800BA7B4_ovl_01 <= temp_fv0_4) {
        var_v1_4 = (s32) (temp_fv0_4 - D_800BA7B4_ovl_01) | 0x80000000;
        var_a1_4 = var_v1_4;
    } else {
        var_v1_4 = (s32) temp_fv0_4;
        var_a1_4 = var_v1_4;
    }
    if (var_v1_4 & 0x80) {
        var_a1_4 = 0x7F;
    }
    func_800A771C_ovl_01(temp_s0, var_a1_4 & 0xFF);
    temp_fv0_5 = arg5 * D_800BA7B8_ovl_01;
    if (D_800BA7BC_ovl_01 <= temp_fv0_5) {
        var_a1_5 = (s32) (temp_fv0_5 - D_800BA7BC_ovl_01) | 0x80000000;
        var_v0 = var_a1_5 < 0x4000U;
    } else {
        var_a1_5 = (u32) (s32) temp_fv0_5;
        var_v0 = var_a1_5 < 0x4000U;
    }
    var_v0_2 = var_a1_5;
    if (var_v0 == 0) {
        var_v0_2 = 0x3FFF;
    }
    func_800A77F4_ovl_01(temp_s0, var_v0_2 & 0xFFFF);
}
