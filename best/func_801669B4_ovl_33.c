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

s32 func_800826A4_ovl_01(void *, s32 *, void *);    /* extern */
s32 *func_80088ECC_ovl_01(s32 *, s32, u16 *, u16 *); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern u16 D_800E8FE8_ovl_01;

s32 *func_801669B4_ovl_33(void *arg1) {
    s32 **var_v1;
    s32 *temp_s1;
    s32 temp_a1;
    s32 var_a0;
    s32 var_t0;
    s8 var_s2;
    u16 *var_a2;
    u16 *var_a3;
    u16 *var_t1;
    u16 *var_v1_2;
    u16 temp_v0;

    var_v1 = &D_800C7650_ovl_01 + 0x19D40;
    var_s2 = 0x20;
    if (*M2C_FIELD(&D_800C7650_ovl_01, s32 **, 0x19D40) & 1) {
loop_1:
        var_s2 -= 1;
        var_v1 += 4;
        if (var_s2 != 0) {
            if (**var_v1 & 1) {
                goto loop_1;
            }
        }
    }
    if ((u32) var_v1 >= (u32) M2C_FIELD(&D_800C7650_ovl_01, u32 *, 0x1828C)) {
        M2C_FIELD(&D_800C7650_ovl_01, u32 *, 0x1828C) = (u32) (var_v1 + 4);
    }
    *var_v1 = M2C_FIELD(&D_800C7650_ovl_01, s32 **, 0x18284);
    M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A76) = (u8) (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A76) + 1);
    temp_s1 = M2C_FIELD(&D_800C7650_ovl_01, s32 **, 0x18284);
    M2C_FIELD(temp_s1, s32 *, 0x258) = (s32) M2C_FIELD(arg1, s32 *, 0x258);
    M2C_FIELD(temp_s1, s32 *, 0x218) = (s32) M2C_FIELD(arg1, s32 *, 0x218);
    M2C_FIELD(temp_s1, s32 *, 0x1A4) = (s32) M2C_FIELD(arg1, s32 *, 0x1A4);
    M2C_FIELD(temp_s1, s32 *, 0x220) = (s32) M2C_FIELD(arg1, s32 *, 0x220);
    M2C_FIELD(temp_s1, s32 *, 0x21C) = (s32) M2C_FIELD(arg1, s32 *, 0x21C);
    M2C_FIELD(temp_s1, s32 *, 0x228) = (s32) M2C_FIELD(arg1, s32 *, 0x228);
    M2C_FIELD(temp_s1, s32 *, 0x224) = (s32) M2C_FIELD(arg1, s32 *, 0x224);
    M2C_FIELD(temp_s1, s32 *, 0x230) = (s32) M2C_FIELD(arg1, s32 *, 0x230);
    M2C_FIELD(temp_s1, s32 *, 0x22C) = (s32) M2C_FIELD(arg1, s32 *, 0x22C);
    M2C_FIELD(temp_s1, s32 *, 0x6C) = 0x808080;
    M2C_FIELD(temp_s1, s32 *, 0xDC) = 0x808080FF;
    M2C_FIELD(temp_s1, s32 *, 0xC4) = (s32) M2C_FIELD(arg1, s32 *, 0xC4);
    M2C_FIELD(temp_s1, u8 *, 0x26B) = (u8) M2C_FIELD(arg1, u8 *, 0x26B);
    M2C_FIELD(temp_s1, u8 *, 0x1A1) = (u8) M2C_FIELD(arg1, u8 *, 0x1A1);
    M2C_FIELD(temp_s1, u8 *, 0x1A0) = (u8) M2C_FIELD(arg1, u8 *, 0x1A0);
    M2C_FIELD(temp_s1, s32 *, 0xCC) = (s32) (M2C_FIELD(temp_s1, s32 *, 0xC4) + 0x1C);
    M2C_FIELD(temp_s1, u8 *, 8) = (u8) M2C_FIELD(arg1, u8 *, 8);
    M2C_FIELD(temp_s1, u16 *, 0x1AA) = (u16) M2C_FIELD(arg1, u16 *, 0x1AA);
    M2C_FIELD(temp_s1, u8 *, 0x1A2) = (u8) M2C_FIELD(arg1, u8 *, 0x1A2);
    M2C_FIELD(temp_s1, u16 *, 0x25E) = (u16) M2C_FIELD(arg1, u16 *, 0x25E);
    M2C_FIELD(temp_s1, s32 *, 0x2A0) = (s32) M2C_FIELD(arg1, s32 *, 0x2A0);
    M2C_FIELD(temp_s1, s32 *, 0x2A4) = (s32) M2C_FIELD(arg1, s32 *, 0x2A4);
    M2C_FIELD(temp_s1, u8 *, 9) = (u8) M2C_FIELD(arg1, u8 *, 9);
    M2C_FIELD(temp_s1, s32 *, 0x120) = (s32) M2C_FIELD(arg1, s32 *, 0x120);
    M2C_FIELD(temp_s1, s32 *, 0x124) = (s32) M2C_FIELD(arg1, s32 *, 0x124);
    M2C_FIELD(temp_s1, s32 *, 0x128) = (s32) M2C_FIELD(arg1, s32 *, 0x128);
    M2C_FIELD(temp_s1, s32 *, 0x12C) = (s32) M2C_FIELD(arg1, s32 *, 0x12C);
    M2C_FIELD(temp_s1, s32 *, 0x130) = (s32) M2C_FIELD(arg1, s32 *, 0x130);
    M2C_FIELD(temp_s1, s32 *, 0x134) = (s32) M2C_FIELD(arg1, s32 *, 0x134);
    M2C_FIELD(temp_s1, s32 *, 0x138) = (s32) M2C_FIELD(arg1, s32 *, 0x138);
    M2C_FIELD(temp_s1, s32 *, 0x13C) = (s32) M2C_FIELD(arg1, s32 *, 0x13C);
    M2C_FIELD(temp_s1, s32 *, 0x140) = (s32) M2C_FIELD(arg1, s32 *, 0x140);
    M2C_FIELD(temp_s1, s32 *, 0x144) = (s32) M2C_FIELD(arg1, s32 *, 0x144);
    M2C_FIELD(temp_s1, s32 *, 0x148) = (s32) M2C_FIELD(arg1, s32 *, 0x148);
    M2C_FIELD(temp_s1, s32 *, 0x14C) = (s32) M2C_FIELD(arg1, s32 *, 0x14C);
    M2C_FIELD(temp_s1, s32 *, 0x150) = (s32) M2C_FIELD(arg1, s32 *, 0x150);
    M2C_FIELD(temp_s1, s32 *, 0x154) = (s32) M2C_FIELD(arg1, s32 *, 0x154);
    M2C_FIELD(temp_s1, s32 *, 0x158) = (s32) M2C_FIELD(arg1, s32 *, 0x158);
    M2C_FIELD(temp_s1, s32 *, 0x15C) = (s32) M2C_FIELD(arg1, s32 *, 0x15C);
    M2C_FIELD(temp_s1, s32 *, 0x160) = (s32) M2C_FIELD(arg1, s32 *, 0x160);
    M2C_FIELD(temp_s1, s32 *, 0x164) = (s32) M2C_FIELD(arg1, s32 *, 0x164);
    M2C_FIELD(temp_s1, s32 *, 0x168) = (s32) M2C_FIELD(arg1, s32 *, 0x168);
    M2C_FIELD(temp_s1, s32 *, 0x16C) = (s32) M2C_FIELD(arg1, s32 *, 0x16C);
    M2C_FIELD(temp_s1, s32 *, 0x170) = (s32) M2C_FIELD(arg1, s32 *, 0x170);
    M2C_FIELD(temp_s1, s32 *, 0x174) = (s32) M2C_FIELD(arg1, s32 *, 0x174);
    M2C_FIELD(temp_s1, s32 *, 0x178) = (s32) M2C_FIELD(arg1, s32 *, 0x178);
    M2C_FIELD(temp_s1, s32 *, 0x17C) = (s32) M2C_FIELD(arg1, s32 *, 0x17C);
    M2C_FIELD(temp_s1, s32 *, 0x1B8) = (s32) M2C_FIELD(arg1, s32 *, 0x1B8);
    M2C_FIELD(temp_s1, s32 *, 0x1BC) = (s32) M2C_FIELD(arg1, s32 *, 0x1BC);
    M2C_FIELD(temp_s1, s32 *, 0x1C0) = (s32) M2C_FIELD(arg1, s32 *, 0x1C0);
    M2C_FIELD(temp_s1, s32 *, 0x1C4) = (s32) M2C_FIELD(arg1, s32 *, 0x1C4);
    M2C_FIELD(temp_s1, s32 *, 0x1C8) = (s32) M2C_FIELD(arg1, s32 *, 0x1C8);
    M2C_FIELD(temp_s1, s32 *, 0x1CC) = (s32) M2C_FIELD(arg1, s32 *, 0x1CC);
    M2C_FIELD(temp_s1, s32 *, 0x1D0) = (s32) M2C_FIELD(arg1, s32 *, 0x1D0);
    M2C_FIELD(temp_s1, s32 *, 0x1D4) = (s32) M2C_FIELD(arg1, s32 *, 0x1D4);
    M2C_FIELD(temp_s1, M2C_UNK *, 0x1D8) = M2C_UNALIGNED32(M2C_FIELD(arg1, M2C_UNK *, 0x1D8));
    M2C_FIELD(temp_s1, M2C_UNK *, 0x1DC) = M2C_UNALIGNED32(M2C_FIELD(arg1, M2C_UNK *, 0x1DC));
    M2C_FIELD(temp_s1, s32 *, 0x70) = (s32) M2C_FIELD(arg1, s32 *, 0x70);
    M2C_FIELD(temp_s1, u16 *, 0x34) = (u16) M2C_FIELD(arg1, u16 *, 0x34);
    M2C_FIELD(temp_s1, u16 *, 0x36) = (u16) M2C_FIELD(arg1, u16 *, 0x36);
    M2C_FIELD(temp_s1, u16 *, 0x38) = (u16) M2C_FIELD(arg1, u16 *, 0x38);
    M2C_FIELD(temp_s1, u16 *, 0x212) = (u16) M2C_FIELD(arg1, u16 *, 0x212);
    M2C_FIELD(temp_s1, u8 *, 0x26A) = (u8) M2C_FIELD(arg1, u8 *, 0x26A);
    M2C_FIELD(temp_s1, s32 *, 0x284) = (s32) M2C_FIELD(arg1, s32 *, 0x284);
    temp_a1 = func_800826A4_ovl_01(arg1, M2C_FIELD(&D_800C7650_ovl_01, s32 **, 0x18284), temp_s1 + 0x300);
    var_t1 = temp_s1 + 0x14;
    var_t0 = 2;
    M2C_FIELD(temp_s1, s32 *, 0x28) = (s32) M2C_FIELD(arg1, s32 *, 0x28);
    var_a3 = &D_800E8FE8_ovl_01;
    M2C_FIELD(temp_s1, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0x2C);
    M2C_FIELD(temp_s1, s16 *, 0x64) = 0;
    M2C_FIELD(temp_s1, s16 *, 0x66) = 0;
    M2C_FIELD(temp_s1, s16 *, 0x68) = 0;
    M2C_FIELD(temp_s1, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0x30);
    do {
        var_a2 = var_t1;
        var_a0 = 2;
        var_v1_2 = var_a3;
loop_7:
        temp_v0 = *var_v1_2;
        var_v1_2 += 2;
        var_a0 -= 1;
        *var_a2 = temp_v0;
        var_a2 += 2;
        if (var_a0 != -1) {
            goto loop_7;
        }
        var_t1 += 6;
        var_t0 -= 1;
        var_a3 += 6;
    } while (var_t0 != -1);
    M2C_FIELD(temp_s1, s32 *, 0) = 1;
    M2C_FIELD(temp_s1, s8 *, 0xC) = var_s2;
    M2C_FIELD(temp_s1, s32 *, 4) = 0;
    M2C_FIELD(temp_s1, s16 *, 0x26C) = 0;
    M2C_FIELD(temp_s1, s8 *, 0x26F) = 0;
    M2C_FIELD(temp_s1, s16 *, 0x1F0) = 0;
    M2C_FIELD(temp_s1, s8 *, 0x1E6) = 0;
    M2C_FIELD(temp_s1, s16 *, 0x268) = 0;
    M2C_FIELD(temp_s1, s16 *, 0x278) = 0;
    M2C_FIELD(temp_s1, s16 *, 0x27A) = 0x1000;
    M2C_FIELD(temp_s1, s16 *, 0x270) = 0;
    M2C_FIELD(temp_s1, s16 *, 0x272) = 0;
    M2C_FIELD(temp_s1, s16 *, 0x274) = 0;
    M2C_FIELD(temp_s1, s16 *, 0x276) = 0;
    M2C_FIELD(temp_s1, s16 *, 0x1F4) = 0;
    M2C_FIELD(temp_s1, s16 *, 0x1F6) = 0;
    M2C_FIELD(temp_s1, s32 *, 0x2A0) = 0;
    M2C_FIELD(temp_s1, s32 *, 0x2A4) = 0;
    M2C_FIELD(temp_s1, s32 *, 0x280) = 0;
    M2C_FIELD(temp_s1, s8 *, 0x1EC) = (s8) (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A76) & 7);
    M2C_FIELD(&D_800C7650_ovl_01, s32 **, 0x18284) = func_80088ECC_ovl_01(temp_s1, temp_a1, var_a2, var_a3);
    return temp_s1;
}
