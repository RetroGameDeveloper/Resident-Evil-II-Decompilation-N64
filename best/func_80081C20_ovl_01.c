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

s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, s32); /* extern */

void func_80081C20_ovl_01(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u16 temp_a3;
    u16 var_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s8 *, 0x1EA) = 7;
        if (M2C_FIELD(arg0, u16 *, 0x268) & 0x40) {
            M2C_FIELD(arg0, s8 *, 0x1EA) = 0;
        }
        /* fallthrough */
    case 1:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, (((u8) M2C_FIELD(arg0, u8 *, 0x269) >> 7) << 0x10) | 0x200) != 0) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            if (M2C_FIELD(arg0, u16 *, 0x268) & 4) {
                M2C_FIELD(arg0, u8 *, 6) = 1U;
            }
            var_v0 = M2C_FIELD(arg0, u16 *, 0x66) + M2C_FIELD(arg0, u16 *, 0x272);
        } else {
            temp_a3 = M2C_FIELD(arg0, u16 *, 0x268);
            if ((temp_a3 & 8) && (func_80089D34_ovl_01(arg0, arg1, arg2, (((temp_a3 & 0x80) != 0) << 0x10) | 0x200) != 0)) {
                M2C_FIELD(arg0, u8 *, 6) = 2U;
                if (M2C_FIELD(arg0, u16 *, 0x268) & 4) {
                    M2C_FIELD(arg0, u8 *, 6) = 1U;
                }
                M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + M2C_FIELD(arg0, u16 *, 0x272));
            }
            var_v0 = M2C_FIELD(arg0, u16 *, 0x66) + M2C_FIELD(arg0, u16 *, 0x270);
        }
        M2C_FIELD(arg0, u16 *, 0x66) = var_v0;
        break;
    }
}
