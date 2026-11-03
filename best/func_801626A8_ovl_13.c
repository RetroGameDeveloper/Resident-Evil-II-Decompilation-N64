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

s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80165BE8_ovl_13(void *, M2C_UNK);      /* extern */

void func_801626A8_ovl_13(void *arg0) {
    M2C_UNK var_a1;
    u8 temp_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 0x2B5) = (u8) (func_80033634_ovl_01() & 7);
        /* fallthrough */
    case 1:
        temp_v0 = M2C_FIELD(arg0, u8 *, 0x2B5) - 1;
        M2C_FIELD(arg0, u8 *, 0x2B5) = temp_v0;
        if ((temp_v0 & 0xFF) == 0xFF) {
            if (M2C_FIELD(arg0, u16 *, 0x1AA) & 0x40) {
                var_a1 = 3;
            } else {
                var_a1 = 2;
            }
            func_80165BE8_ovl_13(arg0, var_a1);
        }
        return;
    }
}
