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

M2C_UNK func_8004CCD8_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_8004CDB8_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_8015B204_ovl_03(s32 *);                /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E9118_ovl_01;
extern M2C_UNK D_801607F0_ovl_03;
extern M2C_UNK D_801607FC_ovl_03;
extern s8 D_80160B9C_ovl_03;
extern s8 D_80160B9D_ovl_03;

void func_8015D544_ovl_03(void) {
    s32 *temp_a0;
    s32 temp_v1;
    s32 temp_v1_2;

    M2C_FIELD(&D_800E9118_ovl_01, s8 *, 0xCB) = 0;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) | 0x400);
    func_8004CCD8_ovl_01(1, 2);
    func_8004CDB8_ovl_01(1);
    M2C_FIELD(&D_800E9118_ovl_01, s8 *, 0xCB) = 1;
    temp_v1 = (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x21962) & 3) * 4;
    temp_a0 = temp_v1 + &D_801607F0_ovl_03;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0) = (s32) *temp_a0;
    temp_v1_2 = M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C);
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 4) = (s32) *(temp_v1 + &D_801607FC_ovl_03);
    if (temp_v1_2 & 0x400) {
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) = (s32) (temp_v1_2 & ~0x400);
        if (temp_v1_2 & 8) {
            D_80160B9C_ovl_03 = 3;
            return;
        }
        func_8015B204_ovl_03(temp_a0);
        D_80160B9C_ovl_03 = 1;
        return;
    }
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) = (s32) (temp_v1_2 & 0xFFFDFFFF);
    D_80160B9D_ovl_03 = 3;
}
