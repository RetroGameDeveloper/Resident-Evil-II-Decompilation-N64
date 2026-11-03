/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */
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

M2C_UNK func_800334F8_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80033634_ovl_01(void *);                   /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_80166B18_ovl_26(void *, s32, M2C_UNK); /* extern */

void func_80164E08_overlay_026(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_a1;
    u8 temp_v0;

    if (M2C_FIELD(arg0, u8 *, 0x2D9) == 0) {
        M2C_FIELD(arg0, s8 *, 0x2C1) = 6;
        M2C_FIELD(arg0, s8 *, 0x2C3) = 3;
    }
    if (M2C_FIELD(arg0, u8 *, 5) != 1) {
        if (((M2C_FIELD(arg0, u8 *, 0x26E) % 3) & 0xFF) || (M2C_FIELD(arg0, u8 *, 0x2D9) != 0)) {
            var_a1 = 0xA;
        } else {
            var_a1 = ((func_80033634_ovl_01(arg0) & 1) * 4) | 3;
        }
        func_80166B18_ovl_26(arg0, var_a1, 1);
    }
    if (M2C_FIELD(arg0, u8 *, 5) != 0x10) {
        func_80077D48_ovl_01(2, arg0);
    }
    func_800334F8_ovl_01(arg0, arg1, arg2, 0);
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x2CA);
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) ((temp_v0 << 0x10) + (M2C_FIELD(arg0, u8 *, 0x2CB) << 8) + M2C_FIELD(arg0, u8 *, 0x2CC) + 0x01000000);
        return;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
    M2C_FIELD(arg0, s8 *, 0x2C1) = 3;
    M2C_FIELD(arg0, s8 *, 0x2C3) = 3;
    M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) & 0xFD);
}
