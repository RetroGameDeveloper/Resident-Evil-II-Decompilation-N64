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
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_80166690_ovl_35;

void func_801634F0_overlay_035(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u16 temp_v0_2;
    u8 temp_v0;

    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        temp_v0 = *((func_80033634_ovl_01() & 7) + &D_80166690_ovl_35);
        M2C_FIELD(arg0, u8 *, 0x2C3) = 0U;
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) ((s8) temp_v0 + 0x96);
    }
    temp_v0_2 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
    M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0_2;
    if (((temp_v0_2 << 0x10) == 0) || (M2C_FIELD(arg0, u8 *, 0x2C3) != 0)) {
        M2C_FIELD(arg0, s16 *, 6) = 0x200;
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
}
