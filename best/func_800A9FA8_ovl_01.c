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

s32 func_800A8354_ovl_01(u16, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_800A9A38_ovl_01(void *, f32, s32, s32, f32, f32); /* extern */
extern f32 D_800BA7C0_ovl_01;
extern f32 D_800BA7C4_ovl_01;
extern M2C_UNK D_801484D0;
extern u8 D_80148650;

void func_800A9FA8_ovl_01(void) {
    M2C_UNK *var_s3;
    f32 temp_fv1;
    s32 temp_v0_3;
    s32 temp_v1_2;
    s32 var_s4;
    u16 temp_v0_2;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_4;
    void *temp_v1;
    void *var_s1;

    var_s4 = 0;
    if (D_80148650 != 0) {
        var_s3 = &D_801484D0;
        do {
            var_s1 = M2C_FIELD(var_s3, void **, 4);
            if (var_s1 != NULL) {
                do {
                    temp_v0 = M2C_FIELD(var_s3, void **, 8);
                    if (temp_v0 != NULL) {
                        temp_fv1 = M2C_FIELD(var_s1, f32 *, 4) - M2C_FIELD(temp_v0, f32 *, 4);
                        if (!(temp_fv1 <= D_800BA7C0_ovl_01)) {
                            if (temp_fv1 <= D_800BA7C4_ovl_01) {
                                temp_v1 = M2C_FIELD(var_s1, void **, 0x18);
                                temp_v0_2 = M2C_FIELD(temp_v1, u16 *, 0x3E) + 1;
                                M2C_FIELD(temp_v1, u16 *, 0x3E) = temp_v0_2;
                                if ((u32) (temp_v0_2 & 0xFFFF) < 0x14U) {

                                } else {
                                    goto block_10;
                                }
                            } else {
                                M2C_FIELD(M2C_FIELD(var_s1, void **, 0x18), u16 *, 0x3E) = 0U;
                                goto block_10;
                            }
                        }
                    } else {
block_10:
                        temp_s0 = M2C_FIELD(var_s1, void **, 0x18);
                        temp_v0_3 = func_800A8354_ovl_01(M2C_FIELD(temp_s0, u16 *, 0x3C), 0x7F, 0x40);
                        M2C_FIELD(temp_s0, s32 *, 0x34) = temp_v0_3;
                        if (temp_v0_3 == -1) {
                            temp_v1_2 = M2C_FIELD(temp_s0, s32 *, 8);
                            if (!(temp_v1_2 & 2)) {
                                M2C_FIELD(temp_s0, s32 *, 8) = (s32) ((temp_v1_2 | 0x40000) & 0xFFFDFFFF);
                            }
                        } else {
                            M2C_FIELD(temp_s0, s32 *, 0x40) = 0;
                            M2C_FIELD(temp_s0, s32 *, 8) = (s32) (M2C_FIELD(temp_s0, s32 *, 8) | 0x100000);
                            func_800A9A38_ovl_01(temp_s0, M2C_FIELD(var_s1, f32 *, 4), M2C_FIELD(var_s1, s32 *, 8), M2C_FIELD(var_s1, s32 *, 0xC), M2C_FIELD(var_s1, f32 *, 0x10), M2C_FIELD(var_s1, f32 *, 0x14));
                            M2C_FIELD(temp_s0, s32 *, 8) = (s32) (M2C_FIELD(temp_s0, s32 *, 8) & 0xFFFDFFFF);
                            temp_v0_4 = M2C_FIELD(var_s3, void **, 8);
                            if (temp_v0_4 != NULL) {
                                M2C_FIELD(var_s3, void **, 8) = (void *) M2C_FIELD(temp_v0_4, void **, 0);
                            }
                        }
                    }
                    var_s1 = M2C_FIELD(var_s1, void **, 0);
                } while (var_s1 != NULL);
            }
            var_s4 += 1;
            var_s3 += 0xC;
        } while (var_s4 < (s32) D_80148650);
    }
}
