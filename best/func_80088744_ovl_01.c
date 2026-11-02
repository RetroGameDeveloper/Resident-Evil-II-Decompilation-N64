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

s32 func_800072E0();                                /* extern */
M2C_UNK func_80007300(s32, s32);                    /* extern */
M2C_UNK func_80007320(s32, u32);                    /* extern */
M2C_UNK func_8000BD80(M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32, u32, M2C_UNK *); /* extern */
M2C_UNK func_8000C9E0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8000EFA0(s32, u32);                    /* extern */
M2C_UNK func_80011390();                            /* extern */
extern s32 D_8012BA90_ovl_01;
extern u32 D_8012BA94_ovl_01;
extern s32 D_8012BA98_ovl_01;
extern s32 D_8012BA9C_ovl_01;
extern M2C_UNK D_8012BC98_ovl_01;
extern M2C_UNK D_8012BCD0_ovl_01;

void func_80088744_ovl_01(s32 arg0, s32 arg1, u32 arg2) {
    M2C_UNK sp20;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_s1;
    u32 var_s0;

    temp_v0 = func_800072E0();
    temp_a1 = D_8012BA98_ovl_01 + 1;
    D_8012BA98_ovl_01 = temp_a1;
    if (D_8012BA9C_ovl_01 < temp_a1) {
        D_8012BA9C_ovl_01 = temp_a1;
    }
    func_80007300(temp_v0, temp_a1);
    func_8000EFA0(arg0, arg2);
    var_s1 = 0;
    if (D_8012BA90_ovl_01 != 0) {
        do {
            var_s0 = arg2 - var_s1;
            if ((u32) D_8012BA94_ovl_01 < var_s0) {
                var_s0 = D_8012BA94_ovl_01;
            }
            func_8000BD80(&sp20, 0, 0, arg1 + var_s1, arg0 + var_s1, var_s0, &D_8012BCD0_ovl_01);
            func_8000C9E0(&D_8012BC98_ovl_01, 0, 1);
            var_s1 += var_s0;
        } while (var_s1 != arg2);
    } else {
        func_8000BD80(&sp20, 0, 0, arg1, arg0, arg2, &D_8012BCD0_ovl_01);
        func_8000C9E0(&D_8012BC98_ovl_01, 0, 1);
    }
    func_80007320(arg0, arg2);
    func_80011390();
    temp_a0 = func_800072E0();
    D_8012BA98_ovl_01 -= 1;
    func_80007300(temp_a0, (s32) &D_8012BA98_ovl_01);
}
