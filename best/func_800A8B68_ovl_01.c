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

s32 func_8009F850_ovl_01(void *, void *, u16 *, M2C_UNK, s32); /* extern */
M2C_UNK func_800A5618_ovl_01(u16, void *, void **, s32); /* extern */
M2C_UNK func_800A5660_ovl_01();                     /* extern */
extern u8 D_801362B0_ovl_01;
extern s16 D_80147F70;
extern void *D_80147F80;

s32 func_800A8B68_ovl_01(s32 arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_a3;
    s32 temp_s0;
    s32 var_v1;
    u16 *var_s0;
    u16 var_a0;
    void **var_a2;
    void *temp_a1;
    void *temp_s1;
    void *temp_s2;

    if (D_801362B0_ovl_01 != 0) {
        var_v1 = 0;
        if (D_80147F70 > 0) {
            temp_a3 = arg1 & 0xFFFF;
            var_a2 = &D_80147F80;
loop_3:
            temp_a1 = *var_a2;
            if (M2C_FIELD(temp_a1, u16 *, 4) == (arg0 & 0xFFFF)) {
                if (M2C_FIELD(temp_a1, u16 *, 6) == 0) {
                    var_s0 = temp_a1 + (M2C_FIELD(temp_a1, s32 *, 0x24) + 8);
                    var_a0 = *var_s0;
                    temp_s1 = temp_a1 + (M2C_FIELD(temp_a1, s32 *, 0x20) + 8);
                    temp_s2 = temp_a1 + (M2C_FIELD(temp_a1, s32 *, 0x1C) + 8);
                    if (var_a0 != 0xFFFF) {
loop_6:
                        if (var_a0 != temp_a3) {
                            var_s0 += 0x84;
                            var_a0 = *var_s0;
                            if (var_a0 == 0xFFFF) {
                                return -1;
                            }
                            goto loop_6;
                        }
                        func_800A5618_ovl_01(var_a0, temp_a1, var_a2, temp_a3);
                        temp_s0 = func_8009F850_ovl_01(temp_s2, temp_s1, var_s0, arg2, arg3);
                        func_800A5660_ovl_01();
                        return temp_s0;
                    }
                    goto block_13;
                }
                /* Duplicate return node #14. Try simplifying control flow for better match */
                return -1;
            }
            var_v1 += 1;
            var_a2 += 4;
            if (var_v1 >= D_80147F70) {
                goto block_13;
            }
            goto loop_3;
        }
    }
block_13:
    return -1;
}
