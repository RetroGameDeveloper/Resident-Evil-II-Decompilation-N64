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

M2C_UNK func_80026948_ovl_01(s32);                  /* extern */
M2C_UNK func_80027530_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800275F8_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80027688_ovl_01(M2C_UNK);              /* extern */
s32 func_800276B4_ovl_01(M2C_UNK);                  /* extern */
M2C_UNK func_8004CDB8_ovl_01(M2C_UNK);              /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E9118_ovl_01;
extern s32 D_80181F2C_ovl_04;

void func_8017E1C8_ovl_04(s32 arg0) {
    func_80027688_ovl_01(3);
    func_80027530_ovl_01(0x200, 0x1800, 7, 1);
loop_1:
    if (func_800276B4_ovl_01(0) == 0) {
        func_8004CDB8_ovl_01(1);
        goto loop_1;
    }
    func_80026948_ovl_01(D_80181F2C_ovl_04);
    func_80027530_ovl_01(0x200, 0, 7, 1);
    func_800275F8_ovl_01(0, 0x7FFF, 0xFFFF, 0);
    func_8004CDB8_ovl_01(1);
    if ((arg0 == 0) && !(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x200000)) {
        M2C_FIELD(&D_800E9118_ovl_01, s8 *, 0xE) = 2;
        M2C_FIELD(&D_800E9118_ovl_01, s8 *, 0xF) = 2;
    }
}
