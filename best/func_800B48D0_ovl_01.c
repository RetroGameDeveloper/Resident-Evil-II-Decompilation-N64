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

M2C_UNK func_80006650(M2C_UNK);                     /* extern */
M2C_UNK func_80006D30(s32, s32, M2C_UNK);           /* extern */

void func_800B48D0_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_80006650(0x190);
    M2C_FIELD(arg0, s16 *, 0x166) = 0x28;
    M2C_FIELD(arg0, s32 *, 0x194) = arg1;
    M2C_FIELD(arg0, s32 *, 0x198) = arg2;
    M2C_FIELD(arg0, s32 *, 0x19C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x11A8) = 0;
    M2C_FIELD(arg0, s32 *, 0x190) = arg4;
    func_80006D30(arg0 + 0x11AC, arg0 + 0x11C4, 1);
    if (((arg1 == 0) | (arg4 == 0)) != 0) {
        M2C_FIELD(arg0, s8 *, 0x11DD) = 0;
    } else {
        M2C_FIELD(arg0, s8 *, 0x11DD) = 1;
    }
    M2C_FIELD(arg0, s8 *, 0x11DC) = 0;
    M2C_FIELD(arg0, s16 *, 0x11A2) = 0;
    M2C_FIELD(arg0, s32 *, 0x11A4) = 0;
    M2C_FIELD(arg0, s16 *, 0x11A0) = 0;
    M2C_FIELD(arg0, s32 *, 0x11C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x11D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x11CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x11D8) = 0;
    M2C_FIELD(arg0, s32 *, 0x11D4) = 0;
    M2C_FIELD(arg0, s8 *, 0x11DE) = 2;
}
