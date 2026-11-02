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

void func_80028540_ovl_01(void *arg0, s32 arg1, s32 arg2) {
    u32 temp_v1;

    if (arg1 == 0xFE) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x174), s32 *, 0xC) = arg2;
        return;
    }
    temp_v1 = arg1 - 0xE0;
    if (temp_v1 < 0x10U) {
        M2C_FIELD((M2C_FIELD(arg0, void **, 0x174) + (temp_v1 * 4)), s32 *, 0x10) = arg2;
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 0x3C;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x18) = arg1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0)();
}
