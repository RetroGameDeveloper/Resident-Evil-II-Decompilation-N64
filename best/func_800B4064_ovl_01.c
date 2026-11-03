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

M2C_UNK func_80006D30(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_80007320(s32, s32);                    /* extern */
M2C_UNK func_8000CB60(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_800A93C0_ovl_01(M2C_UNK);                  /* extern */
M2C_UNK func_800B48D0_ovl_01(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK D_800B3B3C_ovl_01;
extern s8 D_80136D20_ovl_01;
extern M2C_UNK *D_80143F78;
extern u8 D_80143F88;
extern M2C_UNK D_80143F90;
extern M2C_UNK D_80158AC0;
extern s32 D_8015AF10;
extern s32 D_8015AF1C;
extern s32 D_8015AF28;
extern s32 D_8015AF30;
extern M2C_UNK D_8015AF40;
extern M2C_UNK D_8015AF58;

void func_800B4064_ovl_01(s32 arg0) {
    M2C_UNK *var_s0;
    s32 *var_s0_2;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s1_2;

    var_s1 = 0;
    var_s0 = &D_80158AC0;
    D_8015AF30 = arg0;
    D_8015AF1C = 0;
    do {
        func_800B48D0_ovl_01(var_s0, 0, 0, 0, 0);
        if (D_80143F88 != 0) {
            M2C_FIELD(var_s0, u8 *, 0x11DE) = (u8) (M2C_FIELD(var_s0, u8 *, 0x11DE) * 2);
        }
        M2C_FIELD(var_s0, s8 *, 0x1200) = 0;
        var_s1 += 1;
        var_s0 += 0x1228;
    } while (var_s1 < 2);
    func_80006D30(&D_8015AF40, &D_8015AF58, 1);
    func_8000CB60(&D_8015AF40, 0, 0);
    if (D_8015AF30 & 1) {
        temp_s2 = func_800A93C0_ovl_01(0x10E0);
        var_s1_2 = 0;
        var_s0_2 = &D_8015AF28;
        do {
            var_s1_2 += 1;
            temp_v0 = M2C_FIELD(&D_80143F90, s32 (**)(s32, M2C_UNK), 0x18)(temp_s2, 0);
            *var_s0_2 = temp_v0;
            func_80007320(temp_v0, temp_s2);
            var_s0_2 += 4;
        } while (var_s1_2 < 2);
    }
    D_80143F78 = &D_800B3B3C_ovl_01;
    D_80136D20_ovl_01 = 1;
    D_8015AF10 = 0;
}
