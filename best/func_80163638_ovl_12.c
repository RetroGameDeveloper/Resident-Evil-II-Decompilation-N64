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

M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK);          /* extern */
M2C_UNK func_80166458_ovl_12(void *);               /* extern */
M2C_UNK func_80166900_ovl_12(void *, M2C_UNK, M2C_UNK); /* extern */

void func_80163638_ovl_12(void *arg0) {
    u8 temp_v0;

    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x03000300;
        M2C_FIELD(arg0, s8 *, 0x2BB) = 0x20;
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) & 0xFD);
    }
    if (func_80089D34_ovl_01(arg0, 0x400) != 0) {
        temp_v0 = (u8) M2C_FIELD(arg0, s32 *, 0x1E8);
        if (temp_v0 != 4) {
            M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (((temp_v0 + 1) << 0x18) + 0x300);
            if ((u8) M2C_FIELD(arg0, s32 *, 0x1E8) == 4) {
                func_80077D48_ovl_01(4, arg0);
            }
        } else {
            M2C_FIELD(arg0, s32 *, 4) = 0x01020000;
        }
    }
    func_80166458_ovl_12(arg0);
    func_80166900_ovl_12(arg0, 4, 6);
}
