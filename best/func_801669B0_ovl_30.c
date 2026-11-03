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

M2C_UNK func_80032B8C_ovl_01(void *, s32);          /* extern */
M2C_UNK func_80077B0C_ovl_01(s32, void *);          /* extern */
s32 func_80089D34_ovl_01(void *, s32, s32, M2C_UNK); /* extern */

void func_801669B0_ovl_30(void *arg0) {
    s32 temp_s1;
    s32 temp_s2;
    u16 temp_v0;
    u8 temp_a0;
    u8 temp_v1;

    temp_s2 = M2C_FIELD(arg0, s32 *, 0x1A4);
    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    temp_s1 = M2C_FIELD(arg0, s32 *, 0x218);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u16 *, 0x1E0) = 0x258U;
        temp_a0 = M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
        M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 1);
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (((temp_a0 + 3) << 0x18) + 0xF00);
        if (temp_a0 == 0) {
            M2C_FIELD(arg0, s16 *, 0x1F4) = 0x800;
        } else {
            M2C_FIELD(arg0, s16 *, 0x1F4) = 0;
        }
        func_80077B0C_ovl_01((((temp_a0 & 1) + 1) << 0x10) | 0x04000001, arg0 + 0x28);
        /* fallthrough */
    case 1:
        if (func_80089D34_ovl_01(arg0, temp_s2, temp_s1, 0x100) != 0) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
            M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) & 0xFE);
            M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) & 0x7F);
        }
        func_80032B8C_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x1F4) - M2C_FIELD(arg0, s16 *, 0x66));
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1E0) - 0x5A;
        M2C_FIELD(arg0, u16 *, 0x1E0) = temp_v0;
        if (temp_v0 & 0x8000) {
            M2C_FIELD(arg0, u16 *, 0x1E0) = 0U;
        }
        return;
    }
}
