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

s32 func_8004D3D0_ovl_01();
extern char D_800E10D0[];

void func_801732B4_overlay_061(void *arg0) {
    u16 sp10;
    u16 sp12;
    u16 sp14;
    u16 temp_a0_2;
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_a0;
    void *temp_v1;

    temp_a0 = M2C_FIELD(arg0, void **, 0x234);
    temp_v1 = temp_a0 + 0x178;
    M2C_FIELD(arg0, s32 *, 0x120) = (s32) M2C_FIELD(temp_v1, s32 *, 0x4C);
    M2C_FIELD(arg0, s32 *, 0x124) = (s32) M2C_FIELD(temp_v1, s32 *, 0x50);
    M2C_FIELD(arg0, s32 *, 0x128) = (s32) M2C_FIELD(temp_v1, s32 *, 0x54);
    M2C_FIELD(arg0, s32 *, 0x140) = (s32) M2C_FIELD(temp_a0, s32 *, 0x4C);
    M2C_FIELD(arg0, s32 *, 0x144) = (s32) M2C_FIELD(temp_a0, s32 *, 0x50);
    temp_a0_2 = M2C_FIELD(arg0, u16 *, 0x142) - M2C_FIELD(arg0, u16 *, 0x122);
    M2C_FIELD(arg0, s32 *, 0x148) = (s32) M2C_FIELD(temp_a0, s32 *, 0x54);
    sp10 = temp_a0_2;
    temp_v0 = M2C_FIELD(arg0, u16 *, 0x146) - M2C_FIELD(arg0, u16 *, 0x126);
    sp12 = temp_v0;
    temp_v0_2 = M2C_FIELD(arg0, u16 *, 0x14A) - M2C_FIELD(arg0, u16 *, 0x12A);
    sp14 = temp_v0_2;
    M2C_FIELD(arg0, s32 *, 0x160) = (s32) (M2C_FIELD(arg0, s32 *, 0x120) + ((s32) (temp_a0_2 << 0x10) >> 0x12));
    M2C_FIELD(arg0, s32 *, 0x164) = (s32) (M2C_FIELD(arg0, s32 *, 0x124) + ((s32) (temp_v0 << 0x10) >> 0x12));
    M2C_FIELD(arg0, s32 *, 0x168) = (s32) (M2C_FIELD(arg0, s32 *, 0x128) + ((s32) (temp_v0_2 << 0x10) >> 0x12));
    M2C_FIELD(arg0, s32 *, 0x180) = (s32) (M2C_FIELD(arg0, s32 *, 0x120) + ((s32) (sp10 << 0x10) >> 0x11));
    M2C_FIELD(arg0, s32 *, 0x184) = (s32) (M2C_FIELD(arg0, s32 *, 0x124) + ((s32) (temp_v0 << 0x10) >> 0x11));
    M2C_FIELD(arg0, u8 *, 0xD) = 0xFF;
    M2C_FIELD(arg0, s32 *, 0x188) = (s32) (M2C_FIELD(arg0, s32 *, 0x128) + ((s32) (sp14 << 0x10) >> 0x11));
    M2C_FIELD(arg0, u16 *, 0x2BC) &= 0xFFF9;
    M2C_FIELD(arg0, u16 *, 0x2BC) |= (func_8004D3D0_ovl_01(&D_800E10D0, arg0) * 2);
}
