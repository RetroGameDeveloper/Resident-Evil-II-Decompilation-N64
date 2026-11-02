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

M2C_UNK func_80006D30(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK D_800C2440_ovl_01;
extern M2C_UNK D_800C3440_ovl_01;
extern M2C_UNK D_8010B2C8_ovl_01;
extern M2C_UNK D_80139AC0;
extern M2C_UNK D_80139AD0;

void func_8004CA48_ovl_01(void) {
    func_80006D30(&D_80139AD0, &D_80139AC0, 1);
    M2C_FIELD(&D_8010B2C8_ovl_01, s32 *, 0x1BC) = 4;
    M2C_FIELD(&D_8010B2C8_ovl_01, s32 *, 0x384) = 5;
    M2C_FIELD(&D_8010B2C8_ovl_01, M2C_UNK **, 0x1C0) = &D_800C2440_ovl_01;
    M2C_FIELD(&D_8010B2C8_ovl_01, M2C_UNK **, 0x388) = &D_800C3440_ovl_01;
    M2C_FIELD(&D_8010B2C8_ovl_01, s16 *, 0) = 0;
    M2C_FIELD(&D_8010B2C8_ovl_01, s16 *, 0x1C8) = 0;
    M2C_FIELD(&D_8010B2C8_ovl_01, s16 *, 0x1C4) = 0;
    M2C_FIELD(&D_8010B2C8_ovl_01, s16 *, 0x38C) = 0;
}
