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

M2C_UNK func_80032B8C_ovl_01(void *, M2C_UNK);      /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80166510_ovl_12(void *, s16);          /* extern */

void func_801644B0_ovl_12(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u16 temp_v0;
    u16 temp_v1_2;
    u16 var_v1;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 7);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, s16 *, 0x1E0) = 0xF0;
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) D_80166C08_ovl_12[func_80033634_ovl_01() & 7];
        var_v1 = -0x7FU;
        if (func_80033634_ovl_01() & 1) {
            var_v1 = 0x7F;
        }
        M2C_FIELD(arg0, u16 *, 0x1F6) = var_v1;
        if (func_80033634_ovl_01() & 1) {
            M2C_FIELD(arg0, u16 *, 0x1F6) = (u16) -(s32) M2C_FIELD(arg0, u16 *, 0x1F6);
        }
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x02000F00;
        /* fallthrough */
    case 1:
        temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v1_2;
        M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + M2C_FIELD(arg0, u16 *, 0x1F6));
        if ((temp_v1_2 << 0x10) == 0) {
            M2C_FIELD(arg0, u8 *, 7) = 2U;
        }
        break;
    case 2:
        temp_v0 = (M2C_FIELD(arg0, u16 *, 0x66) + M2C_FIELD(arg0, u16 *, 0x1F6)) & 0xFFF;
        M2C_FIELD(arg0, u16 *, 0x66) = temp_v0;
        if ((u32) (temp_v0 - 0x780) < 0x101U) {
            if ((0x1B68 >> (func_80033634_ovl_01() & 0xF)) & 1) {
                M2C_FIELD(arg0, s8 *, 5) = 0xF;
                M2C_FIELD(arg0, s16 *, 6) = 1;
            } else {
                M2C_FIELD(arg0, u8 *, 7) = 3U;
                M2C_FIELD(arg0, u16 *, 0x1F6) = 0U;
            }
        }
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x1AC) & 1) {
            M2C_FIELD(arg0, s16 *, 6) = 0;
        }
        break;
    }
    func_80032B8C_ovl_01(arg0, 0);
    func_80166510_ovl_12(arg0, (s16) M2C_FIELD(arg0, u16 *, 0x1F6));
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
}
