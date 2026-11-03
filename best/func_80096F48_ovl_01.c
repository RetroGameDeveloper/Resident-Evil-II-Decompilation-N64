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

M2C_UNK func_80043650_ovl_01();                     /* extern */
s32 func_800439B8_ovl_01(s32, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800478E8_ovl_01(s32, s32, s32);        /* extern */
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_800DF650_ovl_01;
extern M2C_UNK D_8012BF38_ovl_01;
extern M2C_UNK D_80131280_ovl_01;

void func_80096F48_ovl_01(s32 arg0) {
    s16 temp_s4;
    s16 temp_s5;
    s16 var_v1;
    s32 temp_a1;
    s32 var_s1;
    s32 var_s2;
    void *var_s0;

    func_80043650_ovl_01();
    var_s1 = D_800C527C_ovl_01 + 0x3BBF4;
    temp_s5 = M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x4C);
    temp_s4 = M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x4E);
    var_s2 = 6;
    if (arg0 != 0) {
        var_s2 = 0x11;
        var_v1 = 0x91;
    } else {
        var_v1 = 0x55;
    }
    M2C_FIELD(&D_80131280_ovl_01, s16 *, 0xE) = var_v1;
    M2C_FIELD(&D_80131280_ovl_01, s16 *, 0xA) = var_v1;
    var_s0 = (var_s2 * 4) + &D_80131280_ovl_01;
    do {
        var_s0 -= 4;
        var_s2 -= 1;
        func_800478E8_ovl_01(var_s1, (M2C_FIELD(var_s0, u16 *, 0) + temp_s5) & 0xFFFF, (M2C_FIELD(var_s0, u16 *, 2) + temp_s4) & 0xFFFF);
        temp_a1 = var_s1;
        var_s1 += 0x14;
        M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x200) = func_800439B8_ovl_01(M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x200), temp_a1, 0, 0);
    } while (var_s2 != 0);
}
