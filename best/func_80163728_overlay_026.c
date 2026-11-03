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

M2C_UNK func_800377B0_ovl_01(s32, s16, s32, s16 *); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_80089D34_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_80163950_ovl_26(void *, M2C_UNK, M2C_UNK); /* extern */

void func_80163728_overlay_026(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    s32 temp_a0;
    s32 temp_a2;

    func_80089D34_ovl_01(0x40);
    temp_a0 = *M2C_FIELD(arg0, s32 **, 0x214);
    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        if (temp_a0 & 0x10000) {
            temp_a2 = M2C_FIELD(arg0, s32 *, 0x234);
            M2C_FIELD(arg0, u8 *, 7) = 1U;
            sp14 = 0;
            sp12 = 0;
            sp10 = 0;
            func_800377B0_ovl_01((M2C_FIELD(arg0, u8 *, 0x2C0) << 0x10) | 0x1D000C00, (s16) (M2C_FIELD(arg0, s16 *, 0x66) + M2C_FIELD((temp_a2 + (M2C_FIELD(arg0, u8 *, 0x25D) * 0x178)), s16 *, 0x5A) + (M2C_FIELD(arg0, u8 *, 0x2CD) << 0xB)), temp_a2 + 0x1060, &sp10);
            func_80077D48_ovl_01(3, arg0);
        }
    } else if (temp_a0 & 0x20000) {
        func_80163950_ovl_26(arg0, arg1, arg2);
    }
}
