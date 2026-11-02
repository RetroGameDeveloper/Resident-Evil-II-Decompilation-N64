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

u8 func_80031000_ovl_01(void *arg0) {
    u8 *temp_v1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x14);
    if (M2C_FIELD(temp_s0, s32 *, 4) == 0) {
        if (M2C_FIELD(temp_s0, s32 (**)(), 0xC)() == 0) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 0x11;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *), 0)(arg0);
        }
    }
    temp_v1 = M2C_FIELD(temp_s0, u8 **, 0);
    M2C_FIELD(temp_s0, s32 *, 4) = (s32) (M2C_FIELD(temp_s0, s32 *, 4) - 1);
    M2C_FIELD(temp_s0, u8 **, 0) = (u8 *) (temp_v1 + 1);
    return *temp_v1;
}
