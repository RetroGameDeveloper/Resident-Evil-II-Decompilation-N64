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

M2C_UNK func_8004CDB8_ovl_01(M2C_UNK);              /* extern */
s32 func_80076CB4_ovl_01();                         /* extern */
s32 func_80077000_ovl_01();                         /* extern */
M2C_UNK func_80078C78_ovl_01(s8, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80078F14_ovl_01(s8, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80079374_ovl_01(s8, s16, s16);         /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E8AFC_ovl_01;
extern M2C_UNK D_801124DC_ovl_01;
extern u8 D_801124F5_ovl_01;
extern M2C_UNK D_801170B8_ovl_01;
extern s32 D_80119D24_ovl_01;
extern u8 D_80119E10_ovl_01;
extern M2C_UNK D_80119E3C_ovl_01;
extern u8 D_80119E3D_ovl_01;
extern void *D_80119E40_ovl_01;
extern M2C_UNK D_80119E84_ovl_01;
extern s8 D_80119E85_ovl_01;

void func_80076610_ovl_01(void) {
    s32 var_s4;
    u32 temp_v1_6;
    u32 var_v0;
    u8 *temp_a1;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *temp_v1_5;
    u8 temp_s2;
    u8 temp_s3;
    void *temp_v1_3;
    void *temp_v1_4;

    temp_v1 = D_801124F5_ovl_01 + &D_801124DC_ovl_01;
    *temp_v1 += 1;
    if (!(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x2000)) {
        temp_v1_2 = D_801124F5_ovl_01 + &D_801124DC_ovl_01;
        *temp_v1_2 += 1;
        temp_a1 = D_801124F5_ovl_01 + &D_801124DC_ovl_01;
        temp_v1_3 = (*(M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215F8) + &D_801170B8_ovl_01) * 2) + &D_800E8AFC_ovl_01;
        D_80119E40_ovl_01 = temp_v1_3;
        temp_v1_4 = temp_v1_3 + (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FA) * 2);
        D_80119E40_ovl_01 = temp_v1_4;
        temp_s2 = M2C_FIELD(temp_v1_4, u8 *, 0);
        temp_s3 = M2C_FIELD(temp_v1_4, u8 *, 1);
        *temp_a1 += 1;
        if (D_80119E10_ovl_01 != 0) {
            do {
                func_8004CDB8_ovl_01(1);
            } while (D_80119E10_ovl_01 != 0);
        }
        temp_v1_5 = D_801124F5_ovl_01 + &D_801124DC_ovl_01;
        *temp_v1_5 += 1;
        D_801124F5_ovl_01 += 1;
        var_s4 = 1;
        if ((temp_s2 & 0x3F) != (M2C_FIELD(&D_80119E3C_ovl_01, u8 *, 0) & 0x3F)) {
            *(D_801124F5_ovl_01 + &D_801124DC_ovl_01) = 0;
            if ((func_80076CB4_ovl_01() << 0x18) != 0) {
                var_v0 = 0xFF;
            } else {
                var_v0 = temp_s2 >> 6;
            }
            D_80119E85_ovl_01 = (s8) var_v0;
            *(D_801124F5_ovl_01 + &D_801124DC_ovl_01) = 1;
        } else {
            *(D_801124F5_ovl_01 + &D_801124DC_ovl_01) = 2;
            var_s4 = 0;
            if ((temp_s2 >> 6) != 0) {
                if ((M2C_FIELD(&D_80119E84_ovl_01, u8 *, 0) != 0) && (M2C_FIELD(&D_80119E84_ovl_01, u8 *, 0) != 0xFF)) {
                    *(D_801124F5_ovl_01 + &D_801124DC_ovl_01) = 3;
                    func_80078F14_ovl_01(M2C_FIELD(&D_80119E84_ovl_01, s8 *, 2), 0x7F, 0x5A);
                    *(D_801124F5_ovl_01 + &D_801124DC_ovl_01) = 4;
                    M2C_FIELD(&D_80119E84_ovl_01, u8 *, 0) = 0xFU;
                }
            } else if (M2C_FIELD(&D_80119E84_ovl_01, u8 *, 0) == 2) {
                if (M2C_FIELD(&D_80119E84_ovl_01, s8 *, 2) >= 0) {
                    if (D_80119D24_ovl_01 != 0) {
                        *(D_801124F5_ovl_01 + &D_801124DC_ovl_01) = 5;
                        func_80078C78_ovl_01(M2C_FIELD(&D_80119E84_ovl_01, s8 *, 2), 0, 1, 0);
                        *(D_801124F5_ovl_01 + &D_801124DC_ovl_01) = 6;
                    }
                    *(D_801124F5_ovl_01 + &D_801124DC_ovl_01) = 7;
                    func_80079374_ovl_01(M2C_FIELD(&D_80119E84_ovl_01, s8 *, 2), M2C_FIELD(&D_80119E84_ovl_01, s16 *, 4), M2C_FIELD(&D_80119E84_ovl_01, s16 *, 4));
                    *(D_801124F5_ovl_01 + &D_801124DC_ovl_01) = 8;
                }
                D_80119E85_ovl_01 = 0;
            }
        }
        if ((temp_s3 & 0x3F) == (D_80119E3D_ovl_01 & 0x3F)) {
            if (var_s4 == 1) {
                goto block_22;
            }
            if (((temp_s3 >> 6) & 1) && (M2C_FIELD(&D_80119E84_ovl_01, u8 *, 8) != 0)) {
                *(D_801124F5_ovl_01 + &D_801124DC_ovl_01) = 0xB;
                func_80078F14_ovl_01(M2C_FIELD(&D_80119E84_ovl_01, s8 *, 0xA), 0x7F, 0x5A);
                *(D_801124F5_ovl_01 + &D_801124DC_ovl_01) = 0xC;
            }
            if (((temp_s3 >> 7) != 0) && (M2C_FIELD(&D_80119E84_ovl_01, u8 *, 0x10) != 0)) {
                *(D_801124F5_ovl_01 + &D_801124DC_ovl_01) = 0xD;
                func_80078F14_ovl_01(M2C_FIELD(&D_80119E84_ovl_01, s8 *, 0x12), 0x7F, 0x5A);
                *(D_801124F5_ovl_01 + &D_801124DC_ovl_01) = 0xE;
            }
        } else {
block_22:
            *(D_801124F5_ovl_01 + &D_801124DC_ovl_01) = 9;
            if ((func_80077000_ovl_01() << 0x18) != 0) {
                M2C_FIELD(&D_80119E84_ovl_01, s8 *, 9) = 0xFF;
                M2C_FIELD(&D_80119E84_ovl_01, s8 *, 0x11) = 0xFF;
            } else {
                temp_v1_6 = temp_s3 & 0xFFFF;
                M2C_FIELD(&D_80119E84_ovl_01, s8 *, 9) = (s8) ((temp_v1_6 >> 6) & 1);
                M2C_FIELD(&D_80119E84_ovl_01, s8 *, 0x11) = (s8) (temp_v1_6 >> 7);
            }
            *(D_801124F5_ovl_01 + &D_801124DC_ovl_01) = 0xA;
        }
        D_801124F5_ovl_01 -= 1;
        M2C_FIELD(&D_80119E3C_ovl_01, u8 *, 0) = (u8) M2C_FIELD(D_80119E40_ovl_01, s8 *, 0);
        M2C_FIELD(&D_80119E3C_ovl_01, s8 *, 1) = (s8) M2C_FIELD(D_80119E40_ovl_01, s8 *, 1);
    }
}
