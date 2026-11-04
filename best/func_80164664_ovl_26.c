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

M2C_UNK D_8003322C(M2C_UNK *, M2C_UNK);             /* extern */
s32 func_80032EA4_ovl_01(M2C_UNK *, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800E10D0_ovl_01;

void func_80164664_ovl_26(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;
    u8 temp_t0;

    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        temp_t0 = M2C_FIELD(arg0, u8 *, 0x2B8);
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, s8 *, 0x2B6) = 1;
        M2C_FIELD(arg0, s16 *, 0x1F4) = 0x1E;
        M2C_FIELD(arg0, s16 *, 0x1F6) = 0x2D;
        M2C_FIELD(arg0, s8 *, 0x2DC) = 0x83;
        M2C_FIELD(arg0, s8 *, 0x2C1) = 5;
        M2C_FIELD(arg0, s8 *, 0x2C3) = 3;
        M2C_FIELD(arg0, u8 *, 0x2B8) = 0U;
        M2C_FIELD(arg0, s8 *, 0x2BF) = 0x5A;
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((((M2C_FIELD(arg0, u8 *, 0x2CD) * 0xD) + 8) << 0x18) + 0x3F00);
        M2C_FIELD(arg0, u8 *, 0x2C0) = temp_t0;
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 2);
        M2C_FIELD(&D_800E10D0_ovl_01, void **, 0x250) = arg0;
        M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 4) = 0x05000000;
        M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 0x224) = (s32) M2C_FIELD(arg0, s32 *, 0x224);
        M2C_FIELD(&D_800E10D0_ovl_01, u8 *, 0x26F) = (u8) (M2C_FIELD(&D_800E10D0_ovl_01, u8 *, 0x26F) | 0x80);
        M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 0) = (s32) (M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 0) | 0x42);
        M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 0x228) = (s32) M2C_FIELD(arg0, s32 *, 0x228);
        D_8003322C(&D_800E10D0_ovl_01, 0);
        func_80077D48_ovl_01(0xD, arg0);
    }
    temp_v0 = func_80032EA4_ovl_01(&D_800E10D0_ovl_01, M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x30), 0x100);
    if ((temp_v0 << 0x10) != 0) {
        M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x66) = (u16) (M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x66) + temp_v0);
    }
    if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x40) != 0) {
        M2C_FIELD(arg0, s16 *, 6) = 0x100;
        M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + ((M2C_FIELD(arg0, u8 *, 0x2CD) ^ 1) << 0xB));
    }
}
