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

M2C_UNK func_80033A0C_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_800662B8_ovl_01(void *, void *, void *); /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK);      /* extern */
s32 func_801654E8_ovl_32(void *, s32);              /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_80166ED4_ovl_32;
extern M2C_UNK func_80161F40_ovl_32;
extern M2C_UNK func_801652CC_ovl_32;
extern M2C_UNK func_80165310_ovl_32;

void func_80161F5C_ovl_32(void *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_a2;
    void *temp_a2_2;
    
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t0_3;
    void *temp_t0_4;
    void *temp_t0_5;
    void *temp_t0_6;
    void *temp_t0_7;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;

    M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
    M2C_FIELD(arg0, s16 *, 0x1F2) = 0x258;
    M2C_FIELD(arg0, s16 *, 0x26C) = 0;
    M2C_FIELD(arg0, s16 *, 0x268) = 0;
    M2C_FIELD(arg0, s16 *, 0x264) = 0;
    M2C_FIELD(arg0, s8 *, 0x26F) = 0;
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x20) {
        M2C_FIELD(arg0, s16 *, 0x1F2) = 0x190;
    }
    M2C_FIELD(arg0, s8 *, 0x1ED) = -0x7E;
    M2C_FIELD(arg0, s8 *, 0x1EE) = -0x7E;
    M2C_FIELD(arg0, s8 *, 0x1EF) = -0x7E;
    M2C_FIELD(arg0, s8 *, 0x25C) = 1;
    M2C_FIELD(arg0, s8 *, 0x25D) = 1;
    M2C_FIELD(arg0, s16 *, 0x66) = 0;
    temp_t0 = M2C_FIELD(arg0, void **, 0x234) + 0x178;
    M2C_FIELD(temp_t0, s16 *, 0x134) = 8;
    M2C_FIELD(temp_t0, s16 *, 0x136) = 8;
    M2C_FIELD(temp_t0, s16 *, 0x138) = 0xD4;
    M2C_FIELD(temp_t0, s16 *, 0x13A) = 0xD4;
    M2C_FIELD(temp_t0, s16 *, 0x130) = 0;
    M2C_FIELD(temp_t0, s16 *, 0x132) = 0;
    M2C_FIELD(arg0, s32 *, 0x28C) = 0x7530;
    M2C_FIELD(arg0, s8 *, 0x2B4) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B5) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B6) = 0;
    M2C_FIELD(arg0, s16 *, 0x2B8) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B7) = 0;
    M2C_FIELD(arg0, s8 *, 0x2BF) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C0) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C1) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C4) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C5) = 0;
    M2C_FIELD(&D_80166ED4_ovl_32, s8 *, 0) = 0;
    M2C_FIELD(&D_80166ED4_ovl_32, s8 *, 1) = 0;
    M2C_FIELD(&D_80166ED4_ovl_32, s8 *, 2) = 0;
    M2C_FIELD(&D_80166ED4_ovl_32, s8 *, 3) = 0;
    M2C_FIELD(&D_80166ED4_ovl_32, s16 *, 4) = 0;
    M2C_FIELD(&D_80166ED4_ovl_32, s16 *, 6) = 0;
    M2C_FIELD(&D_80166ED4_ovl_32, s16 *, 8) = 0;
    M2C_FIELD(&D_80166ED4_ovl_32, s16 *, 0xA) = 0;
    M2C_FIELD(&D_80166ED4_ovl_32, s8 *, 0x1C) = 0;
    M2C_FIELD(&D_80166ED4_ovl_32, s8 *, 0x1D) = 0;
    M2C_FIELD(&D_80166ED4_ovl_32, s8 *, 0x1E) = 0;
    M2C_FIELD(&D_80166ED4_ovl_32, s8 *, 0x1F) = 0;
    M2C_FIELD(&D_80166ED4_ovl_32, s16 *, 0x20) = 0;
    M2C_FIELD(&D_80166ED4_ovl_32, s16 *, 0x22) = 0;
    M2C_FIELD(&D_80166ED4_ovl_32, s16 *, 0x24) = 0;
    M2C_FIELD(&D_80166ED4_ovl_32, s16 *, 0x26) = 0;
    M2C_FIELD(arg0, s16 *, 0x130) = -0x7D0;
    M2C_FIELD(arg0, s16 *, 0x134) = -0x5DC;
    M2C_FIELD(arg0, s16 *, 0x154) = -0x5DC;
    M2C_FIELD(arg0, s16 *, 0x136) = 0x1770;
    M2C_FIELD(arg0, s16 *, 0x138) = 0x1770;
    M2C_FIELD(arg0, s16 *, 0x12C) = 0x1770;
    M2C_FIELD(arg0, s16 *, 0x12E) = 0x1770;
    M2C_FIELD(arg0, s16 *, 0x150) = 0x898;
    M2C_FIELD(arg0, s16 *, 0x156) = 0x514;
    M2C_FIELD(arg0, s16 *, 0x158) = 0x514;
    M2C_FIELD(arg0, s16 *, 0x14C) = 0x514;
    M2C_FIELD(arg0, s16 *, 0x14E) = 0x514;
    M2C_FIELD(arg0, s32 *, 0x284) = 2;
    M2C_FIELD(arg0, s16 *, 0x132) = 0;
    M2C_FIELD(arg0, s16 *, 0x13A) = 0x5DC;
    M2C_FIELD(arg0, s16 *, 0x152) = 0;
    M2C_FIELD(arg0, s16 *, 0x15A) = 0x5DC;
    M2C_FIELD(arg0, s16 *, 0x28A) = 0x1644;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
    temp_v1 = M2C_FIELD(arg0, s32 *, 0) | 8;
    M2C_FIELD(arg0, s32 *, 0) = temp_v1;
    temp_v1_2 = temp_v1 | 2;
    M2C_FIELD(arg0, s32 *, 0) = temp_v1_2;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_v1_2 | 0x0C000000);
    func_80089D34_ovl_01(arg0, 0x100);
    M2C_FIELD((((M2C_FIELD(arg0, u8 *, 8) - 0x10) * 4) + &D_800C7650_ovl_01), M2C_UNK **, 0x18298) = &func_801652CC_ovl_32;
    M2C_FIELD((((M2C_FIELD(arg0, u8 *, 8) - 0x10) * 4) + &D_800C7650_ovl_01), M2C_UNK **, 0x18398) = &func_80165310_ovl_32;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 4);
    func_80033A0C_ovl_01(arg0 + 0x208, 0, 0x0FA00FA0, 0, M2C_FIELD(arg0, void **, 0x234) + 0x4C);
    temp_v1_3 = M2C_FIELD(arg0, void **, 0x234);
    M2C_FIELD(temp_v1_3, s32 *, 0) = (s32) (M2C_FIELD(temp_v1_3, s32 *, 0) | 0x4000);
    if (M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19D44), s32 *, 0x2C) == 0) {
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18284) = func_801654E8_ovl_32(arg0, M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18284));
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x2A4) = &func_80161F40_ovl_32;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0xCC) = 0x808080FF;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x244) = 0x808080FF;
    temp_v0 = M2C_FIELD(arg0, void **, 0x234);
    temp_t0_2 = temp_v0 + 0x2F0;
    M2C_FIELD(temp_t0_2, s32 *, 0xCC) = 0x808080FF;
    temp_a2 = M2C_FIELD(arg0, void **, 0x234);
    M2C_FIELD(temp_v0, s32 *, 0x2F0) = 1;
    M2C_FIELD(temp_t0_2, s32 *, 0x1C) = 0x708;
    M2C_FIELD(temp_t0_2, s32 *, 0x20) = 0x1194;
    M2C_FIELD(temp_t0_2, s32 *, 0x24) = 0;
    M2C_FIELD(temp_t0_2, void **, 0x64) = (void *) (temp_a2 + 0x38);
    M2C_FIELD(temp_t0_2, void **, 0x12C) = temp_a2;
    temp_v0_2 = M2C_FIELD(arg0, void **, 0x234);
    temp_t0_3 = temp_v0_2 + 0x468;
    M2C_FIELD(temp_t0_3, s32 *, 0xCC) = 0x808080FF;
    temp_a2_2 = M2C_FIELD(arg0, void **, 0x234);
    M2C_FIELD(temp_v0_2, s32 *, 0x468) = 1;
    M2C_FIELD(temp_t0_3, s32 *, 0x1C) = 0x320;
    M2C_FIELD(temp_t0_3, s32 *, 0x20) = 0x1F4;
    M2C_FIELD(temp_t0_3, s32 *, 0x24) = 0;
    M2C_FIELD(temp_t0_3, void **, 0x64) = (void *) (temp_a2_2 + 0x38);
    M2C_FIELD(temp_t0_3, void **, 0x12C) = temp_a2_2;
    temp_v0_3 = M2C_FIELD(arg0, void **, 0x234);
    temp_t0_4 = temp_v0_3 + 0x5E0;
    M2C_FIELD(temp_t0_4, s32 *, 0xCC) = 0x808080FF;
    temp_v1_4 = M2C_FIELD(arg0, void **, 0x234);
    M2C_FIELD(temp_v0_3, s32 *, 0x5E0) = 1;
    M2C_FIELD(temp_t0_4, s32 *, 0x1C) = 0x6A2;
    M2C_FIELD(temp_t0_4, s32 *, 0x20) = -0x576;
    M2C_FIELD(temp_t0_4, s32 *, 0x24) = 0;
    temp_a2 = temp_v1_4 + 0x2F0;
    temp_v1_5 = temp_v1_4 + 0x328;
    M2C_FIELD(temp_t0_4, void **, 0x64) = temp_v1_5;
    M2C_FIELD(temp_t0_4, void **, 0x12C) = temp_a2;
    temp_v0_4 = M2C_FIELD(arg0, void **, 0x234);
    temp_t0_5 = temp_v0_4 + 0x758;
    M2C_FIELD(temp_t0_5, s32 *, 0xCC) = 0x808080FF;
    M2C_FIELD(temp_v0_4, s32 *, 0x758) = 1;
    M2C_FIELD(temp_t0_5, s32 *, 0x1C) = 0x598;
    M2C_FIELD(temp_t0_5, s32 *, 0x20) = -0xA83;
    M2C_FIELD(temp_t0_5, void **, 0x64) = temp_v1_5;
    M2C_FIELD(temp_t0_5, void **, 0x12C) = temp_a2;
    M2C_FIELD(temp_t0_5, s32 *, 0x24) = 0x3FF;
    temp_v0_5 = M2C_FIELD(arg0, void **, 0x234);
    temp_t0_6 = temp_v0_5 + 0x8D0;
    M2C_FIELD(temp_t0_6, s32 *, 0xCC) = 0x808080FF;
    M2C_FIELD(temp_v0_5, s32 *, 0x8D0) = 1;
    M2C_FIELD(temp_t0_6, s32 *, 0x1C) = 0x596;
    M2C_FIELD(temp_t0_6, s32 *, 0x20) = -0x8EC;
    M2C_FIELD(temp_t0_6, void **, 0x64) = temp_v1_5;
    M2C_FIELD(temp_t0_6, void **, 0x12C) = temp_a2;
    M2C_FIELD(temp_t0_6, s32 *, 0x24) = -0x81E;
    temp_t0_7 = M2C_FIELD(arg0, void **, 0x234) + 0x2F0;
    M2C_FIELD(M2C_FIELD(temp_t0_7, void **, 0x120), s16 *, 0xC) = 0;
    M2C_FIELD(M2C_FIELD(temp_t0_7, void **, 0x120), s16 *, 0x10) = 0;
    func_800662B8_ovl_01(arg0, temp_t0_7, temp_a2);
    M2C_FIELD(arg0, s8 *, 5) = 2;
}
