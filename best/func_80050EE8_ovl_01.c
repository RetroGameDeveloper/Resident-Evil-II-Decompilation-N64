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

void func_80050EE8_ovl_01(void *arg0) {
    u16 var_a0;
    u16 var_a1;
    u16 var_v1;

    if (M2C_FIELD(arg0, u16 *, 0x66) & 0x400) {
        var_v1 = M2C_FIELD(arg0, u16 *, 0x130);
        var_a0 = M2C_FIELD(arg0, u16 *, 0x138);
        var_a1 = M2C_FIELD(arg0, u16 *, 0x136);
        M2C_FIELD(arg0, u16 *, 0x13C) = (u16) M2C_FIELD(arg0, u16 *, 0x132);
    } else {
        var_v1 = M2C_FIELD(arg0, u16 *, 0x132);
        var_a0 = M2C_FIELD(arg0, u16 *, 0x136);
        var_a1 = M2C_FIELD(arg0, u16 *, 0x138);
        M2C_FIELD(arg0, u16 *, 0x13C) = (u16) M2C_FIELD(arg0, u16 *, 0x130);
    }
    M2C_FIELD(arg0, u16 *, 0x13E) = var_v1;
    M2C_FIELD(arg0, u16 *, 0x12C) = var_a0;
    M2C_FIELD(arg0, u16 *, 0x12E) = var_a1;
    M2C_FIELD(arg0, s32 *, 0x120) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + (s16) M2C_FIELD(arg0, u16 *, 0x13C));
    M2C_FIELD(arg0, s32 *, 0x124) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + M2C_FIELD(arg0, s16 *, 0x134));
    M2C_FIELD(arg0, s32 *, 0x128) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + (s16) M2C_FIELD(arg0, u16 *, 0x13E));
}
