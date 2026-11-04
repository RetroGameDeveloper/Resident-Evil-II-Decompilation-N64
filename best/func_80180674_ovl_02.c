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

s32 D_800B36A4(s16, u16, M2C_UNK, s32, s32, s32, s32); /* extern */
M2C_UNK D_800B42BC(s32, M2C_UNK *, s32, M2C_UNK);   /* extern */
s32 func_80180570_ovl_02(s16, s16, s16);            /* extern */
M2C_UNK func_8018064C_ovl_02(s32, M2C_UNK *, s32, s32); /* extern */
extern s32 D_80134450_ovl_01;
extern s32 D_80134474_ovl_01;
extern M2C_UNK D_801344B0_ovl_01;
extern s32 D_801853F4_ovl_02;
extern s32 D_801853F8_ovl_02;
extern s32 D_80185400_ovl_02;
extern s32 D_80185404_ovl_02;
extern s32 D_80185408_ovl_02;

void func_80180674_ovl_02(void) {
    s32 temp_v0;

    if ((D_80134474_ovl_01 & ~1) == M2C_FIELD(((((D_80134450_ovl_01 * 0x89) + D_801853F4_ovl_02) * 2) + &D_801344B0_ovl_01), s16 *, 0xD2)) {
        if (D_80185404_ovl_02 != -1) {
            D_800B42BC(D_80185404_ovl_02, &D_801344B0_ovl_01, D_801853F4_ovl_02, -2);
        }
        temp_v0 = D_800B36A4(M2C_FIELD(((((D_80134450_ovl_01 * 0x89) + D_801853F4_ovl_02) * 2) + &D_801344B0_ovl_01), s16 *, 0xB2), M2C_FIELD(((D_80134450_ovl_01 * 0x112) + &D_801344B0_ovl_01), u16 *, 0xAC), 0x7F, ((M2C_FIELD(((D_80134450_ovl_01 * 0x112) + &D_801344B0_ovl_01), u16 *, 0xAE) * (u8) D_80119E14_ovl_01) / 100) & 0xFF, 0x3F, 0x3F, 0);
        D_80185404_ovl_02 = D_80185400_ovl_02;
        D_80185400_ovl_02 = temp_v0;
        D_801853F4_ovl_02 += 1;
    }
    if ((D_80134474_ovl_01 & ~1) == M2C_FIELD(((((D_80134450_ovl_01 * 0x89) + D_801853F8_ovl_02) * 2) + &D_801344B0_ovl_01), s16 *, 0xFA)) {
        if (D_80185408_ovl_02 != -1) {
            func_8018064C_ovl_02(D_80185408_ovl_02, &D_801344B0_ovl_01, D_801853F8_ovl_02, -2);
        }
        D_80185408_ovl_02 = func_80180570_ovl_02(M2C_FIELD(((((D_80134450_ovl_01 * 0x89) + D_801853F8_ovl_02) * 2) + &D_801344B0_ovl_01), s16 *, 0xF2), M2C_FIELD(((((D_80134450_ovl_01 * 0x89) + D_801853F8_ovl_02) * 2) + &D_801344B0_ovl_01), s16 *, 0x10A), M2C_FIELD(((((D_80134450_ovl_01 * 0x89) + D_801853F8_ovl_02) * 2) + &D_801344B0_ovl_01), s16 *, 0x102));
        D_801853F8_ovl_02 += 1;
    }
}
