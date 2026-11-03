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

M2C_UNK func_80004B5C();                            /* extern */
M2C_UNK func_80026040_ovl_01();                     /* extern */
M2C_UNK func_800269B8_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_8002751C_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
s32 func_800276B4_ovl_01(s32);                      /* extern */
M2C_UNK func_8004CDB8_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_8004CE04_ovl_01();                     /* extern */
M2C_UNK func_8004CEF4_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_8006C0A0_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_80075DD0_ovl_01();                     /* extern */
M2C_UNK func_80076CB4_ovl_01();                     /* extern */
M2C_UNK func_80077808_ovl_01(M2C_UNK);              /* extern */
extern s32 D_80012820;
extern s8 D_80012888;
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E9118_ovl_01;
extern s32 D_8010B698_ovl_01;
extern s16 *D_80119E40_ovl_01;

void func_8009CCAC_ovl_01(void) {
    s16 sp10;
    s32 var_s0;

    D_80012820 = D_8010B698_ovl_01;
    var_s0 = 0;
loop_1:
    if ((func_800276B4_ovl_01(0) == 0) && (M2C_FIELD(&D_800E9118_ovl_01, s16 *, 0x10) != 0x7FFF)) {
        var_s0 = func_800276B4_ovl_01(3) == 0;
    }
    if (var_s0 != 0) {
        func_8004CDB8_ovl_01(1);
        var_s0 = 0;
        goto loop_1;
    }
    func_8006C0A0_ovl_01(0);
    func_8004CDB8_ovl_01(1);
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & 0x20) {
        func_80004B5C();
    }
    sp10 = 0xFFFF;
    D_80119E40_ovl_01 = &sp10;
    func_80076CB4_ovl_01();
    func_80075DD0_ovl_01();
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & ~0x10);
    func_8002751C_ovl_01(2, 1);
    func_80026040_ovl_01();
    func_800269B8_ovl_01(0xC);
    M2C_FIELD(&D_800E9118_ovl_01, s16 *, 0x96) = 0;
    M2C_FIELD(&D_800E9118_ovl_01, s16 *, 0x94) = -1;
    func_80077808_ovl_01(0x01007800);
    D_80012888 = 0x78;
    func_8004CEF4_ovl_01(0);
    func_8004CE04_ovl_01();
}
