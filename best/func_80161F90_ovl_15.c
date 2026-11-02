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

M2C_UNK func_80033A0C_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK, void *); /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK);      /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;
extern u16 D_80165FA0_ovl_15;
extern u16 D_80165FA2_ovl_15;
extern M2C_UNK func_801645D0_ovl_15;

void func_80161F90_ovl_15(void *arg0) {
    s16 var_v0;
    s32 *var_a0;
    u32 var_a3;
    void *temp_v1;

    var_a0 = M2C_FIELD(arg0, s32 **, 0x234);
    M2C_FIELD(&D_800C7650_ovl_01, M2C_UNK **, 0x182E4) = &func_801645D0_ovl_15;
    M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
    M2C_FIELD(arg0, s16 *, 0x26C) = 0;
    M2C_FIELD(arg0, s16 *, 0x268) = 0;
    M2C_FIELD(arg0, s16 *, 0x264) = 0;
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x20) {
        var_v0 = D_80165FA0_ovl_15 + 0x61A8;
    } else {
        var_v0 = D_80165FA2_ovl_15 + 0x61A8;
    }
    M2C_FIELD(arg0, s16 *, 0x1F2) = var_v0;
    var_a3 = 0;
    M2C_FIELD(arg0, s8 *, 0x25D) = 5;
    M2C_FIELD(arg0, M2C_UNK **, 0x254) = &D_800E10D0_ovl_01;
    M2C_FIELD(arg0, s8 *, 0x25C) = 0;
    temp_v1 = M2C_FIELD(arg0, s32 **, 0x234) + 0x758;
    M2C_FIELD(temp_v1, s16 *, 0x134) = 0x14;
    M2C_FIELD(temp_v1, s16 *, 0x136) = 0x14;
    M2C_FIELD(temp_v1, s16 *, 0x138) = 0x230;
    M2C_FIELD(temp_v1, s16 *, 0x130) = 0;
    M2C_FIELD(temp_v1, s16 *, 0x132) = 0;
    M2C_FIELD(temp_v1, s16 *, 0x13A) = 0x138;
    do {
        var_a3 += 1;
        *var_a0 |= 0x9000;
        var_a0 += 0x178;
    } while (var_a3 < 0x16U);
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19CA4) = (s32) M2C_FIELD(arg0, s32 *, 0x224);
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19CA8) = (s32) M2C_FIELD(arg0, s32 *, 0x228);
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01000000;
    func_80089D34_ovl_01(arg0, 0x100);
    M2C_FIELD(arg0, s32 *, 0x284) = 3;
    M2C_FIELD(arg0, s16 *, 0x150) = 0x1C2;
    M2C_FIELD(arg0, s16 *, 0x14C) = 0x5AA;
    M2C_FIELD(arg0, s16 *, 0x156) = 0x5AA;
    M2C_FIELD(arg0, s16 *, 0x14E) = 0x5AA;
    M2C_FIELD(arg0, s16 *, 0x158) = 0x5AA;
    M2C_FIELD(arg0, s16 *, 0x2B4) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B6) = 0;
    M2C_FIELD(arg0, s16 *, 0x2BA) = 0;
    M2C_FIELD(arg0, s16 *, 0x2B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x2BC) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C0) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C1) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C2) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C3) = 0;
    M2C_FIELD(arg0, s16 *, 0x2C4) = 0;
    M2C_FIELD(arg0, s16 *, 0x2C6) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C8) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C9) = 0;
    M2C_FIELD(arg0, s8 *, 0x2CA) = 0;
    M2C_FIELD(arg0, s8 *, 0x2CB) = 0;
    M2C_FIELD(arg0, s8 *, 0x2CC) = 0;
    M2C_FIELD(arg0, s8 *, 0x2CD) = 0;
    M2C_FIELD(arg0, s32 *, 0x2D0) = 0;
    M2C_FIELD(arg0, s8 *, 0x2CF) = 0;
    M2C_FIELD(arg0, s8 *, 0x2D4) = 0;
    M2C_FIELD(arg0, s16 *, 0x270) = 0;
    M2C_FIELD(arg0, s16 *, 0x154) = 0;
    M2C_FIELD(arg0, s16 *, 0x152) = 0;
    M2C_FIELD(arg0, s16 *, 0x15A) = 0x7D0;
    M2C_FIELD(arg0, s16 *, 0x190) = -0x898;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x4C);
    M2C_FIELD(arg0, s16 *, 0x194) = 0;
    M2C_FIELD(arg0, s16 *, 0x18C) = 0xAF0;
    M2C_FIELD(arg0, s16 *, 0x196) = 0xAF0;
    M2C_FIELD(arg0, s16 *, 0x18E) = 0xAF0;
    M2C_FIELD(arg0, s16 *, 0x198) = 0xAF0;
    M2C_FIELD(arg0, s16 *, 0x170) = 0x76C;
    M2C_FIELD(arg0, s16 *, 0x16C) = 0x3B6;
    M2C_FIELD(arg0, s16 *, 0x176) = 0x3B6;
    M2C_FIELD(arg0, s16 *, 0x16E) = 0x3B6;
    M2C_FIELD(arg0, s16 *, 0x178) = 0x3B6;
    M2C_FIELD(arg0, s16 *, 0x130) = 0xBB8;
    M2C_FIELD(arg0, s16 *, 0x12C) = 0x258;
    M2C_FIELD(arg0, s16 *, 0x136) = 0x258;
    M2C_FIELD(arg0, s16 *, 0x12E) = 0x258;
    M2C_FIELD(arg0, s16 *, 0x138) = 0x258;
    M2C_FIELD(arg0, s16 *, 0x28A) = 0x44C;
    M2C_FIELD(arg0, s16 *, 0x192) = 0;
    M2C_FIELD(arg0, s16 *, 0x19A) = 0x7D0;
    M2C_FIELD(arg0, s16 *, 0x174) = 0;
    M2C_FIELD(arg0, s16 *, 0x172) = 0;
    M2C_FIELD(arg0, s16 *, 0x17A) = 0x7D0;
    M2C_FIELD(arg0, s16 *, 0x134) = 0;
    M2C_FIELD(arg0, s16 *, 0x132) = 0;
    M2C_FIELD(arg0, s16 *, 0x13A) = 0x7D0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x1C000000);
    func_80033A0C_ovl_01(arg0 + 0x208, 0, 0, 0, arg0 + 0x28);
}
