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
M2C_UNK func_80089D34_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_801661C8_ovl_17(void *);               /* extern */
M2C_UNK func_80166FBC_ovl_17(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80167608_ovl_17(void *, M2C_UNK, s32); /* extern */

void func_8016606C_ovl_17(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x1F4) = 0x800;
    M2C_FIELD(arg0, s8 *, 6) = 1;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01090000;
    func_80089D34_ovl_01(0x400);
    M2C_FIELD(arg0, s8 *, 0x2BF) = 1;
    M2C_FIELD(arg0, s16 *, 0x2B6) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E0) = 0x1E0;
    M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
    if (M2C_FIELD(arg0, u8 *, 0x2CC) & 1) {
        M2C_FIELD(arg0, s16 *, 0x1F4) = 0;
        M2C_FIELD(arg0, s16 *, 0x1F6) = (s16) ((M2C_FIELD(arg0, u8 *, 0x2CC) << 0xA) - M2C_FIELD(arg0, u16 *, 0x66));
    } else {
        M2C_FIELD(arg0, s16 *, 0x1F6) = 0;
        M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) -(s16) M2C_FIELD(arg0, u16 *, 0x64);
    }
    func_801661C8_ovl_17(arg0);
    func_80166FBC_ovl_17(arg0, 0x13, 1);
    func_80167608_ovl_17(arg0, 0x2004, (func_80033634_ovl_01() & 3) + 6);
}
