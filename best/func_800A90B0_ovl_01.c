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

u32 func_800A5BA8_ovl_01(s32);                      /* extern */
M2C_UNK func_800A5BD4_ovl_01(s32, u32);             /* extern */
extern u8 D_801479F8;
extern M2C_UNK D_80148180;

void func_800A90B0_ovl_01(void) {
    M2C_UNK *var_s0;
    s32 var_a0;
    s32 var_s2;
    u32 temp_a1;
    u32 temp_t0;
    u32 temp_v0;
    u32 temp_v1;
    u32 var_a1;

    var_s2 = 0;
    if (D_801479F8 != 0) {
        var_s0 = &D_80148180;
        do {
            if (M2C_FIELD(var_s0, u8 *, 0) == 1) {
                temp_v0 = func_800A5BA8_ovl_01(var_s2);
                temp_t0 = M2C_FIELD(var_s0, u32 *, 0x10);
                if (temp_t0 != temp_v0) {
                    if (temp_t0 < temp_v0) {
                        if (M2C_FIELD(var_s0, s32 (**)(s32, s32, s32, u32, s32), 4)(M2C_FIELD(var_s0, s32 *, 8) + (temp_t0 * 2), temp_v0 - temp_t0, 0, 0U, M2C_FIELD(var_s0, s32 *, 0x14)) & 0xFF) {
                            temp_a1 = M2C_FIELD(var_s0, u32 *, 0x10);
                            var_a0 = M2C_FIELD(var_s0, s32 *, 8) + (temp_a1 * 2);
                            var_a1 = temp_v0 - temp_a1;
                            goto block_9;
                        }
                    } else if (M2C_FIELD(var_s0, s32 (**)(s32, s32, s32, u32, s32), 4)(M2C_FIELD(var_s0, s32 *, 8) + (temp_t0 * 2), M2C_FIELD(var_s0, s32 *, 0xC) - temp_t0, M2C_FIELD(var_s0, s32 *, 8), temp_v0, M2C_FIELD(var_s0, s32 *, 0x14)) & 0xFF) {
                        temp_a1 = M2C_FIELD(var_s0, u32 *, 0x10);
                        func_800A5BD4_ovl_01(M2C_FIELD(var_s0, s32 *, 8) + (temp_a1 * 2), M2C_FIELD(var_s0, s32 *, 0xC) - temp_a1);
                        var_a0 = M2C_FIELD(var_s0, s32 *, 8);
                        var_a1 = temp_v0;
block_9:
                        func_800A5BD4_ovl_01(var_a0, var_a1);
                    }
                }
                M2C_FIELD(var_s0, u32 *, 0x10) = temp_v0;
            }
            var_s2 += 1;
            var_s0 += 0x18;
        } while (var_s2 < (s32) D_801479F8);
    }
}
