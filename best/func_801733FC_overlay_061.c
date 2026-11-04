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

s32 func_8004D3D0_ovl_01(M2C_UNK *);                /* extern */
extern M2C_UNK D_800C7650;
extern M2C_UNK D_800E10D0;

void func_801733FC_overlay_061(void *arg0) {
    s16 sp10;
    u16 sp12;
    u16 sp14;
    s16 temp_a1_4;
    s32 temp_v1;
    u16 temp_v0;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_s0;

    temp_s0 = M2C_FIELD((((M2C_FIELD(arg0, u8 *, 0x2B4) - 1) * 4) + &D_800C7650), void **, 0x19D38);
    temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x234);
    temp_a1 = temp_v1 + 0x468;
    M2C_FIELD(arg0, s32 *, 0x120) = (s32) M2C_FIELD(temp_a1, s32 *, 0x4C);
    M2C_FIELD(arg0, s32 *, 0x124) = (s32) M2C_FIELD(temp_a1, s32 *, 0x50);
    temp_a1_2 = temp_v1 + 0x2F0;
    M2C_FIELD(arg0, s32 *, 0x128) = (s32) M2C_FIELD(temp_a1, s32 *, 0x54);
    M2C_FIELD(arg0, s32 *, 0x140) = (s32) M2C_FIELD(temp_a1_2, s32 *, 0x4C);
    M2C_FIELD(arg0, s32 *, 0x144) = (s32) M2C_FIELD(temp_a1_2, s32 *, 0x50);
    temp_a1_3 = temp_v1 + 0x178;
    M2C_FIELD(arg0, s32 *, 0x148) = (s32) M2C_FIELD(temp_a1_2, s32 *, 0x54);
    M2C_FIELD(arg0, s32 *, 0x160) = (s32) M2C_FIELD(temp_a1_3, s32 *, 0x4C);
    M2C_FIELD(arg0, s32 *, 0x164) = (s32) M2C_FIELD(temp_a1_3, s32 *, 0x50);
    temp_a1_4 = M2C_FIELD(arg0, u16 *, 0x142) - M2C_FIELD(arg0, u16 *, 0x162);
    M2C_FIELD(arg0, s32 *, 0x168) = (s32) M2C_FIELD(temp_a1_3, s32 *, 0x54);
    sp10 = temp_a1_4;
    temp_v0 = M2C_FIELD(arg0, u16 *, 0x146) - M2C_FIELD(arg0, u16 *, 0x166);
    sp12 = temp_v0;
    sp14 = M2C_FIELD(arg0, u16 *, 0x14A) - M2C_FIELD(arg0, u16 *, 0x16A);
    M2C_FIELD(arg0, s32 *, 0x180) = (s32) (M2C_FIELD(arg0, s32 *, 0x160) + ((s32) (temp_a1_4 << 0x10) >> 0x11));
    M2C_FIELD(arg0, s32 *, 0x184) = (s32) (M2C_FIELD(arg0, s32 *, 0x164) + ((s32) (temp_v0 << 0x10) >> 0x11));
    M2C_FIELD(arg0, s8 *, 0xD) = 0xFF;
    M2C_FIELD(arg0, s32 *, 0x188) = (s32) (M2C_FIELD(arg0, s32 *, 0x168) + ((s32) (sp14 << 0x10) >> 0x11));
    M2C_FIELD(temp_s0, u16 *, 0x2BC) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x2BC) & 0xFFF9);
    M2C_FIELD(temp_s0, u16 *, 0x2BC) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x2BC) | (func_8004D3D0_ovl_01(&D_800E10D0) * 6));
}
