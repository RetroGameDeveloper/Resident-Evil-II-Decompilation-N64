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

void func_800AC76C_ovl_01(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xC4) = 7;
    M2C_FIELD(arg0, s8 *, 0xD6) = 0xA;
    M2C_FIELD(arg0, s8 *, 0xE8) = 0x83;
    M2C_FIELD(arg0, s8 *, 0xFA) = 0x80;
    M2C_FIELD(arg0, s8 *, 0x130) = 0x40;
    M2C_FIELD(arg0, s8 *, 0x142) = 0x41;
    M2C_FIELD(arg0, s8 *, 0x154) = 0x5B;
    M2C_FIELD(arg0, s8 *, 0xC5) = 0;
    M2C_FIELD(arg0, s16 *, 0xC6) = 0x100;
    M2C_FIELD(arg0, s8 *, 0xD4) = 1;
    M2C_FIELD(arg0, s8 *, 0xD7) = 0;
    M2C_FIELD(arg0, s16 *, 0xD8) = 0x100;
    M2C_FIELD(arg0, s8 *, 0xE6) = 1;
    M2C_FIELD(arg0, s8 *, 0xE9) = 0;
    M2C_FIELD(arg0, s16 *, 0xEA) = 0x100;
    M2C_FIELD(arg0, s8 *, 0xF8) = 1;
    M2C_FIELD(arg0, s8 *, 0xFB) = 0;
    M2C_FIELD(arg0, s16 *, 0xFC) = 0x100;
    M2C_FIELD(arg0, s8 *, 0x10A) = 1;
    M2C_FIELD(arg0, s8 *, 0x11E) = 1;
    M2C_FIELD(arg0, s8 *, 0x11F) = 0;
    M2C_FIELD(arg0, s16 *, 0x120) = 0x100;
    M2C_FIELD(arg0, s8 *, 0x12E) = 1;
    M2C_FIELD(arg0, s8 *, 0x131) = 0;
    M2C_FIELD(arg0, s16 *, 0x132) = 0x100;
    M2C_FIELD(arg0, s8 *, 0x140) = 1;
    M2C_FIELD(arg0, s8 *, 0x143) = 0;
    M2C_FIELD(arg0, s16 *, 0x144) = 0x100;
    M2C_FIELD(arg0, s8 *, 0x152) = 1;
    M2C_FIELD(arg0, s8 *, 0x155) = 0;
    M2C_FIELD(arg0, s16 *, 0x156) = 0x100;
    M2C_FIELD(arg0, s8 *, 0x164) = 1;
    M2C_FIELD(arg0, s8 *, 0x10C) = 0x84;
    M2C_FIELD(arg0, s8 *, 0x10D) = 0;
    M2C_FIELD(arg0, s16 *, 0x10E) = 0x100;
    M2C_FIELD(arg0, s8 *, 0x11C) = 1;
}
