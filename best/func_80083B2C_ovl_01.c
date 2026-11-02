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

M2C_UNK func_80083C44_ovl_01(s16);                  /* extern */
s32 func_80083D5C_ovl_01(void *, void *);           /* extern */
extern M2C_UNK D_800C7650_ovl_01;

s32 func_80083B2C_ovl_01(s32 arg0) {
    u8 *var_s0;
    u8 temp_v1;
    u8 var_a0_2;
    void *var_a0;
    void *var_s1;

    var_s1 = M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18294) + 0x14;
    if (M2C_FIELD(var_s1, u8 *, 2) == M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FC)) {
        var_s0 = M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18294) + 0x16;
loop_2:
        if (M2C_FIELD(var_s1, u8 *, 0) != 0) {
            temp_v1 = M2C_FIELD(var_s0, u8 *, -1);
            var_a0 = &D_800C7650_ovl_01 + 0x19AA8;
            if (temp_v1 != 0xFF) {
                if (temp_v1 == M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19C22)) {
                    var_a0 = &D_800C7650_ovl_01 + 0x19AA8;
                    goto block_6;
                }
                goto block_9;
            }
block_6:
            if (func_80083D5C_ovl_01(var_a0, var_s1) == 0) {
                goto block_9;
            }
            var_a0_2 = M2C_FIELD(var_s1, u8 *, 3);
            goto block_14;
        }
block_9:
        var_s0 += 0x14;
        var_s1 += 0x14;
        if (*var_s0 != M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FC)) {
            goto block_10;
        }
        goto loop_2;
    }
block_10:
    if (arg0 == 0) {
        return 0;
    }
    var_a0_2 = (u8) M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FC);
block_14:
    func_80083C44_ovl_01((s16) var_a0_2);
    return 1;
}
