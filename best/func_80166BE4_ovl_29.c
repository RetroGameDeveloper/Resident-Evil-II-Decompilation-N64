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

u16 func_80166BE4_ovl_29(void *arg0) {
    u16 temp_v0;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_v1;

    if (M2C_FIELD(arg0, u16 *, 0x2B8) & 0x40) {
        return 0U;
    }
    temp_v1 = M2C_FIELD(arg0, void **, 0x234);
    temp_a2 = temp_v1 + 0x8D0;
    M2C_FIELD(temp_v1, s32 *, 0x8D0) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x8D0) | 0x80);
    M2C_FIELD(temp_a2, s32 *, 0x130) = 0x40;
    M2C_FIELD(temp_a2, s32 *, 0x134) = 0x30;
    temp_a2_2 = temp_v1 + 0xA48;
    M2C_FIELD(temp_v1, s32 *, 0xA48) = (s32) (M2C_FIELD(temp_v1, s32 *, 0xA48) | 0x80);
    M2C_FIELD(temp_a2_2, s32 *, 0x130) = 0x40;
    M2C_FIELD(temp_a2_2, s32 *, 0x134) = 0x30;
    temp_a2_3 = temp_v1 + 0xBC0;
    M2C_FIELD(temp_v1, s32 *, 0xBC0) = (s32) (M2C_FIELD(temp_v1, s32 *, 0xBC0) | 0x80);
    M2C_FIELD(temp_a2_3, s32 *, 0x130) = 0x40;
    M2C_FIELD(temp_a2_3, s32 *, 0x134) = 0x30;
    temp_v0 = M2C_FIELD(arg0, u16 *, 0x2B8) | 0x40;
    M2C_FIELD(arg0, u16 *, 0x2B8) = temp_v0;
    return temp_v0;
}
