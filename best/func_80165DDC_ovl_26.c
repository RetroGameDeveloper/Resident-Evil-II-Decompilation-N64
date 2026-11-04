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

s32 func_80040BE4_ovl_01(s32);                      /* extern */
M2C_UNK func_80077B0C_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80166E20_ovl_26(void *, void *, s32);  /* extern */

void func_80165DDC_ovl_26(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a2;
    s8 temp_a2;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0x250);
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x3F00;
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 1);
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x28) - M2C_FIELD(temp_s1, s32 *, 0x28);
        temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x30) - M2C_FIELD(temp_s1, s32 *, 0x30);
        M2C_FIELD(arg0, u16 *, 0x1F6) = (u16) (func_80040BE4_ovl_01((temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2)) - 0x5BF);
        M2C_FIELD(arg0, s8 *, 0x206) = 7;
        func_80077B0C_ovl_01(0x04010001, arg0 + 0x28);
    }
    temp_a2 = M2C_FIELD(arg0, s8 *, 0x206);
    if (temp_a2 != 0) {
        var_a2 = temp_a2 * ((s32) (M2C_FIELD(arg0, u16 *, 0x1F6) << 0x10) >> 0x13);
        M2C_FIELD(arg0, s8 *, 0x206) = (s8) ((u8) M2C_FIELD(arg0, s8 *, 0x206) - 1);
    } else {
        var_a2 = 0;
    }
    func_80166E20_ovl_26(arg0, temp_s1, var_a2 + 0x5BF);
    if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x40) != 0) {
        M2C_FIELD(arg0, s8 *, 5) = 1;
        M2C_FIELD(arg0, u8 *, 6) = 0;
    }
}
