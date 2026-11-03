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

M2C_UNK func_800377B0_ovl_01(M2C_UNK, s16, void *, s16 *); /* extern */
M2C_UNK func_80052D40_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80074EB4_ovl_01(s32, s32, u8);             /* extern */
s32 func_8007880C_ovl_01(s16, s32);                 /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_80119E48_ovl_01;
extern s32 D_80119E74_ovl_01;
extern s32 D_80119E7C_ovl_01;
extern M2C_UNK D_80119E9C_ovl_01;
extern M2C_UNK D_80119ECC_ovl_01;
extern u8 D_8011A22E_ovl_01;

void func_80077F60_ovl_01(s32 arg0, s32 arg1, void *arg2) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    u16 sp1E;
    M2C_UNK var_a0;
    s16 var_fp;
    s16 var_s3;
    s16 var_v0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s6;
    s32 var_s4;
    s32 var_s6;
    s8 var_s5;
    u8 temp_v1;
    void *temp_a0;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s2;
    void *temp_s4;
    void *temp_v1_2;
    void *var_s0;
    void *var_s1;

    if (M2C_FIELD(arg2, u8 *, 8) == 0xD) {
        var_fp = 4;
        var_s4 = D_80119E7C_ovl_01;
        var_s3 = (arg1 & 0xFFFF) != 4;
        sp1E = 0xB;
    } else {
        var_fp = 2;
        sp1E = func_80074EB4_ovl_01(M2C_FIELD(arg2, s32 *, 0x28), M2C_FIELD(arg2, s32 *, 0x30), M2C_FIELD(arg2, u8 *, 0x1A2)) & 0xFF;
        var_s4 = D_80119E74_ovl_01;
        if ((u8) M2C_FIELD(arg2, u8 *, 8) >= 0x10U) {
            var_s3 = 3;
            if ((arg1 & 0xFFFF) == 4) {
                var_s3 = 2;
            }
        } else {
            var_s3 = (arg1 & 0xFFFF) != 4;
        }
    }
    if (M2C_FIELD(arg2, s16 *, 0x1A8) != 0) {
        var_s4 = D_80119E74_ovl_01;
        sp1E = 0x1A;
        temp_s2 = M2C_FIELD(arg2, s32 *, 0x234) + 0x178;
        sp12 = (u16) M2C_FIELD(arg2, s16 *, 0x1A8) - M2C_FIELD(temp_s2, u16 *, 0x52);
        var_fp = 2;
        if ((arg1 & 0xFFFF) == 4) {
            var_v0 = -0xA0;
        } else {
            var_v0 = 0xA0;
        }
        sp14 = var_v0;
        temp_v1 = M2C_FIELD(arg2, u8 *, 8);
        if (temp_v1 == 0xF) {
            temp_s0 = arg0 & 0xFFFF;
            if (sp12 < 0x1F4) {
                if (temp_s0 == 0) {
                    func_80052D40_ovl_01(1, 0x82, 0x64, 0);
                    func_80052D40_ovl_01(9, 0x55, 0xA, 1);
                }
                if (temp_s0 == 1) {
                    func_80052D40_ovl_01(3, 0x32, 0x64, 0);
                    func_80052D40_ovl_01(5, 0x55, 0, 3);
                }
            }
            temp_s6 = arg0 & 0xFFFF;
            sp12 = (u16) sp12 + 0x64;
            if (temp_s6 == 0) {
                temp_s1 = temp_s2 + 0x38;
                sp10 = 0x64;
                func_800377B0_ovl_01(0x1A000E00, M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AE6), temp_s1, &sp10);
                sp10 = 0;
                func_800377B0_ovl_01(0x1A000C00, (s16) ((u16) M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AE6) + 0x400), temp_s1, &sp10);
                func_800377B0_ovl_01(0x1A000C00, (s16) ((u16) M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AE6) + 0xC00), temp_s1, &sp10);
            }
            if (temp_s6 == 1) {
                var_s1 = temp_s2 + 0x38;
                var_s0 = &D_800C7650_ovl_01 + 0x18000;
                sp10 = 0x12C;
                func_800377B0_ovl_01(0x1A001200, M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AE6), var_s1, &sp10);
                sp10 = 0;
                func_800377B0_ovl_01(0x1A000E00, (s16) ((u16) M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AE6) + 0x400), var_s1, &sp10);
                var_a0 = 0x1A000E00;
                goto block_31;
            }
        } else {
            if ((sp12 < 0x4B0) && (temp_s0_2 = arg0 & 0xFFFF, ((temp_v1 < 0x10U) != 0))) {
                if (temp_s0_2 == 0) {
                    func_80052D40_ovl_01(1, 0x82, 0x64, 0);
                    func_80052D40_ovl_01(9, 0x55, 0xA, 1);
                }
                var_s6 = arg0 & 0xFFFF;
                if (temp_s0_2 == 1) {
                    func_80052D40_ovl_01(3, 0x32, 0x64, 0);
                    func_80052D40_ovl_01(5, 0x55, 0xA, 3);
                    goto block_26;
                }
            } else {
block_26:
                var_s6 = arg0 & 0xFFFF;
            }
            if (var_s6 == 0) {
                temp_s1_2 = temp_s2 + 0x38;
                sp10 = 0xC8;
                func_800377B0_ovl_01(0x1A000E00, M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AE6), temp_s1_2, &sp10);
                sp10 = 0;
                func_800377B0_ovl_01(0x1A000C00, (s16) ((u16) M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AE6) + 0x400), temp_s1_2, &sp10);
                func_800377B0_ovl_01(0x1A000C00, (s16) ((u16) M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AE6) + 0xC00), temp_s1_2, &sp10);
            }
            if (var_s6 == 1) {
                var_s1 = temp_s2 + 0x38;
                var_s0 = &D_800C7650_ovl_01 + 0x18000;
                sp10 = 0x258;
                func_800377B0_ovl_01(0x1A001600, M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AE6), var_s1, &sp10);
                sp10 = 0;
                func_800377B0_ovl_01(0x1A001100, (s16) ((u16) M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AE6) + 0x400), var_s1, &sp10);
                var_a0 = 0x1A001100;
