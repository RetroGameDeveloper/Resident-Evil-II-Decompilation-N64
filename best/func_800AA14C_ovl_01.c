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

M2C_UNK func_800A81E8_ovl_01(s32);                  /* extern */
s32 func_800A8354_ovl_01(u16, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_800A95A0_ovl_01(void *, f32 *, f32 *, f32 *, f32 *, f32 *); /* extern */
M2C_UNK func_800A9A38_ovl_01(void *, f32, f32, f32, f32, f32); /* extern */
M2C_UNK func_800A9C84_ovl_01(void *, f32);          /* extern */
s32 func_800A9DF8_ovl_01(void *, f32, f32, f32, f32, f32); /* extern */
M2C_UNK func_800A9FA8_ovl_01();                     /* extern */
s32 func_800B22AC_ovl_01(s32);                      /* extern */
extern f32 D_800BA7C8_ovl_01;
extern f32 D_800BA7CC_ovl_01;
extern s8 D_80148650;
extern s8 D_801489E0;
extern s8 D_80148B70;
extern void *D_80148B74;

void func_800AA14C_ovl_01(void) {
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 temp_fv0;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 var_v0;
    s32 var_v0_2;
    void **temp_v1_2;
    void *temp_s1;
    void *var_s0;

    var_s0 = D_80148B74;
    D_80148650 = 0;
    D_801489E0 = 0;
    D_80148B70 = 0;
    if (var_s0 != NULL) {
        do {
            temp_v1 = M2C_FIELD(var_s0, s32 *, 8);
            temp_s1 = M2C_FIELD(var_s0, void **, 0);
            if (temp_v1 & 0x40000) {
                if (temp_s1 != NULL) {
                    M2C_FIELD(temp_s1, void ***, 4) = (void **) M2C_FIELD(var_s0, void ***, 4);
                }
                temp_v1_2 = M2C_FIELD(var_s0, void ***, 4);
                if (temp_v1_2 != NULL) {
                    *temp_v1_2 = M2C_FIELD(var_s0, void **, 0);
                } else {
                    D_80148B74 = M2C_FIELD(var_s0, void **, 0);
                }
                temp_a0 = M2C_FIELD(var_s0, s32 *, 0x34);
                M2C_FIELD(var_s0, s32 *, 8) = (s32) M2C_FIELD(var_s0, u16 *, 0xA);
                if (temp_a0 != -1) {
                    var_s0 = temp_s1;
                    func_800A81E8_ovl_01(temp_a0);
                } else {
                    goto block_42;
                }
            } else {
                if (temp_v1 & 0x20001) {
                    func_800A95A0_ovl_01(var_s0, &sp18, &sp1C, &sp20, &sp24, &sp28);
                }
                temp_v1_3 = M2C_FIELD(var_s0, s32 *, 8);
                if (!(temp_v1_3 & 0x80000)) {
                    if (temp_v1_3 & 0x20000) {
                        if ((sp18 == 0.0f) && (temp_v1_3 & 4)) {
                            var_v0 = (temp_v1_3 | 0x80000) & 0xFFFDFFFF;
                            goto block_26;
                        }
                        if (M2C_FIELD(var_s0, s32 *, 8) & 1) {
                            if (!(func_800A9DF8_ovl_01(var_s0, sp18, sp20, sp24, sp28, sp1C) & 0xFF)) {
                                goto block_27;
                            }
                        } else {
                            temp_v0 = func_800A8354_ovl_01(M2C_FIELD(var_s0, u16 *, 0x3C), 0x7F, 0x40);
                            M2C_FIELD(var_s0, s32 *, 0x34) = temp_v0;
                            if (temp_v0 == -1) {
                                temp_v1_4 = M2C_FIELD(var_s0, s32 *, 8);
                                if (!(temp_v1_4 & 2)) {
                                    var_v0 = (temp_v1_4 | 0x40000) & 0xFFFDFFFF;
                                    goto block_26;
                                }
                            } else {
                                goto block_27;
                            }
                        }
                    } else {
                        temp_v0_2 = func_800B22AC_ovl_01(M2C_FIELD(var_s0, s32 *, 0x34));
                        M2C_FIELD(var_s0, s32 *, 0x34) = temp_v0_2;
                        if (temp_v0_2 == -1) {
                            temp_v1_5 = M2C_FIELD(var_s0, s32 *, 8);
                            var_v0 = temp_v1_5 | 0x20000;
                            if (!(temp_v1_5 & 2)) {
                                var_v0 = temp_v1_5 | 0x40000;
                            }
block_26:
                            M2C_FIELD(var_s0, s32 *, 8) = var_v0;
                        }
block_27:
                        if (M2C_FIELD(var_s0, s32 *, 0x34) != -1) {
                            if (M2C_FIELD(var_s0, s32 *, 8) & 1) {
                                func_800A9C84_ovl_01(var_s0, sp18);
                            }
                            if ((sp18 == 0.0f) && (M2C_FIELD(var_s0, s32 *, 8) & 4)) {
                                func_800A81E8_ovl_01(M2C_FIELD(var_s0, s32 *, 0x34));
                                temp_v1_6 = M2C_FIELD(var_s0, s32 *, 8);
                                M2C_FIELD(var_s0, s32 *, 0x34) = -1;
                                if (temp_v1_6 & 2) {
                                    M2C_FIELD(var_s0, s32 *, 8) = (s32) (temp_v1_6 | 0x80000);
                                } else {
                                    M2C_FIELD(var_s0, s32 *, 8) = (s32) (temp_v1_6 | 0x40000);
                                }
                            } else {
                                func_800A9A38_ovl_01(var_s0, sp18, sp20, sp24, sp28, sp1C);
                            }
                        }
                        if (M2C_FIELD(var_s0, s32 *, 8) & 0x100000) {
                            temp_fv0 = M2C_FIELD(var_s0, f32 *, 0x40) + D_800BA7C8_ovl_01;
                            M2C_FIELD(var_s0, f32 *, 0x40) = temp_fv0;
                            if (D_800BA7CC_ovl_01 <= temp_fv0) {
                                var_v0_2 = M2C_FIELD(var_s0, s32 *, 8) & 0xFFEFFFFF;
                                goto block_41;
                            }
                        }
                    }
                } else if (sp18 != 0.0f) {
                    var_v0_2 = (temp_v1_3 & 0xFFF7FFFF) | 0x20000;
block_41:
                    M2C_FIELD(var_s0, s32 *, 8) = var_v0_2;
                }
block_42:
                var_s0 = temp_s1;
            }
        } while (var_s0 != NULL);
    }
    func_800A9FA8_ovl_01();
}
