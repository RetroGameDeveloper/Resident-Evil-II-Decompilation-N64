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

s32 func_8009FE58_ovl_01();                         /* extern */
M2C_UNK func_800A0298_ovl_01();                     /* extern */
s32 func_800A03A4_ovl_01();                         /* extern */
M2C_UNK func_800A04B8_ovl_01();                     /* extern */
M2C_UNK func_800A0668_ovl_01();                     /* extern */
s32 func_800A0820_ovl_01(u32, M2C_UNK *);           /* extern */
M2C_UNK func_800A8278_ovl_01(s32, u8, M2C_UNK *, M2C_UNK *); /* extern */
s8 func_800A8304_ovl_01(u8);                        /* extern */
s32 func_800B22AC_ovl_01(s32);                      /* extern */
extern void *D_8013BC20;
extern M2C_UNK D_8013BC30;
extern M2C_UNK D_80143BF0;
extern s8 D_80143BF4;
extern M2C_UNK *D_80143BF8;
extern s32 D_80147F40;
extern s32 D_80147F44;

void func_800A1B88_ovl_01(void) {
    M2C_UNK *var_s2;
    s32 temp_a0;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_s6;
    s32 var_a0;
    u32 *temp_a0_2;
    u32 *temp_a1;
    u32 temp_lo;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 var_s7;
    void **temp_v1_2;
    void *temp_s1;
    void *temp_v1;
    void *var_s0;

    if (D_80147F40 != 0) {
        var_s7 = 0;
        var_s2 = &D_8013BC30;
        do {
            if (M2C_FIELD(var_s2, u8 *, 0xFC0) != 0) {
                D_80143BF8 = var_s2;
                M2C_FIELD(&D_80143BF0, u32 *, 0) = var_s7;
                D_80143BF4 = func_800A8304_ovl_01(M2C_FIELD(var_s2, u8 *, 0xFC4));
                if ((M2C_FIELD(D_80143BF8, s32 *, 0xF68) != 0) && (*M2C_FIELD(D_80143BF8, s32 **, 0xF6C) != -1)) {
loop_5:
                    temp_a1 = M2C_FIELD(D_80143BF8, s32 **, 0xF6C);
                    if ((u32) (M2C_FIELD(D_80143BF8, s32 *, 0xF74) + M2C_FIELD(D_80143BF8, s32 *, 0x120)) >= (u32) M2C_FIELD(temp_a1, u32 *, 0)) {
                        temp_a0 = M2C_FIELD(temp_a1, s32 *, 4);
                        M2C_FIELD(D_80143BF8, s32 *, 0x124) = temp_a0;
                        func_800A8278_ovl_01(temp_a0, M2C_FIELD(&D_80143BF0, u8 *, 3), D_80143BF8, &D_80143BF0);
                        temp_a0_2 = M2C_FIELD(D_80143BF8, u32 **, 0xF6C);
                        M2C_FIELD(D_80143BF8, u32 **, 0xF6C) = (u32 *) (temp_a0_2 + 8);
                        if (M2C_FIELD(temp_a0_2, s32 *, 8) != -1) {
                            goto loop_5;
                        }
                    }
                }
                var_a0 = (s32) (D_80147F40 << 0x10) / (s32) D_80147F44;
                temp_lo = ((u32) (((M2C_FIELD(D_80143BF8, s32 *, 0x124) * 0xC00) / 60) * var_a0) >> 3) * M2C_FIELD(D_80143BF8, u16 *, 0xFC2);
                M2C_FIELD(D_80143BF8, s32 *, 0x118) = (s32) ((temp_lo >> 8) & 0xFFFF);
                temp_v0 = temp_lo >> 0x18;
                M2C_FIELD(D_80143BF8, u32 *, 0x11C) = temp_v0;
                M2C_FIELD(D_80143BF8, s32 *, 0x120) = (s32) ((s32) temp_v0 >> 1);
                if (M2C_FIELD(D_80143BF8, s32 *, 0xF68) != 0) {
                    var_a0 = (s32) M2C_FIELD(D_80143BF8, u32 *, 0x11C);
                    temp_v0_2 = M2C_FIELD(D_80143BF8, s32 *, 0xF70) + M2C_FIELD(D_80143BF8, s32 *, 0x118);
                    M2C_FIELD(D_80143BF8, s32 *, 0xF70) = (s32) (temp_v0_2 & 0xFFFF);
                    M2C_FIELD(D_80143BF8, s32 *, 0xF74) = (s32) (M2C_FIELD(D_80143BF8, s32 *, 0xF74) + ((temp_v0_2 >> 0x10) + var_a0));
                }
                temp_s6 = func_800A0820_ovl_01((u32) var_a0, D_80143BF8);
                temp_s5 = func_8009FE58_ovl_01();
                func_800A04B8_ovl_01();
                func_800A0668_ovl_01();
                func_800A0298_ovl_01();
                var_s0 = M2C_FIELD(D_80143BF8, void **, 0xF7C);
                temp_s4 = func_800A03A4_ovl_01();
                if (var_s0 != NULL) {
                    do {
                        temp_s1 = M2C_FIELD(var_s0, void **, 0);
                        if (func_800B22AC_ovl_01(M2C_FIELD(var_s0, s32 *, 8)) == -1) {
                            temp_v1 = M2C_FIELD(var_s0, void **, 0);
                            if (temp_v1 != NULL) {
                                M2C_FIELD(temp_v1, void ***, 4) = (void **) M2C_FIELD(var_s0, void ***, 4);
                            }
                            temp_v1_2 = M2C_FIELD(var_s0, void ***, 4);
                            if (temp_v1_2 != NULL) {
                                *temp_v1_2 = M2C_FIELD(var_s0, void **, 0);
                            } else {
                                M2C_FIELD(D_80143BF8, void **, 0xF7C) = (void *) M2C_FIELD(var_s0, void **, 0);
                            }
                            M2C_FIELD(var_s0, void **, 0) = (void *) D_8013BC20;
                            if (D_8013BC20 != NULL) {
                                M2C_FIELD(D_8013BC20, void **, 4) = var_s0;
                            }
                            M2C_FIELD(var_s0, void ***, 4) = NULL;
                            D_8013BC20 = var_s0;
                        }
                        var_s0 = temp_s1;
                    } while (var_s0 != NULL);
                }
                if (!(temp_s6 & 0xFF) && !(temp_s5 & 0xFF) && !(temp_s4 & 0xFF)) {
                    M2C_FIELD(var_s2, u8 *, 0xFC0) = 0U;
                    M2C_FIELD(var_s2, s8 *, 0xFC1) = 1;
                }
            }
            var_s7 += 1;
            var_s2 += 0xFF8;
        } while (var_s7 < 8U);
    }
}
