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

M2C_UNK func_800A5618_ovl_01();                     /* extern */
M2C_UNK func_800A5660_ovl_01();                     /* extern */
M2C_UNK func_800A95A0_ovl_01(M2C_UNK *, f32 *, f32 *, f32 *, f32 *, f32 *); /* extern */
M2C_UNK func_800A9A38_ovl_01(M2C_UNK *, f32, f32, f32, f32, f32); /* extern */
s32 func_800B2238_ovl_01(u16, M2C_UNK, M2C_UNK);    /* extern */
extern f32 D_800BA7D8_ovl_01;
extern u8 D_801362B0_ovl_01;
extern M2C_UNK D_80148480;
extern M2C_UNK *D_80148B74;

s32 func_800AA8E0_ovl_01(M2C_UNK *arg0, void *arg1, void *arg2, f32 arg3, f32 arg4, s32 arg5, s32 arg6, u8 arg7, u8 arg8) {
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    M2C_UNK *var_s0;
    s32 temp_v0;

    if (D_801362B0_ovl_01 != 0) {
        func_800A5618_ovl_01();
        var_s0 = arg0;
        if (var_s0 == NULL) {
            var_s0 = &D_80148480;
        }
        M2C_FIELD(var_s0, s32 *, 8) = arg5;
        M2C_FIELD(var_s0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0);
        M2C_FIELD(var_s0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 4);
        M2C_FIELD(var_s0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 8);
        M2C_FIELD(var_s0, s32 *, 0x18) = (s32) M2C_FIELD(arg2, s32 *, 0);
        M2C_FIELD(var_s0, s32 *, 0x1C) = (s32) M2C_FIELD(arg2, s32 *, 4);
        M2C_FIELD(var_s0, s32 *, 0x20) = (s32) M2C_FIELD(arg2, s32 *, 8);
        M2C_FIELD(var_s0, f32 *, 0x24) = arg3;
        M2C_FIELD(var_s0, u16 *, 0x3C) = (u16) arg6;
        M2C_FIELD(var_s0, s32 *, 0x38) = (s32) ((arg6 & 0xFFFF) | 0x80000000);
        M2C_FIELD(var_s0, f32 *, 0x30) = arg4;
        M2C_FIELD(var_s0, f32 *, 0x28) = (f32) ((f32) (arg7 & 0xFF) / D_800BA7D8_ovl_01);
        M2C_FIELD(var_s0, f32 *, 0x2C) = (f32) ((f32) (arg8 & 0xFF) / D_800BA7D8_ovl_01);
        if (arg0 == NULL) {
            func_800A95A0_ovl_01(var_s0, &sp18, &sp1C, &sp20, &sp24, &sp28);
            if (sp18 != 0.0f) {
                temp_v0 = func_800B2238_ovl_01(M2C_FIELD(var_s0, u16 *, 0x3C), 0x7F, 0x40);
                M2C_FIELD(var_s0, s32 *, 0x34) = temp_v0;
                if (temp_v0 != -1) {
                    func_800A9A38_ovl_01(var_s0, sp18, sp20, sp24, sp28, sp1C);
                    func_800A5660_ovl_01();
                    return M2C_FIELD(var_s0, s32 *, 0x34);
                }
            }
            goto block_10;
        }
        M2C_FIELD(var_s0, M2C_UNK **, 0) = (M2C_UNK *) D_80148B74;
        if (D_80148B74 != NULL) {
            M2C_FIELD(D_80148B74, M2C_UNK **, 4) = var_s0;
        }
        M2C_FIELD(var_s0, s32 *, 0x34) = -1;
        D_80148B74 = var_s0;
        M2C_FIELD(var_s0, s32 *, 4) = 0;
        M2C_FIELD(var_s0, s16 *, 0x3E) = 0;
        M2C_FIELD(var_s0, s32 *, 8) = (s32) (M2C_FIELD(var_s0, s32 *, 8) | 0x30000);
block_10:
        func_800A5660_ovl_01();
        goto block_11;
    }
block_11:
    return -1;
}
