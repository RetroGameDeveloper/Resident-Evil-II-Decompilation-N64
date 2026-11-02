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

s32 func_80004CFC(M2C_UNK, s32, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_800269B8_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_8002751C_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80042910_ovl_01(M2C_UNK);              /* extern */
s32 func_800479F8_ovl_01(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80052BEC_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80076344_ovl_01(s32);                  /* extern */
M2C_UNK func_80077460_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80170074_ovl_07(M2C_UNK *, M2C_UNK *, void *); /* extern */
extern s32 D_800C5278_ovl_01;
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E8AD0;
extern M2C_UNK D_800E9118_ovl_01;
extern M2C_UNK D_80171CB8_ovl_07;
extern M2C_UNK D_80171CD4_ovl_07;
extern M2C_UNK D_80171CF0_ovl_07;
extern M2C_UNK D_80171D0C_ovl_07;
extern s8 D_80171D29_ovl_07;
extern s8 D_80171D2A_ovl_07;
extern s8 D_80171D2B_ovl_07;
extern s16 D_80171D2C_ovl_07;
extern s8 D_80171D2E_ovl_07;
extern s8 D_80171D2F_ovl_07;
extern s8 D_80171D30_ovl_07;
extern s32 D_80171D38_ovl_07;
extern s32 D_80171D3C_ovl_07;
extern s16 D_80171D44_ovl_07;
extern M2C_UNK D_80171D48_ovl_07;
extern M2C_UNK D_80171DD0_ovl_07;
extern M2C_UNK func_801716C0_ovl_07;

void func_8016E850_ovl_07(void) {
    M2C_UNK *var_a0;
    M2C_UNK *var_a1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_a2;

    func_800269B8_ovl_01(0);
    func_80077460_ovl_01(0xB4, 0x18);
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & ~0x10);
    func_8002751C_ovl_01(2, 1);
    M2C_FIELD(&D_800E9118_ovl_01, s8 *, 0xF) = 0;
    func_80052BEC_ovl_01(0xF01C, 0x803);
    func_80042910_ovl_01(0xC8);
    M2C_FIELD(&D_800E9118_ovl_01, s8 *, 0xE) = 0;
    D_80171D2A_ovl_07 = 0;
    temp_a0 = (D_800C5278_ovl_01 + 0x10007) & ~7;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18284) = temp_a0;
    temp_a0_2 = (func_800479F8_ovl_01(temp_a0, &D_80171CB8_ovl_07, 0x15BE, 1) + 7) & ~7;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18284) = temp_a0_2;
    temp_a0_3 = (func_800479F8_ovl_01(temp_a0_2, &D_80171CD4_ovl_07, 0x15BF, 1) + 7) & ~7;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18284) = temp_a0_3;
    temp_a0_4 = (func_800479F8_ovl_01(temp_a0_3, &D_80171CF0_ovl_07, 0x15C0, 1) + 7) & ~7;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18284) = temp_a0_4;
    temp_v0 = (func_800479F8_ovl_01(temp_a0_4, &D_80171D0C_ovl_07, 0x15C1, 1) + 7) & ~7;
    temp_a1 = (temp_v0 + 7) & ~7;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18284) = temp_v0;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18284) = temp_a1;
    M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x19A75) = 0x10;
    M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x19A74) = 8;
    M2C_FIELD(&D_80171D0C_ovl_07, s32 *, 0x18) = (s32) M2C_FIELD(&D_80171CB8_ovl_07, s32 *, 0x18);
    M2C_FIELD(&D_80171CF0_ovl_07, s32 *, 0x18) = (s32) M2C_FIELD(&D_80171CB8_ovl_07, s32 *, 0x18);
    M2C_FIELD(&D_80171CD4_ovl_07, s32 *, 0x18) = (s32) M2C_FIELD(&D_80171CB8_ovl_07, s32 *, 0x18);
    temp_v0_2 = func_80004CFC(0x758, temp_a1, 1, &func_801716C0_ovl_07);
    M2C_FIELD(&D_80171D48_ovl_07, s8 *, 6) = 0;
    M2C_FIELD(&D_800C7650_ovl_01, M2C_UNK **, 0x1827C) = &D_80171D48_ovl_07;
    M2C_FIELD(&D_80171D48_ovl_07, s32 *, 8) = (s32) M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18284);
    temp_a0_5 = M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18284) + temp_v0_2;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18284) = temp_a0_5;
    func_80076344_ovl_01(temp_a0_5);
    D_80171D29_ovl_07 = 1;
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & 0x02000000) {
        D_80171D2B_ovl_07 = 0x11;
    } else {
        D_80171D2B_ovl_07 = 0;
    }
    var_a1 = &D_80171DD0_ovl_07;
    var_a0 = &D_800E8AD0;
    temp_a2 = &D_800E8AD0 + 0x4E0;
    D_80171D38_ovl_07 = 0;
    D_80171D44_ovl_07 = 0x2000;
    D_80171D3C_ovl_07 = 0;
    do {
        M2C_FIELD(var_a1, s32 *, 0) = (s32) M2C_FIELD(var_a0, s32 *, 0);
        M2C_FIELD(var_a1, s32 *, 4) = (s32) M2C_FIELD(var_a0, s32 *, 4);
        M2C_FIELD(var_a1, s32 *, 8) = (s32) M2C_FIELD(var_a0, s32 *, 8);
        M2C_FIELD(var_a1, s32 *, 0xC) = (s32) M2C_FIELD(var_a0, s32 *, 0xC);
        var_a0 += 0x10;
        var_a1 += 0x10;
    } while (var_a0 != temp_a2);
    D_80171D2C_ovl_07 = 0;
    D_80171D2E_ovl_07 = 0;
    D_80171D2F_ovl_07 = 0;
    M2C_FIELD(var_a1, s32 *, 0) = (s32) M2C_FIELD(var_a0, s32 *, 0);
    M2C_FIELD(var_a1, s32 *, 4) = (s32) M2C_FIELD(var_a0, s32 *, 4);
    M2C_FIELD(var_a1, s32 *, 8) = (s32) M2C_FIELD(var_a0, s32 *, 8);
    D_80171D30_ovl_07 = 0;
    func_80170074_ovl_07(var_a0, var_a1, temp_a2);
}
