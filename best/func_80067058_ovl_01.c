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

s32 func_80067058_ovl_01(void *arg0, s32 arg2, s32 arg3) {
    s32 temp_t0;
    s32 temp_t1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v1;
    s32 var_v1_2;
    u32 temp_a0;

    temp_t1 = M2C_FIELD(arg0, s32 *, 0x120);
    temp_t0 = M2C_FIELD(arg0, s32 *, 0x128);
    temp_a0 = ((u32) (arg2 ^ (temp_t1 - M2C_FIELD(arg0, s16 *, 0x1B4))) >> 0x1F) | (((u32) (arg3 ^ (temp_t0 - M2C_FIELD(arg0, s16 *, 0x1B6))) >> 0x1E) & 2);
    if (temp_a0 != 2) {
        if (temp_a0 < 3U) {
            var_v0 = arg2;
            if (temp_a0 != 1) {
                goto block_28;
            }
            if (arg2 < 0) {
                var_v0 = -arg2;
            }
            var_v0_2 = temp_t1 + arg2;
            if (var_v0 < 0x191) {
                goto block_9;
            }
            goto block_15;
        }
        var_v0 = arg2;
        if (temp_a0 != 3) {
block_28:
            if (arg2 < 0) {
                var_v0 = -arg2;
            }
            var_v1 = arg3;
            if (arg3 < 0) {
                var_v1 = -arg3;
            }
            if (var_v0 < var_v1) {
                var_v0_2 = M2C_FIELD(arg0, s32 *, 0x120) + arg2;
                goto block_9;
            }
            M2C_FIELD(arg0, s32 *, 0x128) = (s32) (M2C_FIELD(arg0, s32 *, 0x128) + arg3);
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return 1;
        }
        goto block_15;
    }
    var_v0_3 = arg3;
    if (arg3 < 0) {
        var_v0_3 = -arg3;
    }
    if (var_v0_3 < 0x191) {
        M2C_FIELD(arg0, s32 *, 0x128) = (s32) (temp_t0 + arg3);
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return 1;
    }
block_15:
    var_v0_4 = arg2;
    if (arg2 < 0) {
        var_v0_4 = -arg2;
    }
    var_v1_2 = arg3;
    if (arg3 < 0) {
        var_v1_2 = -arg3;
    }
    if (var_v0_4 < var_v1_2) {
        var_v0_5 = arg2;
        if (arg2 < 0) {
            var_v0_5 = -arg2;
        }
        if (var_v0_5 < 0x321) {
            var_v0_2 = M2C_FIELD(arg0, s32 *, 0x120) + arg2;
block_9:
            M2C_FIELD(arg0, s32 *, 0x120) = var_v0_2;
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return 1;
        }
        /* Duplicate return node #35. Try simplifying control flow for better match */
        M2C_FIELD(arg0, s32 *, 0x120) = (s32) M2C_FIELD(arg0, s16 *, 0x1B4);
        M2C_FIELD(arg0, s32 *, 0x128) = (s32) M2C_FIELD(arg0, s16 *, 0x1B6);
        return 1;
    }
    var_v0_6 = arg3;
    if (arg3 < 0) {
        var_v0_6 = -arg3;
    }
    if (var_v0_6 < 0x321) {
        M2C_FIELD(arg0, s32 *, 0x128) = (s32) (M2C_FIELD(arg0, s32 *, 0x128) + arg3);
        return 1;
    }
    M2C_FIELD(arg0, s32 *, 0x120) = (s32) M2C_FIELD(arg0, s16 *, 0x1B4);
    M2C_FIELD(arg0, s32 *, 0x128) = (s32) M2C_FIELD(arg0, s16 *, 0x1B6);
    return 1;
}
