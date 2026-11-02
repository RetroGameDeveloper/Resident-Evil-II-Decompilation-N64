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

M2C_UNK func_800A548C_ovl_01(s32, s32 *, M2C_UNK);  /* extern */
M2C_UNK func_800A5618_ovl_01();                     /* extern */
M2C_UNK func_800A5660_ovl_01();                     /* extern */
M2C_UNK func_800A591C_ovl_01(s32);                  /* extern */
M2C_UNK func_800A59A0_ovl_01(s32, s32);             /* extern */
M2C_UNK func_800A5A00_ovl_01(s32, s32, s32, s32, s32); /* extern */
s32 func_800AED60_ovl_01(s32);                      /* extern */
extern f64 D_800BA750_ovl_01;
extern f32 D_800BA758_ovl_01;
extern f32 D_800BA75C_ovl_01;
extern u8 D_801362B0_ovl_01;
extern s32 D_80147F44;
extern M2C_UNK D_80148180;

s32 func_800A91EC_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7, s32 arg8, s32 arg9) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s8 sp30;
    f32 temp_fv0;
    f64 var_fv1;
    s32 temp_v0;
    s32 var_a1;
    void *temp_v0_2;

    if (D_801362B0_ovl_01 != 0) {
        func_800A5618_ovl_01();
        temp_v0 = func_800AED60_ovl_01(arg0 & 0xFF);
        if (temp_v0 != -1) {
            temp_v0_2 = (temp_v0 * 0x18) + &D_80148180;
            M2C_FIELD(temp_v0_2, s32 *, 8) = arg1;
            M2C_FIELD(temp_v0_2, s32 *, 0xC) = arg2;
            M2C_FIELD(temp_v0_2, s32 *, 0x10) = 0;
            M2C_FIELD(temp_v0_2, s32 *, 4) = arg8;
            M2C_FIELD(temp_v0_2, s8 *, 0) = 1;
            M2C_FIELD(temp_v0_2, s32 *, 0x14) = arg9;
            sp18 = arg3 | 0x400000;
            sp1C = arg1;
            sp20 = 0;
            sp24 = arg2;
            sp28 = 0;
            sp2C = arg2;
            sp30 = 0;
            func_800A548C_ovl_01(temp_v0, &sp18, 1);
            var_fv1 = (f64) arg3;
            if (arg3 < 0) {
                var_fv1 += D_800BA750_ovl_01;
            }
            temp_fv0 = ((f32) var_fv1 / (f32) D_80147F44) * D_800BA758_ovl_01;
            if (D_800BA75C_ovl_01 <= temp_fv0) {
                var_a1 = (s32) (temp_fv0 - D_800BA75C_ovl_01) | 0x80000000;
            } else {
                var_a1 = (s32) temp_fv0;
            }
            func_800A59A0_ovl_01(temp_v0, var_a1 & 0xFFFF);
            func_800A5A00_ovl_01(temp_v0, (arg4 & 0xFF) << 0x10, (arg5 & 0xFF) << 0x10, (arg6 & 0xFF) << 0x10, (arg7 & 0xFF) << 0x10);
            func_800A591C_ovl_01(temp_v0);
        }
        func_800A5660_ovl_01();
        return temp_v0;
    }
    return -1;
}
