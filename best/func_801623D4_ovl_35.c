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

M2C_UNK func_801624E4_ovl_35(void *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_80166644_ovl_35;

void func_801623D4_ovl_35(void *arg0) {
    s32 temp_s1;
    u16 temp_v0;
    u8 temp_s2;

    temp_s2 = M2C_FIELD(arg0, u8 *, 0x2BE);
    temp_s1 = temp_s2 * 4;
    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        M2C_FIELD(arg0, u16 *, 0x1E2) = -0x14U;
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, u16 *, 0x1E0) = 0U;
        M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01000700;
        M2C_FIELD(arg0, s16 *, 0x64) = 0;
        M2C_FIELD(arg0, s8 *, 0x2BC) = 1;
        M2C_FIELD(arg0, s8 *, 0x207) = 0;
        M2C_FIELD(arg0, u16 *, 0x2DC) = (u16) M2C_FIELD(arg0, u16 *, 0x32);
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) *(((temp_s1 + 2) * 2) + &D_80166644_ovl_35);
        M2C_FIELD(arg0, u16 *, 0x2DA) = (u16) M2C_FIELD(arg0, u16 *, 0x2A);
        func_801624E4_ovl_35(arg0, 1, 0x01000700);
    }
    temp_v0 = M2C_FIELD(arg0, u16 *, 0x1E2) - 0x14;
    M2C_FIELD(arg0, u16 *, 0x1E2) = temp_v0;
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) - 0x36 + ((s32) (temp_v0 << 0x10) >> 0x14));
    if ((s16) M2C_FIELD(arg0, u16 *, 0x1E2) < *(((temp_s1 + 1) * 2) + &D_80166644_ovl_35)) {
        M2C_FIELD(arg0, s16 *, 6) = 0x100;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x04000700;
        M2C_FIELD(arg0, u16 *, 0x1E0) = (u16) *((temp_s2 * 8) + &D_80166644_ovl_35);
    }
}
