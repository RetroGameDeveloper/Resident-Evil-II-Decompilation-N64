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

extern s32 D_80185720_ovl_02;
extern s32 D_80185724_ovl_02;

void func_801803EC_ovl_02(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 var_v0;
    s32 var_v0_10;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v0_9;

    if (D_80185720_ovl_02 == 3) {
        if (D_80185724_ovl_02 == 0) {
            var_v0 = arg2 * 3;
            if (arg2 > 0) {
                var_v0 += 1;
            }
            M2C_FIELD(arg0, s32 *, 0) = (s32) ((var_v0 >> 1) + M2C_FIELD(arg1, s32 *, 0));
            var_v0_2 = arg3 * 3;
            if (arg3 > 0) {
                var_v0_2 += 1;
            }
            M2C_FIELD(arg0, s32 *, 4) = (s32) (((var_v0_2 >> 1) + M2C_FIELD(arg1, s32 *, 4)) - 1);
            if (arg2 > 0) {
                var_v0_3 = (s32) (arg2 + 1) >> 1;
            } else {
                var_v0_3 = arg2 >> 1;
            }
            M2C_FIELD(arg0, s32 *, 8) = (s32) (var_v0_3 + M2C_FIELD(arg1, s32 *, 0));
            var_v0_4 = arg3 + 1;
            if (arg3 <= 0) {
                var_v0_5 = arg3 >> 1;
            } else {
                goto block_15;
            }
        } else {
            if (arg2 > 0) {
                var_v0_6 = (s32) (arg2 + 1) >> 1;
            } else {
                var_v0_6 = arg2 >> 1;
            }
            M2C_FIELD(arg0, s32 *, 0) = (s32) (var_v0_6 + M2C_FIELD(arg1, s32 *, 0));
            if (arg3 <= 0) {
                var_v0_7 = arg3 >> 1;
            } else {
                var_v0_7 = (s32) (arg3 + 1) >> 1;
            }
            M2C_FIELD(arg0, s32 *, 4) = (s32) ((var_v0_7 + M2C_FIELD(arg1, s32 *, 4)) - 1);
            var_v0_8 = arg2 * 3;
            if (arg2 > 0) {
                var_v0_8 += 1;
            }
            M2C_FIELD(arg0, s32 *, 8) = (s32) ((var_v0_8 >> 1) + M2C_FIELD(arg1, s32 *, 0));
            var_v0_4 = arg3 * 3;
            if (arg3 > 0) {
                var_v0_4 += 1;
            }
block_15:
            var_v0_5 = var_v0_4 >> 1;
        }
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (var_v0_5 + M2C_FIELD(arg1, s32 *, 4) + 1);
        return;
    }
    if (arg2 > 0) {
        var_v0_9 = (s32) (arg2 + 1) >> 1;
    } else {
        var_v0_9 = arg2 >> 1;
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) (var_v0_9 + M2C_FIELD(arg1, s32 *, 0));
    if (arg3 > 0) {
        var_v0_10 = (s32) (arg3 + 1) >> 1;
    } else {
        var_v0_10 = arg3 >> 1;
    }
    temp_a1 = var_v0_10 + M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4) = temp_a1;
    if (D_80185720_ovl_02 == 1) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_a1 - 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_a1 + 1);
}
