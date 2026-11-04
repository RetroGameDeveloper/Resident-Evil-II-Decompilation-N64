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

s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_8017404C_overlay_045(M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80174198_overlay_045(void *, M2C_UNK, s32); /* extern */

void func_80171744_overlay_045(void *arg0) {
    void *temp_v0;

    M2C_FIELD(arg0, s16 *, 0x1E2) = 0x28;
    M2C_FIELD(arg0, s16 *, 0x1F4) = 0x800;
    temp_v0 = arg0 + 0x2B4;
    M2C_FIELD(arg0, s8 *, 6) = 1;
    M2C_FIELD(arg0, s16 *, 0x1E0) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01000300;
    M2C_FIELD(temp_v0, s8 *, 0xB) = 1;
    M2C_FIELD(temp_v0, s16 *, 2) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & 0xE3FFFFFF);
    M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) | 0x80);
    func_8017404C_overlay_045(0x01000300, 0xE3FFFFFF);
    func_80174198_overlay_045(arg0, 0x2004, (func_80033634_ovl_01() & 1) + 1);
}
