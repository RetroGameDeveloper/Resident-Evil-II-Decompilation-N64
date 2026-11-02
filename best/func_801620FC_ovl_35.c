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
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_801620FC_ovl_35(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u16 temp_v0;
    u16 var_v0;

    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        if (M2C_FIELD(arg0, u8 *, 0x2DF) == 0) {
            var_v0 = (func_80033634_ovl_01() & 0x1F) + 0x1E;
        } else {
            var_v0 = 0x14;
        }
        M2C_FIELD(arg0, u16 *, 0x1F4) = var_v0;
        M2C_FIELD(arg0, u8 *, 0x2DF) = 0U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0xF00;
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
    M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        M2C_FIELD(arg0, s8 *, 5) = 1;
        M2C_FIELD(arg0, u8 *, 6) = 0;
    }
}