block_31:
                func_800377B0_ovl_01(var_a0, (s16) (M2C_FIELD(var_s0, u16 *, 0x1AE6) + 0xC00), var_s1, &sp10);
            }
        }
    }
    if (M2C_FIELD(arg2, s32 *, 0x280) != 0) {
        var_s5 = 6;
    } else {
        var_s5 = arg0 + (sp1E & 0x7F);
    }
    temp_s4 = var_s4 + ((var_s5 & 0xFFFF) * 4);
    if ((M2C_FIELD(temp_s4, s32 *, 0) != -1) && (*(var_fp + &D_80119E48_ovl_01) != -1)) {
        temp_s0_3 = (M2C_FIELD(temp_s4, u8 *, 2) & 0xF) - 1;
        if (func_8007880C_ovl_01(var_s3, temp_s0_3 & 0xFF) & 0xFF) {
            var_s3 = 0x17;
        }
        temp_v1_2 = (var_s3 * 2) + &D_80119E9C_ovl_01;
        M2C_FIELD(temp_v1_2, s8 *, 0) = (s8) (temp_s0_3 & 7);
        M2C_FIELD(temp_v1_2, s8 *, 1) = (s8) var_s3;
        temp_a0 = (var_s3 * 0x24) + &D_80119ECC_ovl_01;
        if (D_8011A22E_ovl_01 != 0) {
            M2C_FIELD(temp_a0, s16 *, 0x20) = 1;
        } else {
            M2C_FIELD(temp_a0, s16 *, 0x20) = 0;
        }
        M2C_FIELD(temp_a0, s8 *, 1) = var_s5;
        M2C_FIELD(temp_a0, s8 *, 0) = 1;
        M2C_FIELD(temp_a0, s16 *, 4) = var_fp;
        M2C_FIELD(temp_a0, s16 *, 6) = (s16) (M2C_FIELD(temp_s4, u8 *, 1) & 0x7F);
        M2C_FIELD(temp_a0, s16 *, 8) = (s16) ((u8) M2C_FIELD(temp_s4, u8 *, 2) >> 4);
        M2C_FIELD(temp_a0, f32 *, 0x14) = (f32) M2C_FIELD(arg2, s32 *, 0x28);
        M2C_FIELD(temp_a0, f32 *, 0x18) = (f32) M2C_FIELD(arg2, s32 *, 0x2C);
        M2C_FIELD(temp_a0, f32 *, 0x1C) = (f32) M2C_FIELD(arg2, s32 *, 0x30);
        M2C_FIELD(temp_a0, s16 *, 0x12) = 1;
    }
}
