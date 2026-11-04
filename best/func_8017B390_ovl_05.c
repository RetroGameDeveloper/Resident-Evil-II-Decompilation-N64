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

extern M2C_UNK D_8017E274_ovl_05;
extern M2C_UNK D_8017E544_ovl_05;
extern u8 D_8017E54C_ovl_05;

void func_8017B390_ovl_05(void) {
    M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0x212) = 0;
    M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0x186) = 0;
    M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0xFA) = 0;
    M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0x6E) = 0;
    M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0x226) = 0;
    M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0x19A) = 0;
    M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0x10E) = 0;
    M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0x82) = 0;
    if (*(D_8017E54C_ovl_05 + &D_8017E544_ovl_05) == 4) {
        M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0x1AE) = 0;
        M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0x122) = 0;
        M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0x96) = 0;
        M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0xA) = 0;
        M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0x1FE) = 0x20;
        M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0x172) = 0x20;
        M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0xE6) = 0x20;
        M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0x5A) = 0x20;
        return;
    }
    M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0x1AE) = 0x20;
    M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0x122) = 0x20;
    M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0x96) = 0x20;
    M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0xA) = 0x20;
    M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0x1FE) = 0;
    M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0x172) = 0;
    M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0xE6) = 0;
    M2C_FIELD(&D_8017E274_ovl_05, s16 *, 0x5A) = 0;
}
