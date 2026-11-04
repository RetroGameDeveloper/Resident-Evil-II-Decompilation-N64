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

s32 func_80033634_ovl_01();                         /* extern */
s32 func_8006A45C_ovl_01(u16 *, s32);               /* extern */
M2C_UNK func_80165BE8_ovl_13(void *, M2C_UNK);      /* extern */

void func_80165BF4_ovl_13(void *arg0) {
    u16 sp10;
    u16 sp12;
    u16 sp14;
    M2C_UNK var_a1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    u32 temp_s1;
    u8 temp_v0;

    temp_s1 = M2C_FIELD(arg0, u16 *, 0x66) & 0xFFF;
    if (M2C_FIELD(arg0, s32 *, 0x1AC) & 1) {
        temp_v0 = M2C_FIELD(arg0, u8 *, 0x2B9);
        var_v0 = temp_v0 < 0xBU;
        if (temp_v0 == 0) {
            if (M2C_FIELD(arg0, s16 *, 0x1E0) >= 0xE7) {
                sp10 = M2C_FIELD(arg0, u16 *, 0x2A);
                sp12 = M2C_FIELD(arg0, u16 *, 0x2E);
                sp14 = M2C_FIELD(arg0, u16 *, 0x32);
                temp_v1 = func_8006A45C_ovl_01(&sp10, M2C_FIELD(arg0, s32 *, 0x1B0)) & 0xFFFF;
                if (temp_v1 != 2) {
                    temp_v1_2 = temp_v1 << 0xA;
                    if (((u32) ((temp_v1_2 + 0x780) & 0xFFF) < temp_s1) && (temp_s1 < (u32) ((temp_v1_2 + 0x880) & 0xFFF))) {
                        goto block_10;
                    }
                } else if ((u32) (temp_s1 - 0x80) >= 0xF01U) {
block_10:
                    func_80165BE8_ovl_13(arg0, 0xA);
                }
            }
            var_v0 = (u8) M2C_FIELD(arg0, u8 *, 0x2B9) < 0xBU;
        }
        if (var_v0 == 0) {
            if (!(func_80033634_ovl_01() & 0x7F)) {
                var_a1 = 7;
            } else {
                var_a1 = 8;
            }
            func_80165BE8_ovl_13(arg0, var_a1);
        }
        if (M2C_FIELD(arg0, s16 *, 0x1E0) >= 0x65) {
            M2C_FIELD(arg0, s16 *, 0x1E0) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x1E0) - 4);
        }
        M2C_FIELD(arg0, u8 *, 0x2B9) = (u8) (M2C_FIELD(arg0, u8 *, 0x2B9) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2B9) = 0U;
}
