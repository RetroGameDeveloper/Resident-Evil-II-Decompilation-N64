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

extern M2C_UNK D_800C7650_ovl_01;
extern void *D_800E138C_ovl_01;
extern u8 D_801137A0_ovl_01;
extern M2C_UNK D_80113A70_ovl_01;

void func_8006D150_ovl_01(void) {
    s32 temp_a1;
    s32 var_t2;
    s8 temp_v1;
    s8 var_t0;
    u8 *var_a0;
    u8 *var_a1;
    u8 temp_a2;
    void **var_a2;
    void *temp_a0;

    var_t2 = 0;
    if (!(M2C_FIELD(&D_80113A70_ovl_01, s32 *, 0x146C) & 0xFFFF0000)) {
        goto block_1;
    }
    var_a1 = &D_801137A0_ovl_01;
    var_t0 = 0;
    if (D_801137A0_ovl_01 != 0xFF) {
        var_a0 = &D_801137A0_ovl_01 + 1;
loop_5:
        temp_a2 = *var_a1;
        if ((temp_a2 != (u8) M2C_FIELD(&D_80113A70_ovl_01, s32 *, 0x146C)) || ((M2C_FIELD(&D_80113A70_ovl_01, u8 *, 0x146D) != 0) && (M2C_FIELD(&D_80113A70_ovl_01, u8 *, 0x146D) != *var_a0))) {
            if (*var_a0 == (u8) M2C_FIELD(&D_80113A70_ovl_01, s32 *, 0x146C)) {
                if (M2C_FIELD(&D_80113A70_ovl_01, u8 *, 0x146D) != 0) {
                    if (M2C_FIELD(&D_80113A70_ovl_01, u8 *, 0x146D) != temp_a2) {
                        goto block_13;
                    }
                    goto block_15;
                }
block_15:
                var_t2 = 1;
                goto block_16;
            }
block_13:
            var_a0 += 2;
            var_a1 += 2;
            var_t0 += 1;
            if (*var_a1 == 0xFF) {
                /* Duplicate return node #2. Try simplifying control flow for better match */
                M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x20F6F) = 0xFF;
                return;
            }
            goto loop_5;
        }
block_16:
        var_a2 = &D_800E138C_ovl_01;
        M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x20F6F) = var_t0;
        if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1828C) != &D_800E138C_ovl_01) {
            do {
                temp_a0 = *var_a2;
                temp_a1 = M2C_FIELD(temp_a0, s32 *, 0);
                if (temp_a1 & 1) {
                    temp_v1 = M2C_FIELD(temp_a0, s8 *, 0x296);
                    if (temp_v1 == (u8) M2C_FIELD(&D_80113A70_ovl_01, s32 *, 0x146C)) {
                        if (var_t2 == 1) {
                            M2C_FIELD(temp_a0, s32 *, 0) = (s32) (temp_a1 | 0x2000);
                        }
                    } else if ((temp_v1 == M2C_FIELD(&D_80113A70_ovl_01, u8 *, 0x146D)) && (var_t2 == 0)) {
                        M2C_FIELD(temp_a0, s32 *, 0) = (s32) (temp_a1 | 0x2000);
                    }
                }
                var_a2 += 4;
            } while (var_a2 != M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1828C));
        }
        return;
    }
block_1:
    M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x20F6F) = 0xFF;
}
