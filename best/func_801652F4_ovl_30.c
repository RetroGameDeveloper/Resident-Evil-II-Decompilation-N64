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
M2C_UNK func_800334F8_ovl_01(M2C_UNK);              /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_801652F4_ovl_30(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_s3;

    temp_s3 = arg0 + 0x2B4;
    func_800334F8_ovl_01(0);
    if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0) {
        M2C_FIELD(arg0, s32 *, 4) = 0x01020000;
        M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) & 0x7F);
        M2C_FIELD(temp_s3, u8 *, 6) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(temp_s3, u8 *, 7) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(temp_s3, u8 *, 8) = (u8) M2C_FIELD(arg0, u8 *, 7);
    }
    func_80032B8C_ovl_01(arg0, 0);
}
