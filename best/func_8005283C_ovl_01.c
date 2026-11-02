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

M2C_UNK func_80051170_ovl_01();                     /* extern */
s8 func_80052E88_ovl_01(M2C_UNK *);                 /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E9118_ovl_01;
extern s8 D_800E91E7_ovl_01;
extern M2C_UNK D_800FE228_ovl_01;
extern M2C_UNK D_8010BF4C_ovl_01;
extern s32 D_8010BF70_ovl_01;
extern u8 D_8010BF74_ovl_01;
extern M2C_UNK D_8010BF78_ovl_01;
extern M2C_UNK D_8010C0C4_ovl_01;
extern M2C_UNK D_80112914_ovl_01;
extern M2C_UNK D_80131720_ovl_01;

void func_8005283C_ovl_01(void) {
    s32 temp_a0_3;
    s32 temp_v0;
    s32 var_a2;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_v1;

    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x2000) {
        goto block_5;
    }
    if (!(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & 0x8000)) {
        M2C_FIELD(&D_80112914_ovl_01, s8 *, 0) = func_80052E88_ovl_01(&D_8010BF78_ovl_01);
        M2C_FIELD(&D_80112914_ovl_01, s8 *, 1) = func_80052E88_ovl_01(&D_8010C0C4_ovl_01);
    } else {
block_5:
        M2C_FIELD(&D_80112914_ovl_01, s8 *, 1) = 0;
        M2C_FIELD(&D_80112914_ovl_01, s8 *, 0) = 0;
    }
    M2C_FIELD(&D_800C7650_ovl_01, u32 *, 0x18258) = (u32) M2C_FIELD(&D_800C7650_ovl_01, u32 *, 0x18254);
    func_80051170_ovl_01();
    if (!(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x2000)) {
        M2C_FIELD(&D_800C7650_ovl_01, u32 *, 0x18254) = (u32) ~(M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x1820F) | ((M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x18232) << 0x18) + (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x18233) << 0x10) + (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x1820E) << 8)));
    } else {
        temp_a0 = ~(M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x1820F) | ((M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x18232) << 0x18) + (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x18233) << 0x10) + (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x1820E) << 8)));
        M2C_FIELD(&D_800C7650_ovl_01, u32 *, 0x18254) = temp_a0;
        if (((M2C_FIELD(&D_800C7650_ovl_01, u32 *, 0x18258) ^ temp_a0) & temp_a0 & 0x20) || (temp_a0_2 = M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x20F56) & 0xFFFF, ((temp_a0_2 < (u16) M2C_FIELD(&D_80131720_ovl_01, u16 *, 0x7C)) == 0))) {
            if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x40000000) {
                if ((u16) M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x20F56) < (u16) M2C_FIELD(&D_80131720_ovl_01, u16 *, 0x7C)) {
                    D_800E91E7_ovl_01 = 1;
                }
                M2C_FIELD(&D_800C7650_ovl_01, u32 *, 0x18254) = 0U;
                M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x20F56) = (u16) (M2C_FIELD(&D_80131720_ovl_01, u16 *, 0x7C) + 1);
            } else {
                M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) | 0x1000);
            }
            M2C_FIELD(&D_800FE228_ovl_01, s8 *, 0xD00C) = 0;
            M2C_FIELD(&D_800FE228_ovl_01, s8 *, 0xD00D) = 0;
            M2C_FIELD(&D_800FE228_ovl_01, s8 *, 0xD00E) = 0;
            M2C_FIELD(&D_800FE228_ovl_01, s8 *, 0xD00F) = 0;
        } else if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x40000000) {
            M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x18210) = 0;
            M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x18211) = 0;
            M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x20F56) = (u16) (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x20F56) + 1);
            M2C_FIELD(&D_800C7650_ovl_01, u32 *, 0x18254) = (u32) M2C_FIELD(((temp_a0_2 * 2) + &D_80131720_ovl_01), u16 *, 0x86);
        }
    }
    var_a2 = 0x10;
    temp_v0 = M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18264);
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18264) = 0;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1826C) = temp_v0;
    do {
        var_a2 -= 1;
        temp_a0_3 = var_a2 & 0xFF;
        if (M2C_FIELD(&D_800C7650_ovl_01, u32 *, 0x18254) & *((temp_a0_3 * 2) + &D_8010BF4C_ovl_01)) {
            M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18264) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18264) | (1 << temp_a0_3));
        }
    } while (temp_a0_3 != 0);
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A60) & 0x01000000) {
        D_8010BF70_ovl_01 = M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A60);
        M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x18210) = 0;
        M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x18211) = 0;
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18264) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18264) & 0x3C00);
    } else if (D_8010BF70_ovl_01 & 0x01000000) {
        D_8010BF70_ovl_01 = 0;
        M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x18210) = 0;
        M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x18211) = 0;
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1826C) = (s32) M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18264);
    }
    temp_v1 = (M2C_FIELD(&D_800C7650_ovl_01, u32 *, 0x18258) ^ M2C_FIELD(&D_800C7650_ovl_01, u32 *, 0x18254)) & M2C_FIELD(&D_800C7650_ovl_01, u32 *, 0x18254);
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18268) = (s32) ((M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1826C) ^ M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18264)) & M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18264));
    M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x18260) = (s16) ((u32) M2C_FIELD(&D_800C7650_ovl_01, u32 *, 0x18254) >> 0x10);
    M2C_FIELD(&D_800C7650_ovl_01, u32 *, 0x18258) = temp_v1;
    M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x1825C) = (u16) M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x18256);
    M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x18262) = (s16) (temp_v1 >> 0x10);
    M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x1825E) = (u16) M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x1825A);
    if (temp_v1 & M2C_FIELD(&D_800E9118_ovl_01, s32 *, 8)) {
        D_8010BF74_ovl_01 = M2C_FIELD(&D_800E9118_ovl_01, u8 *, 0xC);
        goto block_34;
    }
    if (D_8010BF74_ovl_01 != 0) {
        if (M2C_FIELD(&D_800C7650_ovl_01, u32 *, 0x18254) & M2C_FIELD(&D_800E9118_ovl_01, s32 *, 8)) {
            D_8010BF74_ovl_01 -= 1;
        }
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x7FFFFFFF);
        return;
    }
    D_8010BF74_ovl_01 = M2C_FIELD(&D_800E9118_ovl_01, u8 *, 0xD);
block_34:
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) | 0x80000000);
}
