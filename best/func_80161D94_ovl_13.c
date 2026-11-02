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

void func_80161D94_ovl_13(void *arg0) {
    s32 temp_a1;
    s32 temp_lo;

    if (M2C_FIELD(arg0, u8 *, 4) != 7) {
        temp_a1 = M2C_FIELD(arg0, s16 *, 0x25E) - M2C_FIELD(arg0, s32 *, 0x2C);
        if ((temp_a1 - 0xFA) > 0) {
            temp_lo = 0x57E40 / (s32) ((s32) (temp_a1 + 0x60E) >> 1);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x208), s32 *, 4) = (s32) (temp_lo | (temp_lo << 0x10));
            return;
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x208), s32 *, 4) = 0x01900190;
    }
}
