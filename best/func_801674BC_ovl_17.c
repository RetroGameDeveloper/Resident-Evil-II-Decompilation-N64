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

extern M2C_UNK D_800E7650_ovl_01;

s32 func_801674BC_ovl_17(void *arg0) {
    s32 temp_a0;
    s32 temp_a2;
    s32 var_a2;
    s32 var_a3;
    u32 temp_a0_2;
    u32 temp_a1;
    u32 var_t0;
    u8 temp_a3;
    void *temp_s0;
    void *temp_v1;

    temp_s0 = arg0 + 0x2B4;
    if (M2C_FIELD(temp_s0, u8 *, 0x24) != 0xE) {
        temp_a2 = func_80033634_ovl_01() & 7;
        if ((u8) M2C_FIELD(temp_s0, u8 *, 9) >= 3U) {
            temp_a3 = M2C_FIELD(temp_s0, u8 *, 8);
            if (!(((s32) temp_a3 >> temp_a2) & 1)) {
                temp_a0 = temp_a2 * 2;
                temp_a1 = temp_a0 + 3;
                var_t0 = temp_a1;
                temp_a0_2 = temp_a0 + 4;
                M2C_FIELD(temp_s0, u8 *, 8) = (u8) (temp_a3 | (1 << temp_a2));
                M2C_FIELD(temp_s0, u8 *, 9) = (u8) (M2C_FIELD(temp_s0, u8 *, 9) - 1);
                if (temp_a0_2 >= temp_a1) {
                    var_a3 = temp_a1 * 0x178;
                    do {
                        temp_v1 = M2C_FIELD(arg0, s32 *, 0x234) + var_a3;
                        var_a2 = M2C_FIELD(temp_v1, s32 *, 0);
                        if (M2C_FIELD(&D_800E7650_ovl_01, u8 *, 0x1962) & 8) {
                            var_a2 |= 0x4A;
                        }
                        M2C_FIELD(temp_v1, s32 *, 0) = var_a2;
                        var_t0 += 1;
                        M2C_FIELD(temp_v1, s16 *, 0x138) = 0;
                        M2C_FIELD(temp_v1, s16 *, 0x134) = 0x258;
                        M2C_FIELD(temp_v1, s16 *, 0x132) = -0x78;
                        M2C_FIELD(temp_v1, s16 *, 0x136) = 0xA;
                        M2C_FIELD(temp_v1, s16 *, 0x13C) = -0x64;
                        M2C_FIELD(temp_v1, s32 *, 0x60) = 0x2F2F2F;
                        M2C_FIELD(temp_v1, s16 *, 0x130) = (s16) (M2C_FIELD(arg0, u16 *, 0x66) + 0x800);
                        var_a3 += 0x178;
                    } while (temp_a0_2 >= var_t0);
                }
                func_80166FBC_ovl_17(arg0, (s32) temp_a1, 1);
                return 0;
            }
            goto block_10;
        }
block_10:
        func_80166FBC_ovl_17(arg0, 0x13, 1);
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return 1;
    }
    return 1;
}
