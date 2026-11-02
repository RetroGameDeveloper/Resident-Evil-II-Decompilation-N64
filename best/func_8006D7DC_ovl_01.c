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

M2C_UNK func_800377B0_ovl_01(s32, M2C_UNK, void *, s16 *); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E1898_ovl_01;

void func_8006D7DC_ovl_01(void) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    M2C_UNK *var_a2;
    s32 var_v0;
    u32 var_a0;
    u32 var_s0;
    u8 temp_a0;
    u8 temp_s2;

    temp_s2 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), u8 *, 2);
    var_s0 = 0;
    if (temp_s2 != 0) {
        var_a2 = &D_800E1898_ovl_01;
        do {
            var_s0 += 1;
            if (M2C_FIELD(var_a2, s32 *, 0) & 1) {
                temp_a0 = M2C_FIELD(var_a2, u8 *, 0x1E1);
                var_v0 = var_s0 < temp_s2;
                if (temp_a0 & 0x80) {
                    var_a0 = (u32) (temp_a0 & 0x60) >> 5;
                    sp10 = 0;
                    sp12 = -0x5A;
                    sp14 = 0;
                    if (var_a0 == 0) {
                        var_a0 = 1;
                    }
                    func_800377B0_ovl_01((((var_a0 * 8) + 7) << 0x10) | 0x05002800, 0, var_a2 + 0x14, &sp10);
                    goto block_7;
                }
            } else {
block_7:
                var_v0 = var_s0 < temp_s2;
            }
            var_a2 += 0x368;
        } while (var_v0 != 0);
    }
}
