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
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_801628B0_ovl_27(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s0;

    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        temp_s0 = func_80033634_ovl_01();
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((((temp_s0 & 1) + 1) << 0x18) + ((func_80033634_ovl_01() & 0xF) << 0x10) + 0x700);
    }
    if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0) {
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((((func_80033634_ovl_01() & 1) + 1) << 0x18) + 0x700);
    }
    if ((M2C_FIELD(arg0, u16 *, 0x1AA) != 0x2021) && (M2C_FIELD(arg0, u8 *, 0x2BE) == 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0x7D0U)) {
        M2C_FIELD(arg0, s16 *, 6) = 0x100;
    }
}
