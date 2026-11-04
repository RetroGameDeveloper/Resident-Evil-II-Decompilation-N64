/* Partial candidate from function #263959 in project #68; rechecked locally. */
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

extern s32 D_80186C14_overlay_002;

void func_8017ED64_ovl_02(s32 arg0) {
    void *temp_v0;

    temp_v0 = D_80186C14_overlay_002 + ((arg0 << 7) + 0x438);
    M2C_FIELD(temp_v0, s32 *, 0) = 0;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    M2C_FIELD(temp_v0, s32 *, 8) = 0;
    M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x10) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x14) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x18) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x20) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x24) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x28) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x2C) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x30) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x34) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x38) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x3C) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x40) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x44) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x48) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x4C) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x50) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x54) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x58) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x5C) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x60) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x64) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x68) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x6C) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x70) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x74) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x78) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x7C) = 0;
}
