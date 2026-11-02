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

M2C_UNK func_80043650_ovl_01();                     /* extern */
s32 func_800439B8_ovl_01(s32, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800478DC_ovl_01(s32, s32, M2C_UNK);    /* extern */
M2C_UNK func_800478E8_ovl_01(s32, s32, s32);        /* extern */
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_800DF650_ovl_01;
extern M2C_UNK D_8012BF38_ovl_01;

void func_80098AE8_ovl_01(void) {
    s32 temp_a1;
    s32 var_a1;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;

    func_80043650_ovl_01();
    var_s1 = 2;
    var_s4 = 0x187;
    var_s3 = 0x38;
    var_s2 = 0x30;
    var_s0 = D_800C527C_ovl_01 + 0x3F800;
    do {
        var_s4 -= 0xBA;
        var_s3 -= 0x10;
        var_s1 -= 1;
        var_s2 -= 0x10;
        if (M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 2) == (var_s1 + 4)) {
            var_a1 = var_s2 & 0xFFFF;
        } else {
            var_a1 = var_s3 & 0xFFFF;
        }
        func_800478DC_ovl_01(var_s0, var_a1, 8);
        func_800478E8_ovl_01(var_s0, ((M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x4C) + var_s4) - 0xA) & 0xFFFF, (M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x4E) + 0x36) & 0xFFFF);
        temp_a1 = var_s0;
        var_s0 += 0x28;
        M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204) = func_800439B8_ovl_01(M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204), temp_a1, 0, 0);
    } while (var_s1 != 0);
}
