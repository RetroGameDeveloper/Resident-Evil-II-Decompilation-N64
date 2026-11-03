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

M2C_UNK func_8017BB68_ovl_02(M2C_UNK);              /* extern */
s16 func_8017BE48_ovl_02(M2C_UNK);                  /* extern */
extern s32 D_80185708_ovl_02;
extern s32 D_80185720_ovl_02;
extern s32 D_80185734_ovl_02;

void func_8017DA1C_ovl_02(void) {
    s16 sp10;
    s16 sp18;
    s16 *var_s1;
    s16 *var_s2;
    s32 var_s0;
    s32 var_s3;

    if ((D_80185708_ovl_02 != 0) || (D_80185720_ovl_02 != 3)) {
        var_s3 = 1;
    } else {
        var_s3 = 2;
        if (D_80185734_ovl_02 != 0) {
            var_s3 = 3;
        }
    }
    var_s0 = 0;
    if (var_s3 != 0) {
        var_s2 = &sp18;
        var_s1 = &sp10;
        do {
            *var_s1 = func_8017BE48_ovl_02(0x10);
            func_8017BB68_ovl_02(1);
            *var_s2 = func_8017BE48_ovl_02(0x10);
            func_8017BB68_ovl_02(1);
            var_s2 += 2;
            var_s0 += 1;
            var_s1 += 2;
        } while (var_s0 < var_s3);
    }
}
