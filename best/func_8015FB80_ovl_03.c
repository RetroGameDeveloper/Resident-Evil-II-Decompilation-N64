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

s32 func_800439B8_ovl_01(s32, void *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_80160B9C_ovl_03;

void func_8015FB80_ovl_03(void) {
    s16 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;

    if (M2C_FIELD(&D_80160B9C_ovl_03, s16 *, 0x14) != 0) {
        M2C_FIELD(&D_80160B9C_ovl_03, s16 *, 0x14) = (s16) ((u16) M2C_FIELD(&D_80160B9C_ovl_03, s16 *, 0x14) - 2);
    }
    temp_v1 = M2C_FIELD(&D_80160B9C_ovl_03, s32 *, 0x18) - 1;
    if (M2C_FIELD(&D_80160B9C_ovl_03, s32 *, 0x18) >= 0) {
        M2C_FIELD(&D_80160B9C_ovl_03, s32 *, 0x18) = temp_v1;
        M2C_FIELD(&D_80160B9C_ovl_03, u16 *, 0x16) = (u16) (((temp_v1 * (temp_v1 * 0x2E)) / 484) - 0x2E);
    }
    temp_v0 = M2C_FIELD(&D_80160B9C_ovl_03, u16 *, 0x16) + 0x4C;
    M2C_FIELD(&D_80160B9C_ovl_03, s16 *, 0x7CA) = temp_v0;
    M2C_FIELD(&D_80160B9C_ovl_03, s16 *, 0x7F2) = temp_v0;
    M2C_FIELD(&D_80160B9C_ovl_03, s16 *, 0x81A) = temp_v0;
    temp_v0_2 = func_800439B8_ovl_01(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18204), &D_80160B9C_ovl_03 + 0x7C4, 0, 0);
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18204) = temp_v0_2;
    temp_v0_3 = func_800439B8_ovl_01(temp_v0_2, &D_80160B9C_ovl_03 + 0x7EC, 0, 0);
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18204) = temp_v0_3;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18204) = func_800439B8_ovl_01(temp_v0_3, &D_80160B9C_ovl_03 + 0x814, 0, 0);
}
