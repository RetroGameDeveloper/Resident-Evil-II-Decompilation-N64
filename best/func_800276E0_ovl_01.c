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

M2C_UNK func_80043650_ovl_01();                     /* extern */
s32 func_80046FC8_ovl_01(s32, u16 *);               /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800DF650_ovl_01;
extern u16 D_800E903C_ovl_01;
extern M2C_UNK D_800E9118_ovl_01;
extern u16 D_800E9128_ovl_01;
extern u8 D_800E91E1_ovl_01;

void func_800276E0_ovl_01(void) {
    s32 temp_a0;
    s32 temp_v0_2;
    s32 var_s2;
    u16 *var_s0;
    u16 *var_s1;
    u16 temp_v0;

    var_s1 = &D_800E9128_ovl_01;
    func_80043650_ovl_01();
    var_s2 = 4;
    var_s0 = &D_800E9128_ovl_01 + 0xC;
    do {
        temp_v0 = *var_s1;
        if (!(temp_v0 & 0x8000)) {
            temp_a0 = (s32) (temp_v0 << 0x10) >> 0x17;
            if (M2C_FIELD(var_s0, u8 *, -8) == 1) {
                M2C_FIELD(var_s0, s8 *, 4) = (s8) (M2C_FIELD(var_s0, u8 *, -7) & temp_a0);
                M2C_FIELD(var_s0, s8 *, 6) = (s8) (M2C_FIELD(var_s0, u8 *, -5) & temp_a0);
                M2C_FIELD(var_s0, s8 *, 5) = (s8) (M2C_FIELD(var_s0, u8 *, -6) & temp_a0);
            } else {
                M2C_FIELD(var_s0, s8 *, 6) = 0;
                M2C_FIELD(var_s0, s8 *, 5) = 0;
                M2C_FIELD(var_s0, s8 *, 4) = 0;
            }
            M2C_FIELD(var_s0, u8 *, 7) = (u8) ((u16) *var_s1 >> 7);
            *var_s1 += M2C_FIELD(var_s0, u16 *, -0xA);
            if ((M2C_FIELD(var_s0, u8 *, 7) != 0) && (M2C_FIELD((&D_800E9128_ovl_01 - 0x10), u8 *, 0xC8) != 5)) {
                M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x208) = func_80046FC8_ovl_01(M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x208), var_s0);
            }
        }
        var_s0 += 0x2C;
        var_s2 -= 1;
        var_s1 += 0x2C;
    } while (var_s2 > 0);
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & 0x10) {
        if ((u8) M2C_FIELD(&D_800E9118_ovl_01, u8 *, 0xC9) < 0xF0U) {
            M2C_FIELD(&D_800E9118_ovl_01, u8 *, 0xC9) = (u8) (M2C_FIELD(&D_800E9118_ovl_01, u8 *, 0xC9) + 0x10);
        }
    } else if ((u8) M2C_FIELD(&D_800E9118_ovl_01, u8 *, 0xC9) >= 0x10U) {
        M2C_FIELD(&D_800E9118_ovl_01, u8 *, 0xC9) = (u8) (M2C_FIELD(&D_800E9118_ovl_01, u8 *, 0xC9) - 0x10);
    }
    M2C_FIELD(&D_800E903C_ovl_01, u8 *, 0x27) = (u8) D_800E91E1_ovl_01;
    M2C_FIELD(&D_800E903C_ovl_01, u8 *, 7) = (u8) D_800E91E1_ovl_01;
    if (!(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x4000) && (D_800E91E1_ovl_01 & 0xFF)) {
        temp_v0_2 = func_80046FC8_ovl_01(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18208), &D_800E903C_ovl_01);
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18208) = temp_v0_2;
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18208) = func_80046FC8_ovl_01(temp_v0_2, &D_800E903C_ovl_01 + 0x20);
    }
}
