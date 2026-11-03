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

M2C_UNK func_80032B8C_ovl_01(s16);                  /* extern */
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80164FB0_ovl_12(void *, M2C_UNK, M2C_UNK); /* extern */

void func_801655BC_ovl_12(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (M2C_FIELD(arg0, s8 *, 0x206) == 0) {
        M2C_FIELD(arg0, s8 *, 0x206) = 1;
        if (M2C_FIELD(arg0, u8 *, 5) != 0xC) {
            M2C_FIELD(arg0, s16 *, 0x1E0) = 0x28;
            func_80032B8C_ovl_01(M2C_FIELD(arg0, s16 *, 0x1F4));
            M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + ((func_80033634_ovl_01() & 0xFF) + 0xFF80));
        }
    }
    func_80164FB0_ovl_12(arg0, arg1, arg2);
    if ((u8) M2C_FIELD(arg0, u8 *, 7) >= 2U) {
        M2C_FIELD(arg0, u8 *, 0x2BF) = (u8) (M2C_FIELD(arg0, u8 *, 0x2BF) & 0xBF);
    }
}
