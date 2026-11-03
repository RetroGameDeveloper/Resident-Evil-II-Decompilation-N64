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

void func_8016F540_overlay_044(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x284) = 3;
    M2C_FIELD(arg0, s16 *, 0x130) = 0x2A0;
    M2C_FIELD(arg0, s16 *, 0x134) = -0xC8;
    M2C_FIELD(arg0, s16 *, 0x28A) = 0x1E4;
    M2C_FIELD(arg0, s16 *, 0x13A) = 0x258;
    M2C_FIELD(arg0, s16 *, 0x150) = -0x60;
    M2C_FIELD(arg0, s16 *, 0x154) = -0x180;
    M2C_FIELD(arg0, s16 *, 0x170) = 0x400;
    M2C_FIELD(arg0, s16 *, 0x174) = 0x70;
    M2C_FIELD(arg0, s16 *, 0x132) = 0;
    M2C_FIELD(arg0, s16 *, 0x12C) = 0x180;
    M2C_FIELD(arg0, s16 *, 0x136) = 0x180;
    M2C_FIELD(arg0, s16 *, 0x12E) = 0x180;
    M2C_FIELD(arg0, s16 *, 0x138) = 0x180;
    M2C_FIELD(arg0, s16 *, 0x152) = 0;
    M2C_FIELD(arg0, s16 *, 0x14C) = 0x180;
    M2C_FIELD(arg0, s16 *, 0x156) = 0x180;
    M2C_FIELD(arg0, s16 *, 0x15A) = 0x180;
    M2C_FIELD(arg0, s16 *, 0x14E) = 0x180;
    M2C_FIELD(arg0, s16 *, 0x158) = 0x180;
    M2C_FIELD(arg0, s16 *, 0x172) = 0;
    M2C_FIELD(arg0, s16 *, 0x16C) = 0x380;
    M2C_FIELD(arg0, s16 *, 0x176) = 0x380;
    M2C_FIELD(arg0, s16 *, 0x17A) = 0x180;
    M2C_FIELD(arg0, s16 *, 0x16E) = 0x380;
    M2C_FIELD(arg0, s16 *, 0x178) = 0x380;
}
