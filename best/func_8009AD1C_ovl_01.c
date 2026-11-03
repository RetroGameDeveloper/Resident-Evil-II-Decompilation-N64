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

M2C_UNK func_80027180_ovl_01(u8);                   /* extern */
M2C_UNK func_8002751C_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_800337F4_ovl_01();                     /* extern */
M2C_UNK func_8004CDB8_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_80052E24_ovl_01();                     /* extern */
M2C_UNK func_80055210_ovl_01();                     /* extern */
M2C_UNK func_800635E0_ovl_01();                     /* extern */
M2C_UNK func_80065020_ovl_01(s16, void *);          /* extern */
M2C_UNK func_80076A38_ovl_01();                     /* extern */
M2C_UNK func_80083B2C_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_80083C44_ovl_01(s16);                  /* extern */
extern s32 D_8009B230_ovl_01;
extern M2C_UNK D_800C7650_ovl_01;
extern s8 D_800E9127_ovl_01;
extern s16 D_8011A318_ovl_01;
extern s32 D_80131468_ovl_01;

void func_8009AD1C_ovl_01(void) {
    s16 temp_a0;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u8 temp_v0_4;

    func_80052E24_ovl_01();
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x10000) {
        do {
            func_8004CDB8_ovl_01(1);
        } while (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x10000);
    }
    if (D_80131468_ovl_01 != 0) {
        D_8011A318_ovl_01 = 0;
        func_8004CD84_ovl_01(1, &D_8009B230_ovl_01);
    }
    func_8004CDB8_ovl_01(1);
    temp_v0 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x184A8), u16 *, 0);
    M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19AB4) = temp_v0;
    M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19C34) = temp_v0;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AA8) = (s32) (s16) temp_v0;
    temp_v0_2 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x184A8), u16 *, 2);
    M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19AB6) = temp_v0_2;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AAC) = (s32) (s16) temp_v0_2;
    temp_v0_3 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x184A8), u16 *, 4);
    M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19AB8) = temp_v0_3;
    M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19C36) = temp_v0_3;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AB0) = (s32) (s16) temp_v0_3;
    M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19AE6) = (u16) M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x184A8), u16 *, 6);
    temp_v0_4 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x184A8), u8 *, 0xB);
    M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19C22) = temp_v0_4;
    M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19CDE) = (s16) -((temp_v0_4 & 0xFF) * 0x708);
    func_80027180_ovl_01(M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x184A8), u8 *, 0xA));
    temp_a0 = M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215F8);
    M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FE) = (s16) (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x215FA) + ((temp_a0 + 1) << 8));
    M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x215FA) = (u16) M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x184A8), u8 *, 9);
    if (temp_a0 != M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x184A8), u8 *, 8)) {
        M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215F8) = (s16) M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x184A8), u8 *, 8);
        func_80065020_ovl_01(temp_a0, M2C_FIELD(&D_800C7650_ovl_01, void **, 0x184A8));
    }
    func_80076A38_ovl_01();
    func_800337F4_ovl_01();
    func_800635E0_ovl_01();
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x02000000) {
        do {
            func_8004CDB8_ovl_01(1);
        } while (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x02000000);
    }
    func_80083C44_ovl_01(M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FC));
    func_80055210_ovl_01();
    func_8002751C_ovl_01(0, 0);
    func_80083B2C_ovl_01(1);
    D_800E9127_ovl_01 = 1;
    func_8004CDB8_ovl_01(1);
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & 0x400000) {
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & 0xFFBFFFFF);
    }
}
