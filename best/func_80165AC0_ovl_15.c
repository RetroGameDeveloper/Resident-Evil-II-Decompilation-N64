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

M2C_UNK func_801653F8_ovl_15(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern s32 D_80166288_ovl_15;

void func_80165AC0_ovl_15(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u8 *, 0x2CD) == 0) {
        M2C_FIELD(arg0, void (**)(void *, s32), 0x2D0) = func_80165AC0_ovl_15;
        M2C_FIELD(arg0, u8 *, 0x2CD) = (u8) (M2C_FIELD(arg0, u8 *, 0x2CD) + 1);
        D_80166288_ovl_15 = arg1;
        return;
    }
    func_801653F8_ovl_15(arg0, 1, 0, 6, 0x3000, 1);
    func_801653F8_ovl_15(arg0, 1, 0, 6, 0x3000, 1);
    if (M2C_FIELD(arg0, u8 *, 0x2CD) == D_80166288_ovl_15) {
        M2C_FIELD(arg0, void (**)(void *, s32), 0x2D0) = NULL;
    }
    M2C_FIELD(arg0, u8 *, 0x2CD) = (u8) (M2C_FIELD(arg0, u8 *, 0x2CD) + 1);
}
