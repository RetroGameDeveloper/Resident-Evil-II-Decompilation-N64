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

M2C_UNK func_8017C5E4_ovl_10();                     /* extern */
M2C_UNK func_8017E18C_ovl_10(M2C_UNK);              /* extern */
extern M2C_UNK D_8017E680_ovl_10;

void func_8017C208_ovl_10(void) {
    u16 temp_v0;

    if (M2C_FIELD(&D_8017E680_ovl_10, u8 *, 0x35) == 0) {
        func_8017E18C_ovl_10(0xC68);
        M2C_FIELD(&D_8017E680_ovl_10, u8 *, 0x35) = 1U;
    }
    func_8017C5E4_ovl_10();
    temp_v0 = M2C_FIELD(&D_8017E680_ovl_10, u16 *, 4) + 1;
    M2C_FIELD(&D_8017E680_ovl_10, u16 *, 4) = temp_v0;
    if ((s32) M2C_FIELD(M2C_FIELD(&D_8017E680_ovl_10, void **, 0x3C), u16 *, 0x14) < (s16) temp_v0) {
        M2C_FIELD(&D_8017E680_ovl_10, s32 *, 0x30) = 0;
        M2C_FIELD(&D_8017E680_ovl_10, s16 *, 0x2E) = 0;
        M2C_FIELD(&D_8017E680_ovl_10, s16 *, 0) = 0;
        M2C_FIELD(&D_8017E680_ovl_10, u16 *, 4) = 0U;
        M2C_FIELD(&D_8017E680_ovl_10, u16 *, 2) = (u16) (M2C_FIELD(&D_8017E680_ovl_10, u16 *, 2) + 1);
    }
}
