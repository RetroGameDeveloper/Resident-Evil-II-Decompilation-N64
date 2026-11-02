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

extern M2C_UNK D_800E10D0_ovl_01;

void func_80059F08_ovl_01(s32 arg0) {
    u16 temp_v0;

    temp_v0 = M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x1F2) + arg0;
    M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x1F2) = temp_v0;
    M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x1F0) = (u16) (M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x1F0) & 0xEFFF);
    if (M2C_FIELD(&D_800E10D0_ovl_01, s16 *, 0x1FE) < (s16) temp_v0) {
        M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x1F2) = (u16) M2C_FIELD(&D_800E10D0_ovl_01, s16 *, 0x1FE);
    }
}
