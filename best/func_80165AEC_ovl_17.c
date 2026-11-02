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

M2C_UNK func_80089D34_ovl_01(M2C_UNK);              /* extern */

void func_80165AEC_ovl_17(void *arg0) {
    func_80089D34_ovl_01(0x400);
    if (*M2C_FIELD(arg0, s32 **, 0x214) & 0x80000) {
        M2C_FIELD(arg0, s32 *, 4) = 0x07000000;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & 0xE3FFFFFF);
        if (M2C_FIELD(arg0, u8 *, 0x2D5) == 0) {
            M2C_FIELD(arg0, s16 *, 0x1F2) = 1;
            M2C_FIELD(arg0, s8 *, 0x2C0) = 1;
        }
    }
}
