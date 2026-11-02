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

M2C_UNK func_80043650_ovl_01();                     /* extern */
s32 func_8004500C_ovl_01(s32, M2C_UNK *, M2C_UNK);  /* extern */
s32 func_800837DC_ovl_01(void *, s32);              /* extern */
extern f32 D_800B91A0_ovl_01;
extern f32 D_800B91A4_ovl_01;
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E8D54_ovl_01;
extern M2C_UNK D_80111110_ovl_01;
extern void *D_80139B90;
extern s32 D_80139D9C;
extern M2C_UNK D_80139DA0;

void func_80062960_ovl_01(void) {
    void *sp10;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fv0;
    f32 temp_fv0_2;
    s16 temp_v1;
    s16 var_v0;
    s32 var_s4;
    s32 var_v0_2;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v1_2;
    void **var_s3;
    void *temp_s0;

    func_80043650_ovl_01();
    temp_fs1 = D_800B91A0_ovl_01;
    if ((M2C_FIELD(&D_80139DA0, s32 *, 0x18) != 0) && (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x40000000) && (M2C_FIELD(((M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FC) << 5) + M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 *, 0x24)), s32 *, 0x1C) != -1)) {
        var_s4 = 0;
        sp10 = (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FC) * 0x10) + &D_800E8D54_ovl_01;
        var_s3 = &D_80139B90;
        temp_fs0 = D_800B91A4_ovl_01;
loop_4:
        if (var_s4 < D_80139D9C) {
            temp_s0 = *var_s3;
            if ((temp_s0 != NULL) && (func_800837DC_ovl_01(sp10, M2C_FIELD(temp_s0, u16 *, 0) & 0x7FFF) != 0)) {
                M2C_FIELD(&D_80139DA0, s32 *, 0x14) = (s32) ((s32) (temp_s0 + 0x13) & ~7);
                temp_v0 = M2C_FIELD(temp_s0, u16 *, 8);
                M2C_FIELD(&D_80139DA0, s32 *, 4) = (s32) temp_v0;
                M2C_FIELD(&D_80111110_ovl_01, s8 *, 0x20) = (s8) temp_v0;
                M2C_FIELD(&D_80111110_ovl_01, s8 *, 0x10) = (s8) temp_v0;
                temp_v1 = M2C_FIELD(temp_s0, u16 *, 2) + (temp_v0 & 0xFF);
                M2C_FIELD(&D_80111110_ovl_01, s16 *, 0x1C) = temp_v1;
                M2C_FIELD(&D_80111110_ovl_01, s16 *, 0xC) = temp_v1;
                temp_v1_2 = M2C_FIELD(temp_s0, u16 *, 0xA);
                M2C_FIELD(&D_80139DA0, s32 *, 8) = (s32) temp_v1_2;
                M2C_FIELD(&D_80111110_ovl_01, s8 *, 0x21) = (s8) temp_v1_2;
                M2C_FIELD(&D_80111110_ovl_01, s8 *, 0x19) = (s8) temp_v1_2;
                temp_fv0 = (f32) (M2C_FIELD(temp_s0, s16 *, 4) + (temp_v1_2 & 0xFF)) * temp_fs1;
                if (temp_fs0 <= temp_fv0) {
                    var_v0 = (s32) (temp_fv0 - temp_fs0) | 0x80000000;
                    M2C_FIELD(&D_80111110_ovl_01, s16 *, 0x1E) = var_v0;
                } else {
                    var_v0 = (s16) (s32) temp_fv0;
                    M2C_FIELD(&D_80111110_ovl_01, s16 *, 0x1E) = var_v0;
                }
                M2C_FIELD(&D_80111110_ovl_01, s16 *, 0x16) = var_v0;
                temp_v0_2 = M2C_FIELD(temp_s0, u16 *, 2);
                M2C_FIELD(&D_80111110_ovl_01, u16 *, 0x14) = temp_v0_2;
                M2C_FIELD(&D_80111110_ovl_01, u16 *, 4) = temp_v0_2;
                M2C_FIELD(&D_80111110_ovl_01, u16 *, 0x1A) = (u16) M2C_FIELD(temp_s0, u16 *, 6);
                temp_fv0_2 = (f32) M2C_FIELD(temp_s0, s16 *, 4) * temp_fs1;
                if (temp_fs0 <= temp_fv0_2) {
                    var_v0_2 = (s32) (temp_fv0_2 - temp_fs0) | 0x80000000;
                } else {
                    var_v0_2 = (s32) temp_fv0_2;
                }
                M2C_FIELD(&D_80111110_ovl_01, s16 *, 0xE) = (s16) var_v0_2;
                M2C_FIELD(&D_80111110_ovl_01, s16 *, 6) = (s16) var_v0_2;
                M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18204) = func_8004500C_ovl_01(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18204), &D_80111110_ovl_01, 1);
            }
            var_s3 += 4;
            var_s4 += 1;
            goto loop_4;
        }
    }
}
