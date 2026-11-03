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

s32 func_80043898_ovl_01(s32, s32 *, s32 *);        /* extern */
u8 *func_8004BB08_ovl_01(s32);                      /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800F9E60_ovl_01;
extern M2C_UNK D_800FE228_ovl_01;
extern M2C_UNK D_8010B25C_ovl_01;

void func_8004BF9C_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *var_s1;
    s32 temp_a0_2;
    s32 temp_s2;
    s32 var_s0;
    s32 var_t1;
    s8 temp_v1;
    u8 *var_a2;
    u8 temp_a0;
    u8 var_v1;
    void *temp_s0;
    void *var_a3;

    var_s0 = arg0;
    var_s1 = M2C_FIELD(&D_800FE228_ovl_01, s32 **, 0xC800);
    var_a2 = func_8004BB08_ovl_01(arg3 & 0xFF);
    temp_s2 = arg2 & 0x4000;
    if (*var_a2 != 0xF7) {
        var_a3 = var_s1 + 0xC;
        var_v1 = *var_a2;
loop_2:
        var_t1 = 0xE;
        switch (var_v1) {                           /* irregular */
        case 0xF0:
            var_a2 += 1;
            M2C_FIELD(var_a3, s8 *, -3) = (s8) ((((*var_a2 / 18) & 0xFF) * 0xE) - 0x3C);
block_19:
            *var_s1 = 0x64808080;
            M2C_FIELD(var_a3, s32 *, -8) = (s32) ((arg1 & 0xFFFF) | (var_s0 << 0x10));
            M2C_FIELD(var_a3, s32 *, 4) = 0xE000E;
            var_s1 += 0x14;
            M2C_FIELD(var_a3, s8 *, -9) = 0;
            M2C_FIELD(var_a3, s16 *, -2) = (s16) ((arg2 & 0x30) * 4);
            M2C_FIELD(var_a3, M2C_UNK **, 0) = &D_8010B25C_ovl_01;
            M2C_FIELD(var_a3, s8 *, -4) = (s8) (((*var_a2 % 18) & 0xFF) * 0xE);
            var_a3 += 0x14;
            if (var_s1 != (&D_800FE228_ovl_01 + 0x1400)) {
block_20:
                var_a2 += 1;
                var_v1 = *var_a2;
                var_s0 += var_t1;
                if (var_v1 != 0xF7) {
                    goto loop_2;
                }
            }
            break;
        case 0x0:
            if (temp_s2 != 0) {
                var_s0 -= M2C_FIELD(&D_800F9E60_ovl_01, s8 *, 0);
                var_t1 = M2C_FIELD(&D_800F9E60_ovl_01, s8 *, 1) + M2C_FIELD(&D_800F9E60_ovl_01, s8 *, 0);
            }
            goto block_20;
        case 0xEE:
            var_a2 += 1;
            M2C_FIELD(var_a3, s8 *, -3) = (s8) ((((*var_a2 / 18) & 0xFF) * 0xE) - 0x2E);
            goto block_19;
        case 0xEF:
            var_a2 += 1;
            M2C_FIELD(var_a3, s8 *, -3) = (s8) (((*var_a2 / 18) & 0xFF) * 0xE);
            goto block_19;
        default:
            M2C_FIELD(var_a3, s8 *, -3) = (s8) ((((*var_a2 / 18) & 0xFF) * 0xE) + 0x1C);
            if (temp_s2 != 0) {
                temp_a0 = *var_a2;
                temp_a0_2 = temp_a0 * 2;
                if (temp_a0 < 0x57U) {
                    temp_v1 = *(temp_a0_2 + &D_800F9E60_ovl_01);
                    var_s0 -= temp_v1;
                    var_t1 = *(temp_a0_2 + 1 + &D_800F9E60_ovl_01) + temp_v1;
                }
            }
            goto block_19;
        }
    }
    if (M2C_FIELD(&D_800FE228_ovl_01, s32 **, 0xC800) != var_s1) {
        temp_s0 = &D_800C7650_ovl_01 + (0x10000 | 0x8000);
        M2C_FIELD(temp_s0, s32 *, 0x204) = func_80043898_ovl_01(M2C_FIELD(temp_s0, s32 *, 0x204), M2C_FIELD(&D_800FE228_ovl_01, s32 **, 0xC800), var_s1);
    }
    M2C_FIELD(&D_800FE228_ovl_01, s32 **, 0xC800) = var_s1;
}
