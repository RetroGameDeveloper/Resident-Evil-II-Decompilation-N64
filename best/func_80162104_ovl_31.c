/* machine draft (m2c) for gcc-2.7.2-kmc -O2 -mips3 -G0 -mgp32 -mfp32 -mcpu=r4600, tried by autopilot */
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

M2C_UNK D_80066584(void *, void *);                 /* extern */
M2C_UNK func_80033A0C_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_800662B8_ovl_01(void *, void *);       /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK);      /* extern */
s32 func_8016B9A8_ovl_31(void *, s32);              /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_8010F670;
extern M2C_UNK D_801104D8_ovl_01;
extern M2C_UNK D_8016C32C_ovl_31;
extern s16 D_8016C640_ovl_31;
extern M2C_UNK func_801620D8_ovl_31;
extern M2C_UNK func_80169B4C_ovl_31;
extern M2C_UNK func_80169F04_ovl_31;

void func_80162104_ovl_31(void *arg0) {
    s32 var_s2;
    void *temp_a0;
    void *temp_a1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;
    void *var_s0;

    M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
    M2C_FIELD(arg0, s16 *, 0x26C) = 0;
    M2C_FIELD(arg0, s16 *, 0x268) = 0;
    M2C_FIELD(arg0, s16 *, 0x264) = 0;
    M2C_FIELD(arg0, s8 *, 0x26F) = 0;
    M2C_FIELD(arg0, s16 *, 0x1F2) = 0x3E8;
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x20) {
        M2C_FIELD(arg0, s16 *, 0x1F2) = 0x384;
    }
    M2C_FIELD(arg0, s8 *, 0x1ED) = -0x7E;
    M2C_FIELD(arg0, s8 *, 0x1EE) = -0x7E;
    M2C_FIELD(arg0, s8 *, 0x1EF) = -0x7E;
    M2C_FIELD(arg0, s8 *, 0x25D) = 0x1A;
    M2C_FIELD(arg0, s8 *, 0x25C) = 0;
    temp_s0 = M2C_FIELD(arg0, void **, 0x234) + 0x2630;
    M2C_FIELD(temp_s0, s16 *, 0x134) = 0x10;
    M2C_FIELD(temp_s0, s16 *, 0x136) = 0x20;
    M2C_FIELD(temp_s0, s16 *, 0x138) = 0xE4;
    M2C_FIELD(temp_s0, s16 *, 0x13A) = 0xD4;
    M2C_FIELD(temp_s0, s16 *, 0x130) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x132) = 0;
    M2C_FIELD(arg0, s32 *, 0x284) = 2;
    M2C_FIELD(arg0, s16 *, 0x130) = 0x190;
    M2C_FIELD(arg0, s8 *, 0x2B8) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B9) = 0;
    M2C_FIELD(arg0, s8 *, 0x2BA) = 0;
    M2C_FIELD(arg0, u16 *, 0x2B6) = 0U;
    M2C_FIELD(arg0, s8 *, 0x2C4) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C5) = 0;
    M2C_FIELD(arg0, s16 *, 0x2CC) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C2) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C3) = 0;
    M2C_FIELD(arg0, s8 *, 0x2CE) = 0;
    M2C_FIELD(arg0, s8 *, 0x2CF) = 0;
    M2C_FIELD(arg0, s16 *, 0x2D4) = 0;
    M2C_FIELD(arg0, s8 *, 0x2D6) = 0;
    M2C_FIELD(arg0, s8 *, 0x2D3) = 0;
    M2C_FIELD(arg0, s8 *, 0x2D8) = 0;
    M2C_FIELD(arg0, s16 *, 0x134) = -0x7D0;
    M2C_FIELD(arg0, s16 *, 0x132) = 0;
    M2C_FIELD(arg0, s16 *, 0x136) = 0x44C;
    M2C_FIELD(arg0, s16 *, 0x13A) = 0x7D0;
    M2C_FIELD(arg0, s16 *, 0x138) = 0x44C;
    M2C_FIELD(arg0, s16 *, 0x12C) = 0x44C;
    M2C_FIELD(arg0, s16 *, 0x12E) = 0x44C;
    M2C_FIELD(arg0, s16 *, 0x150) = 0;
    M2C_FIELD(arg0, s16 *, 0x154) = -0x7D0;
    M2C_FIELD(arg0, s16 *, 0x152) = 0;
    M2C_FIELD(arg0, s16 *, 0x156) = 0x3E8;
    M2C_FIELD(arg0, s16 *, 0x15A) = 0x7D0;
    M2C_FIELD(arg0, s16 *, 0x158) = 0x3E8;
    M2C_FIELD(arg0, s16 *, 0x14C) = 0x3E8;
    M2C_FIELD(arg0, s16 *, 0x14E) = 0x3E8;
    M2C_FIELD(&D_8016C32C_ovl_31, s8 *, 0) = 0;
    M2C_FIELD(&D_8016C32C_ovl_31, s8 *, 1) = 0;
    M2C_FIELD(&D_8016C32C_ovl_31, s8 *, 2) = 0;
    M2C_FIELD(&D_8016C32C_ovl_31, s8 *, 3) = 0;
    M2C_FIELD(&D_8016C32C_ovl_31, s16 *, 4) = 0;
    M2C_FIELD(&D_8016C32C_ovl_31, s16 *, 6) = 0;
    M2C_FIELD(&D_8016C32C_ovl_31, s16 *, 8) = 0;
    M2C_FIELD(&D_8016C32C_ovl_31, s16 *, 0xA) = 0;
    M2C_FIELD(&D_8016C32C_ovl_31, s8 *, 0x1C) = 0;
    M2C_FIELD(&D_8016C32C_ovl_31, s8 *, 0x1D) = 0;
    M2C_FIELD(&D_8016C32C_ovl_31, s8 *, 0x1E) = 0;
    M2C_FIELD(&D_8016C32C_ovl_31, s8 *, 0x1F) = 0;
    M2C_FIELD(&D_8016C32C_ovl_31, s16 *, 0x20) = 0;
    M2C_FIELD(&D_8016C32C_ovl_31, s16 *, 0x22) = 0;
    M2C_FIELD(&D_8016C32C_ovl_31, s16 *, 0x24) = 0;
    M2C_FIELD(&D_8016C32C_ovl_31, s16 *, 0x26) = 0;
    M2C_FIELD(&D_8016C32C_ovl_31, s8 *, 0x38) = 0;
    M2C_FIELD(&D_8016C32C_ovl_31, s8 *, 0x39) = 0;
    M2C_FIELD(&D_8016C32C_ovl_31, s8 *, 0x3A) = 0;
    M2C_FIELD(&D_8016C32C_ovl_31, s8 *, 0x3B) = 0;
    M2C_FIELD(&D_8016C32C_ovl_31, s16 *, 0x3C) = 0;
    M2C_FIELD(&D_8016C32C_ovl_31, s16 *, 0x3E) = 0;
    M2C_FIELD(&D_8016C32C_ovl_31, s16 *, 0x40) = 0;
    M2C_FIELD(&D_8016C32C_ovl_31, s16 *, 0x42) = 0;
    M2C_FIELD(arg0, s16 *, 0x28A) = 0x320;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x1C000000);
    func_80089D34_ovl_01(arg0, 0x100);
    func_80033A0C_ovl_01(arg0 + 0x208, 0, 0x070805DC, 0, M2C_FIELD(arg0, void **, 0x234) + 0x4C);
    M2C_FIELD((((M2C_FIELD(arg0, u8 *, 8) - 0x10) * 4) + &D_800C7650_ovl_01), M2C_UNK **, 0x18298) = &func_80169B4C_ovl_31;
    M2C_FIELD((((M2C_FIELD(arg0, u8 *, 8) - 0x10) * 4) + &D_800C7650_ovl_01), M2C_UNK **, 0x18398) = &func_80169F04_ovl_31;
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) | 4) & ~0x2000);
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18284) = func_8016B9A8_ovl_31(arg0, M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18284));
    M2C_FIELD(arg0, M2C_UNK **, 0x2A4) = &func_801620D8_ovl_31;
    M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19CD0) = arg0;
    var_s2 = 0x1B;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19CA4) = (s32) M2C_FIELD(arg0, s32 *, 0x224);
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19CA8) = (s32) M2C_FIELD(arg0, s32 *, 0x228);
    var_s0 = M2C_FIELD(arg0, void **, 0x234);
    do {
        temp_a1 = var_s0;
        temp_v0 = M2C_FIELD(var_s0, void **, 0x120);
        var_s0 += 0x178;
        var_s2 -= 1;
        M2C_FIELD(temp_v0, s16 *, 0xC) = 0x1000;
        func_800662B8_ovl_01(arg0, temp_a1);
    } while (var_s2 != 0);
    D_80066584(arg0, M2C_FIELD(arg0, void **, 0x234));
    temp_a0 = M2C_FIELD(arg0, void **, 0x234);
    M2C_FIELD(arg0, s8 *, 5) = 1;
    M2C_FIELD(temp_a0, s32 *, 0x2630) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x2630) & ~0x4000);
    M2C_FIELD(arg0, u16 *, 0x1AA) = 0U;
    temp_s0_2 = M2C_FIELD(arg0, void **, 0x234) + 0xEB0;
    M2C_FIELD(M2C_FIELD(temp_s0_2, void **, 0x120), s16 *, 0x10) = 0;
    M2C_FIELD(M2C_FIELD(temp_s0_2, void **, 0x120), s16 *, 0x14) = 0;
    D_8016C640_ovl_31 = 0x64;
    M2C_FIELD(M2C_FIELD(temp_s0_2, void **, 0x120), s16 *, 0x18) = 0;
    M2C_FIELD(M2C_FIELD(temp_s0_2, void **, 0x120), s16 *, 0x1C) = 0;
    func_800662B8_ovl_01(arg0, temp_s0_2);
    M2C_FIELD(arg0, s8 *, 5) = 0xD;
    M2C_FIELD(arg0, u16 *, 0x2B6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B6) | 0x1000);
    *(((M2C_FIELD(arg0, u8 *, 8) - 0x10) * 4) + &D_801104D8_ovl_01) = &D_8010F670;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x208), s8 *, 0xE) = 0;
    M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (M2C_FIELD(arg0, u16 *, 0x1AA) | 0x4000);
}
