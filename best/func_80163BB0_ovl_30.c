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
M2C_UNK func_800334F8_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801637A4_ovl_30(void *);               /* extern */

void func_80163BB0_ovl_30(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u16 temp_v0;
    u8 temp_s0;

    temp_s0 = M2C_FIELD(arg0, u8 *, 7);
    switch (temp_s0) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x06000F00;
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        func_80077D48_ovl_01(0xB, arg0);
        return;
    case 1:
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0) {
            M2C_FIELD(arg0, u8 *, 7) = 2U;
            M2C_FIELD(arg0, u16 *, 0x1F4) = 0x1FU;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x3F00;
            func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
        }
        func_80032B8C_ovl_01(arg0, 0);
        return;
    case 2:
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
        if ((temp_v0 << 0x10) == 0) {
            M2C_FIELD(arg0, u8 *, 5) = temp_s0;
            M2C_FIELD(arg0, s16 *, 6) = 0;
            M2C_FIELD(arg0, s8 *, 0x2B4) = 0;
            M2C_FIELD(arg0, s8 *, 0x2B8) = 0x3C;
            func_801637A4_ovl_30(arg0);
        }
        return;
    }
}
