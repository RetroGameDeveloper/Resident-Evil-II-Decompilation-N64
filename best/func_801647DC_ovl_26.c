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

M2C_UNK D_8003322C(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_800331E8_ovl_01();                         /* extern */
M2C_UNK func_800377B0_ovl_01(M2C_UNK, s16, s32, s16 *); /* extern */
s32 func_80059E30_ovl_01(M2C_UNK, M2C_UNK);         /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80163D58_ovl_26(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801668E0_ovl_26(M2C_UNK *);            /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;

void func_801647DC_ovl_26(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    s16 var_v1;
    s32 temp_v0_4;
    u16 temp_v0;
    u16 temp_v1;
    u8 temp_s2;
    u8 temp_v0_2;
    u8 temp_v0_3;

    temp_s2 = M2C_FIELD(arg0, u8 *, 7);
    switch (temp_s2) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, s8 *, 0x2C1) = 3;
        M2C_FIELD(arg0, s8 *, 0x2C3) = 3;
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((((M2C_FIELD(arg0, u8 *, 0x2CD) * 0xD) + 9) << 0x18) + 0x3F00);
        /* fallthrough */
    case 1:
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F6) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F6) = temp_v0;
        if ((temp_v0 << 0x10) == 0) {
            M2C_FIELD(arg0, u8 *, 7) = 2U;
            M2C_FIELD(arg0, u8 *, 0x2DC) = (u8) (M2C_FIELD(arg0, u8 *, 0x2DC) - 1);
        }
block_24:
    default:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x40) != 0) {
            M2C_FIELD(arg0, s8 *, 0x1EA) = 0x3F;
        }
        temp_v1 = M2C_FIELD(arg0, u16 *, 0x1F4) - func_800331E8_ovl_01();
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v1;
        if (((temp_v1 & 0x8000) && (M2C_FIELD(&D_800E10D0_ovl_01, s16 *, 0x1F2) >= 0)) || !(M2C_FIELD(arg0, u8 *, 0x2DC) & 0x7F)) {
            M2C_FIELD(arg0, s16 *, 6) = 0x200;
            M2C_FIELD(&D_800E10D0_ovl_01, u8 *, 5) = 2U;
            M2C_FIELD(&D_800E10D0_ovl_01, s8 *, 6) = 0;
            M2C_FIELD(&D_800E10D0_ovl_01, s8 *, 7) = 0;
            M2C_FIELD(arg0, u8 *, 0x2DC) = 0U;
        }
        return;
    case 2:
        if (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) & 0x20) {
            if (M2C_FIELD(arg0, u8 *, 0x2CD) == 0) {
                M2C_FIELD(arg0, s8 *, 5) = 6;
                M2C_FIELD(arg0, s16 *, 6) = 0x200;
                D_8003322C(&D_800E10D0_ovl_01, arg1, arg2, 0);
                func_80163D58_ovl_26(arg0, arg1, arg2);
                M2C_FIELD(&D_800E10D0_ovl_01, s8 *, 4) = 6;
                M2C_FIELD(&D_800E10D0_ovl_01, u8 *, 5) = temp_s2;
                M2C_FIELD(&D_800E10D0_ovl_01, s8 *, 6) = 0;
                M2C_FIELD(&D_800E10D0_ovl_01, s8 *, 7) = 0;
                M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) | 0x04000100);
                return;
            }
            goto block_14;
        }
block_14:
        M2C_FIELD(arg0, u8 *, 7) = 3U;
        M2C_FIELD(arg0, u8 *, 0x206) = 3U;
        M2C_FIELD(arg0, u8 *, 0x207) = 1U;
        func_80077D48_ovl_01(3, arg0);
    case 3:
        temp_v0_2 = M2C_FIELD(arg0, u8 *, 0x207) - 1;
        M2C_FIELD(arg0, u8 *, 0x207) = temp_v0_2;
        if ((temp_v0_2 << 0x18) == 0) {
            var_v1 = 0xC8;
            if (M2C_FIELD(arg0, u8 *, 0x2CD) != 0) {
                var_v1 = -0xC8;
            }
            sp10 = var_v1;
            sp12 = -0x1C2;
            sp14 = 0;
            func_800377B0_ovl_01(0x1D030C00, (s16) (M2C_FIELD(arg0, u16 *, 0x66) + (M2C_FIELD(arg0, u8 *, 0x2CD) << 0xB)), M2C_FIELD(arg0, s32 *, 0x234) + 0x1060, &sp10);
            M2C_FIELD(arg0, u8 *, 0x207) = 4U;
            temp_v0_3 = M2C_FIELD(arg0, u8 *, 0x206) - 1;
            M2C_FIELD(arg0, u8 *, 0x206) = temp_v0_3;
            if ((temp_v0_3 << 0x18) == 0) {
                M2C_FIELD(arg0, u8 *, 7) = 1U;
                M2C_FIELD(arg0, u16 *, 0x1F6) = 0x19U;
                temp_v0_4 = func_80059E30_ovl_01(0x14, 0);
                if (temp_v0_4 != 2) {
                    M2C_FIELD(&D_800E10D0_ovl_01, s8 *, 6) = 2;
                    M2C_FIELD(&D_800E10D0_ovl_01, s8 *, 7) = 0;
                    if (temp_v0_4 != 0) {
                        M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) = (u16) (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) | 0x20);
                    }
                } else {
                    M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 0) = (s32) (M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 0) & ~0x42);
                    func_801668E0_ovl_26(&D_800E10D0_ovl_01);
                    M2C_FIELD(arg0, s16 *, 0x136) = 0x12C;
                    M2C_FIELD(arg0, s16 *, 0x138) = 0x12C;
                    M2C_FIELD(arg0, s16 *, 6) = 0x200;
                    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) | 4) & ~2);
                }
            }
        }
        goto block_24;
    }
}
