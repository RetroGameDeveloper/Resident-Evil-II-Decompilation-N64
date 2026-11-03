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

s32 func_800439B8_ovl_01(s32, void *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800DF650_ovl_01;
extern M2C_UNK D_8017E274_ovl_05;
extern u8 D_8017E53D_ovl_05;

void func_8017BF1C_ovl_05(void) {
    s32 var_s1;
    void *temp_a1;
    void *var_s0;

    var_s1 = 7;
    var_s0 = (D_8017E53D_ovl_05 * 0x8C) + &D_8017E274_ovl_05;
    do {
        temp_a1 = var_s0;
        var_s0 += 0x14;
        var_s1 -= 1;
        M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204) = func_800439B8_ovl_01(M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204), temp_a1, 0, 0);
    } while (var_s1 != 0);
}
