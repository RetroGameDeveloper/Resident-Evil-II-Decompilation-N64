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

void func_800411E8_ovl_01(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0) = (s32) (((M2C_FIELD(arg0, s16 *, 0) * 0x10) & 0xFFFF0000) | (((s32) (M2C_FIELD(arg0, u16 *, 6) << 0x10) >> 0x1C) & 0xFFFF));
    M2C_FIELD(arg1, s32 *, 0x20) = (s32) (((M2C_FIELD(arg0, s16 *, 0) << 0x14) & 0xFFFF0000) | (((s16) M2C_FIELD(arg0, u16 *, 6) * 0x10) & 0xFFFF));
    M2C_FIELD(arg1, s32 *, 4) = (s32) ((M2C_FIELD(arg0, s16 *, 0xC) * 0x10) & 0xFFFF0000);
    M2C_FIELD(arg1, s32 *, 0x24) = (s32) ((M2C_FIELD(arg0, s16 *, 0xC) << 0x14) & 0xFFFF0000);
    M2C_FIELD(arg1, s32 *, 8) = (s32) (((M2C_FIELD(arg0, s16 *, 2) * 0x10) & 0xFFFF0000) | (((s32) (M2C_FIELD(arg0, u16 *, 8) << 0x10) >> 0x1C) & 0xFFFF));
    M2C_FIELD(arg1, s32 *, 0x28) = (s32) (((M2C_FIELD(arg0, s16 *, 2) << 0x14) & 0xFFFF0000) | (((s16) M2C_FIELD(arg0, u16 *, 8) * 0x10) & 0xFFFF));
    M2C_FIELD(arg1, s32 *, 0xC) = (s32) ((M2C_FIELD(arg0, s16 *, 0xE) * 0x10) & 0xFFFF0000);
    M2C_FIELD(arg1, s32 *, 0x2C) = (s32) ((M2C_FIELD(arg0, s16 *, 0xE) << 0x14) & 0xFFFF0000);
    M2C_FIELD(arg1, s32 *, 0x10) = (s32) (((M2C_FIELD(arg0, s16 *, 4) * 0x10) & 0xFFFF0000) | (((s32) (M2C_FIELD(arg0, u16 *, 0xA) << 0x10) >> 0x1C) & 0xFFFF));
    M2C_FIELD(arg1, s32 *, 0x30) = (s32) (((M2C_FIELD(arg0, s16 *, 4) << 0x14) & 0xFFFF0000) | (((s16) M2C_FIELD(arg0, u16 *, 0xA) * 0x10) & 0xFFFF));
    M2C_FIELD(arg1, s32 *, 0x14) = (s32) ((M2C_FIELD(arg0, s16 *, 0x10) * 0x10) & 0xFFFF0000);
    M2C_FIELD(arg1, s32 *, 0x34) = (s32) ((M2C_FIELD(arg0, s16 *, 0x10) << 0x14) & 0xFFFF0000);
    M2C_FIELD(arg1, s32 *, 0x18) = (s32) (((M2C_FIELD(arg0, s32 *, 0x14) << 0x10) & 0xFFFF0000) | M2C_FIELD(arg0, u16 *, 0x1A));
    M2C_FIELD(arg1, s32 *, 0x38) = 0;
    M2C_FIELD(arg1, s32 *, 0x1C) = (s32) (((M2C_FIELD(arg0, s32 *, 0x1C) << 0x10) & 0xFFFF0000) + 1);
    M2C_FIELD(arg1, s32 *, 0x3C) = 0;
}
