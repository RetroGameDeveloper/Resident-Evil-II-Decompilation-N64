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

extern M2C_UNK D_800DFBB4_ovl_01;

void func_80033A0C_ovl_01(M2C_UNK **arg0, u16 arg1, u16 arg2, s32 arg3, s32 arg4) {
    M2C_UNK *var_v1;
    s32 var_t0;
    s32 var_v0;

    var_v1 = &D_800DFBB4_ovl_01;
    var_t0 = 0x32;
    if (M2C_FIELD(&D_800DFBB4_ovl_01, u8 *, 0xE) != 0) {
loop_1:
        var_t0 -= 1;
        var_v1 += 0x68;
        if (var_t0 != 0) {
            if (M2C_FIELD(var_v1, u8 *, 0xE) == 0) {
                goto block_3;
            }
            goto loop_1;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        *arg0 = NULL;
        return;
    }
block_3:
    if (var_t0 == 0) {
        *arg0 = NULL;
        return;
    }
    *arg0 = var_v1;
    M2C_FIELD(var_v1, s8 *, 0xE) = 5;
    M2C_FIELD(var_v1, s32 *, 0x14) = arg4;
    if (arg3 != 0) {
        var_v0 = M2C_FIELD(var_v1, u8 *, 0x1B) | arg3;
    } else {
        var_v0 = 0x80808000;
    }
    M2C_FIELD(var_v1, s32 *, 0x18) = var_v0;
    M2C_FIELD(var_v1, s16 *, 2) = (s16) (arg1 >> 0x10);
    M2C_FIELD(var_v1, u16 *, 0) = arg1;
    M2C_FIELD(var_v1, u16 *, 4) = arg2;
    M2C_FIELD(var_v1, s16 *, 6) = (s16) (arg2 >> 0x10);
}
