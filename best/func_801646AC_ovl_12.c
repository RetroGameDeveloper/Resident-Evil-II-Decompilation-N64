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

M2C_UNK func_80032B8C_ovl_01(void *, M2C_UNK);      /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80162ED4_ovl_12(void *, M2C_UNK, M2C_UNK); /* extern */

void func_801646AC_ovl_12(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u16 temp_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 7);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s8 *, 0x2B5) = 0;
        M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) | 0x80);
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 2);
        return;
    case 1:
        M2C_FIELD(arg0, u8 *, 7) = 2U;
        func_80162ED4_ovl_12(arg0, 0x41, -0x140);
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) & 0xFD);
        /* fallthrough */
    case 2:
        func_80032B8C_ovl_01(arg0, 0);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
        if ((temp_v0 << 0x10) == 0) {
            M2C_FIELD(arg0, s16 *, 6) = 0x100;
            M2C_FIELD(arg0, s16 *, 0x1E0) = 0x118;
            M2C_FIELD(arg0, s8 *, 0x2B5) = 1;
            func_80077D48_ovl_01(3, arg0);
        }
        return;
    }
}
