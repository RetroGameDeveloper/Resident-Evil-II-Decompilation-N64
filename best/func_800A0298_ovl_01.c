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

s32 func_800AB36C_ovl_01();                         /* extern */
extern u8 D_801362B1_ovl_01;
extern void *D_80143BF8;

void func_800A0298_ovl_01(void) {
    s32 temp_hi;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_v0;
    void *var_a1;

    var_s0 = 0;
    if (D_801362B1_ovl_01 != 0) {
        var_v0 = 0 < 0x40;
        if (D_801362B1_ovl_01 != 0x2A) {
            var_v0 = 0 < 0x40;
            if (!(func_800AB36C_ovl_01() & 3)) {
                temp_v0 = func_800AB36C_ovl_01();
                temp_v0_2 = temp_v0 & 0xFFFF;
                temp_hi = (temp_v0 & 0xFFFF) / 63;
                var_s0 = (temp_v0_2 - (((u32) (temp_hi + ((u32) (temp_v0_2 - temp_hi) >> 1)) >> 5) * 0x3F)) & 0xFFFF;
                goto block_4;
            }
        }
    } else {
block_4:
        var_v0 = var_s0 < 0x40;
    }
    if (var_v0 != 0) {
        var_a1 = (var_s0 * 0x28) + D_80143BF8;
        do {
            if ((M2C_FIELD(var_a1, s32 *, 0x574) != 0) || (M2C_FIELD(var_a1, s32 *, 0x578) != 0) || (M2C_FIELD(var_a1, s32 *, 0x57C) != 0)) {
                temp_v0_3 = M2C_FIELD(var_a1, s32 *, 0x568) + M2C_FIELD(D_80143BF8, s32 *, 0x118);
                M2C_FIELD(var_a1, s32 *, 0x568) = (s32) (temp_v0_3 & 0xFFFF);
                M2C_FIELD(var_a1, s32 *, 0x56C) = (s32) (M2C_FIELD(var_a1, s32 *, 0x56C) + ((temp_v0_3 >> 0x10) + M2C_FIELD(D_80143BF8, s32 *, 0x11C)));
            }
            var_a1 += 0x28;
        } while ((s32) var_a1 < (s32) (D_80143BF8 + 0xA00));
    }
}
