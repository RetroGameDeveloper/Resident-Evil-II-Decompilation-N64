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

M2C_UNK func_8002751C_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_8015FCCC_ovl_03();                     /* extern */
extern M2C_UNK D_80160B9C_ovl_03;

void func_8015B568_ovl_03(void) {
    switch (M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 2)) { /* irregular */
    case 2:
        M2C_FIELD(&D_80160B9C_ovl_03, s8 *, 1) = 1;
        M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 2) = 0U;
        break;
    case 0:
        func_8002751C_ovl_01(0, 0);
        M2C_FIELD(&D_80160B9C_ovl_03, s16 *, 0x14) = 0x36;
        M2C_FIELD(&D_80160B9C_ovl_03, s32 *, 0x18) = 0x16;
        M2C_FIELD(&D_80160B9C_ovl_03, s16 *, 0x16) = 0;
        M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 2) = 1U;
        /* fallthrough */
    case 1:
        M2C_FIELD(&D_80160B9C_ovl_03, s8 *, 1) = 1;
        M2C_FIELD(&D_80160B9C_ovl_03, u8 *, 2) = 0U;
        break;
    }
    func_8015FCCC_ovl_03();
}
