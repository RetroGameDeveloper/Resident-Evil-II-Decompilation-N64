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

s32 func_800439B8_ovl_01(s32, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800478E8_ovl_01(s32, s32, s32);        /* extern */
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_800DF650_ovl_01;
extern M2C_UNK D_8012BF38_ovl_01;
extern M2C_UNK D_801311F8_ovl_01;

void func_80096D70_ovl_01(void) {
    s16 temp_s4;
    s16 temp_s5;
    s32 temp_a1;
    s32 var_s1;
    s32 var_s2;
    u32 temp_v1;
    u32 var_a1;
    void *var_s0;

    var_a1 = D_800C527C_ovl_01 + 0x3BB64;
    temp_v1 = D_800C527C_ovl_01 + 0x3C004;
    if (var_a1 < temp_v1) {
        var_a1 = temp_v1;
    }
    var_s1 = var_a1 + 0x758;
    var_s2 = 0x11;
    var_s0 = &D_801311F8_ovl_01 + 0x44;
    temp_s5 = M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x38);
    temp_s4 = M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x3A);
    do {
        var_s0 -= 4;
        var_s2 -= 1;
        func_800478E8_ovl_01(var_s1, (M2C_FIELD(var_s0, u16 *, 0) + temp_s5) & 0xFFFF, (M2C_FIELD(var_s0, u16 *, 2) + temp_s4) & 0xFFFF);
        temp_a1 = var_s1;
        var_s1 += 0x14;
        M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204) = func_800439B8_ovl_01(M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204), temp_a1, 0, 0);
    } while (var_s2 != 0);
}
