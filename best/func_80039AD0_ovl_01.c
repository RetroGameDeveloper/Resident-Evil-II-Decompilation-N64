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

s16 func_800844FC_ovl_01(s16);                      /* extern */

void func_80039AD0_ovl_01(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s16 *, 4) = func_800844FC_ovl_01(M2C_FIELD(arg1, s16 *, 4));
    M2C_FIELD(arg0, s16 *, 6) = func_800844FC_ovl_01(M2C_FIELD(arg1, s16 *, 6));
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s16 *, 0xC) = func_800844FC_ovl_01(M2C_FIELD(arg1, s16 *, 0xC));
    M2C_FIELD(arg0, s16 *, 0xE) = func_800844FC_ovl_01(M2C_FIELD(arg1, s16 *, 0xE));
    M2C_FIELD(arg0, s16 *, 0x10) = func_800844FC_ovl_01(M2C_FIELD(arg1, s16 *, 0x10));
    M2C_FIELD(arg0, s16 *, 0x12) = func_800844FC_ovl_01(M2C_FIELD(arg1, s16 *, 0x12));
    M2C_FIELD(arg0, s16 *, 0x14) = func_800844FC_ovl_01(M2C_FIELD(arg1, s16 *, 0x14));
    M2C_FIELD(arg0, s16 *, 0x16) = func_800844FC_ovl_01(M2C_FIELD(arg1, s16 *, 0x16));
}
