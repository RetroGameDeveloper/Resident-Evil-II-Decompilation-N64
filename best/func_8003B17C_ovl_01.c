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

M2C_UNK func_80069F4C_ovl_01(s32 *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern void *D_800EBB34_ovl_01;
extern s32 D_801126AC_ovl_01;

void func_8003B17C_ovl_01(void) {
    s32 sp10;
    s32 sp14;
    s32 sp18;

    sp10 = (s32) M2C_FIELD(D_800EBB34_ovl_01, s16 *, 0x34);
    sp14 = (s32) M2C_FIELD(D_800EBB34_ovl_01, s16 *, 0x36);
    sp18 = (s32) M2C_FIELD(D_800EBB34_ovl_01, s16 *, 0x38);
    func_80069F4C_ovl_01(&sp10, 2, 0x2000, 0);
    if (D_801126AC_ovl_01 != 0) {
        M2C_FIELD(D_800EBB34_ovl_01, s8 *, 0) = 0;
        M2C_FIELD(D_800EBB34_ovl_01, s16 *, 0x18) = 0;
    }
}
