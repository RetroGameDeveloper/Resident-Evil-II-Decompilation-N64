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

s32 func_80032EA4_ovl_01(void *, s32, s32, s16);    /* extern */
M2C_UNK func_80052C00_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80052C9C_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80166CE4_ovl_26(void *, s32, s32, M2C_UNK); /* extern */
s16 func_80166F04_ovl_26(void *, M2C_UNK, M2C_UNK, s32 *); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;

void func_801629EC_ovl_26(void *arg0) {
    s32 sp10;
    M2C_UNK *var_s2;
    s16 temp_a0;
    s16 temp_s0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_v0;
    s32 var_s5;
    u16 temp_s4;
    void *temp_s3;

    if (M2C_FIELD(arg0, u8 *, 0x2B4) != 0) {
        var_s2 = M2C_FIELD(&D_800C7650_ovl_01, M2C_UNK **, 0x19D3C);
    } else {
        var_s2 = &D_800E10D0_ovl_01;
    }
    temp_s3 = arg0 + 0x2B4;
    if (M2C_FIELD(arg0, u8 *, 0x2B4) != 0) {
        var_s5 = M2C_FIELD(arg0, s32 *, 0x290) & 0x3FFFFFFF;
    } else {
        var_s5 = M2C_FIELD(arg0, s32 *, 0x28C);
    }
    if (M2C_FIELD(var_s2, s16 *, 0x1F2) >= 0) {
        if (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) & 0x80) {
            M2C_FIELD(temp_s3, u8 *, 9) = 0x1EU;
            M2C_FIELD(temp_s3, u8 *, 8) = 0x1EU;
            return;
        }
        temp_s4 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x234) + (M2C_FIELD(arg0, u8 *, 0x25D) * 0x178)), u16 *, 0x5A);
        if ((M2C_FIELD(arg0, u8 *, 0x2B4) == 0) && (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) & 0x20) && !(M2C_FIELD(arg0, u16 *, 0x2D4) & 0x8000) && (M2C_FIELD(temp_s3, u8 *, 0x19) == 0)) {
            temp_v0 = func_80032EA4_ovl_01(arg0, M2C_FIELD(var_s2, s32 *, 0x28), M2C_FIELD(var_s2, s32 *, 0x30), (s16) ((M2C_FIELD(arg0, u8 *, 0x2CD) << 0xB) + 0x100)) << 0x10;
            if ((var_s5 < 0xA8D) && (temp_v0 == 0) && (M2C_FIELD(var_s2, s16 *, 0x1F2) == 0)) {
                M2C_FIELD(arg0, s8 *, 5) = 6;
                M2C_FIELD(arg0, s16 *, 6) = 0;
                M2C_FIELD(var_s2, s16 *, 0x1F2) = -1;
                M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) | 0x80);
            }
        } else if ((M2C_FIELD(temp_s3, u8 *, 1) == 0) || (M2C_FIELD(M2C_FIELD(temp_s3, void **, 0x1C), u8 *, 0x2CD) != 0) || !(M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) & 0x20)) {
            if (M2C_FIELD(temp_s3, u8 *, 9) == 0) {
                temp_s0 = func_80166F04_ovl_26(arg0, 0xB, 1, &sp10);
                temp_a0 = func_80166F04_ovl_26(arg0, 0xB, 0x200, &sp10);
                if ((sp10 < 0x5DD) && ((temp_a0 << 0x10) == 0) && (((0x800 - (s16) temp_s4) * temp_s0) >= 0) && !(M2C_FIELD(arg0, u16 *, 0x2D4) & 0x8000) && (M2C_FIELD(arg0, u8 *, 0x2B4) == 0) && !(M2C_FIELD(var_s2, u8 *, 0x26F) & 0x80)) {
                    M2C_FIELD(arg0, s8 *, 5) = 0xA;
                    M2C_FIELD(arg0, s16 *, 6) = 0;
                    M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) = (u16) (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) | 0x80);
                    func_80052C00_ovl_01(3, 0);
                    func_80052C9C_ovl_01(6, 0x96, 0);
                    return;
                }
            }
            M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + temp_s4);
            temp_a0_2 = func_80166CE4_ovl_26(arg0, M2C_FIELD(var_s2, s32 *, 0x28), M2C_FIELD(var_s2, s32 *, 0x30), 0x100);
            M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) - temp_s4);
            if ((var_s5 < 0xFA1) && ((temp_a0_2 << 0x10) == 0) && (M2C_FIELD(temp_s3, u8 *, 8) == 0) && !(M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) & 0x40) && (M2C_FIELD(var_s2, u8 *, 4) == 1) && (M2C_FIELD(var_s2, u8 *, 5) != 2)) {
                M2C_FIELD(arg0, s8 *, 5) = 4;
                M2C_FIELD(arg0, s16 *, 6) = 0;
                return;
            }
            M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + temp_s4);
            temp_a0_3 = func_80166CE4_ovl_26(arg0, M2C_FIELD(var_s2, s32 *, 0x28), M2C_FIELD(var_s2, s32 *, 0x30), 0x100);
            M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) - temp_s4);
            if (((u32) (var_s5 - 0xFA0) < 0x1389U) && ((temp_a0_3 << 0x10) == 0) && (M2C_FIELD(temp_s3, u8 *, 0xA) == 0) && !(M2C_FIELD(arg0, u16 *, 0x2D4) & 0x8000)) {
                M2C_FIELD(arg0, s8 *, 5) = 5;
                M2C_FIELD(arg0, s16 *, 6) = 0;
                M2C_FIELD(temp_s3, s8 *, 0x26) = 0;
            }
        }
    }
}
