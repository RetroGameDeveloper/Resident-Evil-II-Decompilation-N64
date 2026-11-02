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
s32 func_8004500C_ovl_01(s32, M2C_UNK *, M2C_UNK, u8); /* extern */
M2C_UNK func_8016FDA0_ovl_07();                     /* extern */
extern M2C_UNK D_800DF650_ovl_01;
extern M2C_UNK D_801717C0_ovl_07;
extern u8 D_801719FC_ovl_07;
extern u8 D_80171A98_ovl_07;
extern u8 D_80171B70_ovl_07;
extern M2C_UNK D_80171C18_ovl_07;
extern s32 D_80171D40_ovl_07;

void func_8016FAC4_ovl_07(void) {
    M2C_UNK sp10;
    s32 sp38;
    s32 sp40;
    s16 temp_a2;
    s16 temp_t0;
    s16 temp_v0_3;
    s32 temp_s7;
    s32 var_s7;
    s32 var_t1;
    s32 var_t2;
    s32 var_v1;
    s8 temp_a0;
    s8 temp_a1;
    u16 temp_s6;
    u16 var_s2;
    u32 temp_v1;
    u32 temp_v1_2;
    u8 *var_s3;
    u8 *var_s4;
    u8 *var_s5;
    u8 temp_a3;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_s0;

    var_s5 = &D_801719FC_ovl_07;
    var_t1 = 0xFF;
    var_s4 = &D_801719FC_ovl_07 + 6;
    M2C_FIELD(&sp10, s16 *, 0x1A) = 0;
    sp38 = 0x1F;
    var_t2 = 0x1F;
    do {
        sp38 = var_t2 - 1;
        if (M2C_FIELD(var_s4, u8 *, -5) & 0x20) {
            *var_s5 = 0;
        }
        if (*var_s5 & 1) {
            var_s3 = &D_80171B70_ovl_07;
            temp_v0 = M2C_FIELD(var_s4, u8 *, -3);
            var_v1 = 0;
            if (temp_v0 != 0) {
                do {
                    if (*var_s3 == var_t1) {
                        var_v1 += 1;
                    }
                    var_s3 += 1;
                } while (temp_v0 != var_v1);
            }
            var_s7 = 0x2C;
            if (*var_s5 & 8) {
                var_s7 = 0x2E;
                temp_v1 = M2C_FIELD(var_s4, u32 *, 2) - D_80171D40_ovl_07;
                M2C_FIELD(var_s4, u32 *, 2) = temp_v1;
                if (temp_v1 > 0x80807FFFU) {
                    *var_s5 = 0;
                    M2C_FIELD(var_s4, u32 *, 2) = 0U;
                }
            }
            if (*var_s5 & 4) {
                var_s7 = 0x2E;
                temp_v1_2 = M2C_FIELD(var_s4, u32 *, 2) + D_80171D40_ovl_07;
                M2C_FIELD(var_s4, u32 *, 2) = temp_v1_2;
                if (temp_v1_2 > 0x80807FFFU) {
                    var_s7 = 0x2C;
                    *var_s5 &= 0xFB;
                    M2C_FIELD(var_s4, u32 *, 2) = 0x80808000U;
                }
            }
            var_s2 = M2C_FIELD(var_s4, u16 *, -2);
            temp_s7 = var_s7 + M2C_FIELD(var_s4, u32 *, 2);
            temp_s6 = M2C_FIELD(var_s4, u16 *, 0);
            if (*var_s3 != var_t1) {
                do {
                    sp40 = var_t1;
                    func_80043650_ovl_01();
                    temp_s0 = (*var_s3 * 0xA) + &D_801717C0_ovl_07;
                    temp_a3 = M2C_FIELD(temp_s0, u8 *, 9);
                    M2C_FIELD(&sp10, s32 *, 0) = temp_s7;
                    temp_a1 = M2C_FIELD(temp_s0, u8 *, 4) + M2C_FIELD(temp_s0, u8 *, 6);
                    temp_a0 = M2C_FIELD(temp_s0, u8 *, 5) + M2C_FIELD(temp_s0, u8 *, 7);
                    temp_t0 = var_s2 + M2C_FIELD(temp_s0, u8 *, 8);
                    temp_v0_2 = M2C_FIELD(&sp10, u8 *, 2);
                    temp_a2 = temp_s6 + temp_a3;
                    if (temp_v0_2 != 0) {
                        M2C_FIELD(&sp10, u8 *, 2) = (u8) ((temp_v0_2 - 1) * 2);
                    }
                    M2C_FIELD(&sp10, u16 *, 4) = var_s2;
                    M2C_FIELD(&sp10, u16 *, 6) = temp_s6;
                    M2C_FIELD(&sp10, u8 *, 8) = (u8) M2C_FIELD(temp_s0, u8 *, 4);
                    M2C_FIELD(&sp10, u8 *, 9) = (u8) M2C_FIELD(temp_s0, u8 *, 5);
                    M2C_FIELD(&sp10, s16 *, 0xC) = temp_t0;
                    M2C_FIELD(&sp10, u16 *, 0xE) = temp_s6;
                    M2C_FIELD(&sp10, s8 *, 0x10) = temp_a1;
                    M2C_FIELD(&sp10, s16 *, 0xA) = (s16) (M2C_FIELD(temp_s0, u16 *, 2) * 8);
                    M2C_FIELD(&sp10, u8 *, 0x11) = (u8) M2C_FIELD(temp_s0, u8 *, 5);
                    var_s3 += 1;
                    M2C_FIELD(&sp10, u16 *, 0x14) = var_s2;
                    M2C_FIELD(&sp10, s16 *, 0x16) = temp_a2;
                    temp_v0_3 = M2C_FIELD(temp_s0, u16 *, 0) + 0x80;
                    M2C_FIELD(&sp10, s16 *, 0x12) = temp_v0_3;
                    M2C_FIELD(&sp10, s8 *, 0x20) = temp_a1;
                    M2C_FIELD(&sp10, s8 *, 0x19) = temp_a0;
                    M2C_FIELD(&sp10, s16 *, 0x1C) = temp_t0;
                    M2C_FIELD(&sp10, s16 *, 0x1E) = temp_a2;
                    M2C_FIELD(&sp10, s8 *, 0x21) = temp_a0;
                    M2C_FIELD(&sp10, u8 *, 0x18) = (u8) M2C_FIELD(temp_s0, u8 *, 4);
                    M2C_FIELD(&sp10, s8 *, 3) = 4;
                    M2C_FIELD(&sp10, s32 *, 0x24) = (s32) *((((s32) ((temp_v0_3 & 0xFFFF) - 0x88) >> 1) * 4) + &D_80171C18_ovl_07);
                    sp40 = var_t1;
                    M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204) = func_8004500C_ovl_01(M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204), &sp10, 0, temp_a3);
                    var_t1 = sp40;
                    var_s2 += M2C_FIELD(temp_s0, u8 *, 8);
                } while (*var_s3 != var_t1);
            }
        }
        var_s4 += 0xC;
        var_t2 = sp38;
        var_s5 += 0xC;
    } while (var_t2 != 0);
    if (D_80171A98_ovl_07 & 1) {
        func_8016FDA0_ovl_07();
    }
}
