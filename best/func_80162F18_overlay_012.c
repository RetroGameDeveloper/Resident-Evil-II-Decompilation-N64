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

M2C_UNK func_80052C00_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80052C9C_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80162FE0_ovl_12();                         /* extern */

void func_80162F18_overlay_012(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = arg0 + 0x2B4;
    temp_v0 = func_80162FE0_ovl_12();
    if (temp_v0 > 0) {
        func_80052C00_ovl_01(5, 0);
        func_80052C9C_ovl_01(5, 0xC8, 0);
        return;
    }
    if (temp_v0 < 0) {
        if (M2C_FIELD(temp_s0, u8 *, 6) == 2) {
            M2C_FIELD(arg0, s8 *, 5) = 7;
            M2C_FIELD(arg0, s16 *, 6) = 0;
            return;
        }
        M2C_FIELD(arg0, s16 *, 6) = 0x200;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x15000F00;
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        M2C_FIELD(temp_s0, s8 *, 0xA) = 0;
        M2C_FIELD(temp_s0, u16 *, 2) = (u16) (M2C_FIELD(temp_s0, u16 *, 2) + 0x14);
    }
}
