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

s32 func_80033634_ovl_01(M2C_UNK, M2C_UNK);         /* extern */
M2C_UNK func_80033A0C_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_800662B8_ovl_01(void *, void *);       /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern s8 D_80169760_ovl_29;
extern s8 D_80169761_ovl_29;
extern s16 D_80169762_ovl_29;
extern s16 D_80169764_ovl_29;
extern s16 D_80169766_ovl_29;
extern s16 D_80169768_ovl_29;
extern s8 D_8016976A_ovl_29;
extern s8 D_8016976B_ovl_29;
extern M2C_UNK func_80168920_ovl_29;
extern M2C_UNK func_80168A30_ovl_29;

void func_80162038_ovl_29(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 *temp_v1;
    s32 *temp_v1_10;
    s32 *temp_v1_2;
    s32 *temp_v1_3;
    s32 *temp_v1_4;
    s32 *temp_v1_5;
    s32 *temp_v1_6;
    s32 *temp_v1_7;
    s32 *temp_v1_8;
    s32 *temp_v1_9;
    s32 *var_t0;
    s32 *var_t0_2;
    s32 *var_t0_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t0_3;
    void *temp_t0_4;
    void *temp_t0_5;
    void *temp_t0_6;
    void *temp_t0_7;
    void *temp_t0_8;
    void *temp_t0_9;

    M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
    M2C_FIELD(arg0, s16 *, 0x1F2) = 0x2BC;
    M2C_FIELD(arg0, s16 *, 0x26C) = 0;
    M2C_FIELD(arg0, s16 *, 0x268) = 0;
    M2C_FIELD(arg0, s16 *, 0x264) = 0;
    M2C_FIELD(arg0, s8 *, 0x26F) = 0;
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x20) {
        M2C_FIELD(arg0, s16 *, 0x1F2) = 0x258;
    }
    M2C_FIELD(arg0, s8 *, 0x25D) = 3;
    M2C_FIELD(arg0, s8 *, 0x1ED) = 0;
    M2C_FIELD(arg0, s8 *, 0x1EE) = 0;
    M2C_FIELD(arg0, s8 *, 0x1EF) = 0;
    M2C_FIELD(arg0, s8 *, 0x25C) = 0;
    temp_t0 = M2C_FIELD(arg0, s32 **, 0x234) + 0x468;
    M2C_FIELD(temp_t0, s16 *, 0x134) = 0x20;
    M2C_FIELD(temp_t0, s16 *, 0x136) = 0x20;
    M2C_FIELD(temp_t0, s16 *, 0x138) = 0x264;
    M2C_FIELD(temp_t0, s16 *, 0x13A) = 0x138;
    M2C_FIELD(temp_t0, s16 *, 0x130) = 0;
    M2C_FIELD(temp_t0, s16 *, 0x132) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B7) = 5;
    M2C_FIELD(arg0, s16 *, 0x2C0) = 0x7D0;
    M2C_FIELD(arg0, s8 *, 0x2B4) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B5) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B6) = 0;
    M2C_FIELD(arg0, s8 *, 0x2BA) = 0;
    M2C_FIELD(arg0, s8 *, 0x2BC) = 0;
    M2C_FIELD(arg0, s8 *, 0x2BD) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C2) = 0;
    M2C_FIELD(arg0, u8 *, 0x2C3) = 0U;
    M2C_FIELD(arg0, s8 *, 0x2C4) = 0;
    D_80169760_ovl_29 = 0;
    D_80169761_ovl_29 = 0;
    D_80169762_ovl_29 = 0;
    D_80169764_ovl_29 = 0;
    D_80169766_ovl_29 = 0;
    D_80169768_ovl_29 = 0;
    D_8016976A_ovl_29 = 0;
    D_8016976B_ovl_29 = 0;
    M2C_FIELD(arg0, s32 *, 0x284) = 1;
    M2C_FIELD(arg0, s16 *, 0x2B8) = 0;
    M2C_FIELD(arg0, s16 *, 0x130) = 0;
    M2C_FIELD(arg0, s16 *, 0x134) = -0x5DC;
    M2C_FIELD(arg0, s16 *, 0x13A) = 0x5DC;
    M2C_FIELD(arg0, s16 *, 0x28A) = 0x320;
    M2C_FIELD(arg0, s16 *, 0x136) = 0x384;
    M2C_FIELD(arg0, s16 *, 0x138) = 0x384;
    M2C_FIELD(arg0, s16 *, 0x12C) = 0x384;
    M2C_FIELD(arg0, s16 *, 0x12E) = 0x384;
    M2C_FIELD(arg0, s16 *, 0x132) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x0C000000);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    func_80033A0C_ovl_01(arg0 + 0x208, 0, 0x03200384, 0, M2C_FIELD(arg0, s32 **, 0x234) + 0x4C);
    var_a0 = 0x12;
    M2C_FIELD((((M2C_FIELD(arg0, u8 *, 8) - 0x10) * 4) + &D_800C7650_ovl_01), M2C_UNK **, 0x18298) = &func_80168920_ovl_29;
    M2C_FIELD((((M2C_FIELD(arg0, u8 *, 8) - 0x10) * 4) + &D_800C7650_ovl_01), M2C_UNK **, 0x18398) = &func_80168A30_ovl_29;
    var_t0 = M2C_FIELD(arg0, s32 **, 0x234);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 4);
    do {
        M2C_FIELD(var_t0, s32 *, 0x60) = 0x808080;
        var_a0 -= 1;
        var_t0 += 0x178;
    } while (var_a0 != 0);
    temp_t0_2 = M2C_FIELD(arg0, s32 **, 0x234) + 0x178;
    M2C_FIELD(M2C_FIELD(temp_t0_2, void **, 0x120), s16 *, 0xC) = 0;
    func_800662B8_ovl_01(arg0, temp_t0_2);
    temp_t0_3 = M2C_FIELD(arg0, s32 **, 0x234) + 0x2F0;
    M2C_FIELD(M2C_FIELD(temp_t0_3, void **, 0x120), s16 *, 0xC) = 0;
    M2C_FIELD(M2C_FIELD(temp_t0_3, void **, 0x120), s16 *, 0x10) = 0;
    func_800662B8_ovl_01(arg0, temp_t0_3);
    M2C_FIELD(arg0, s8 *, 5) = 7;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0x13000000;
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    temp_t0_4 = M2C_FIELD(arg0, s32 **, 0x234) + 0x2F0;
    M2C_FIELD(M2C_FIELD(temp_t0_4, void **, 0x120), s16 *, 0xC) = 0x1000;
    M2C_FIELD(M2C_FIELD(temp_t0_4, void **, 0x120), s16 *, 0x10) = 0;
    func_800662B8_ovl_01(arg0, temp_t0_4);
    temp_t0_5 = M2C_FIELD(arg0, s32 **, 0x234) + 0x5E0;
    M2C_FIELD(M2C_FIELD(temp_t0_5, void **, 0x120), s16 *, 0xC) = 0x1000;
    func_800662B8_ovl_01(arg0, temp_t0_5);
    temp_v1 = M2C_FIELD(arg0, s32 **, 0x234);
    temp_t0_6 = temp_v1 + 0x8D0;
    M2C_FIELD(temp_v1, s32 *, 0x8D0) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x8D0) | 0x400);
    M2C_FIELD(temp_t0_6, s16 *, 0x124) = 0x800;
    M2C_FIELD(temp_t0_6, s16 *, 0x126) = 0x200;
    M2C_FIELD(temp_t0_6, s16 *, 0x128) = 0x800;
    temp_v1_2 = M2C_FIELD(arg0, s32 **, 0x234);
    temp_t0_7 = temp_v1_2 + 0xA48;
    M2C_FIELD(temp_v1_2, s32 *, 0xA48) = (s32) (M2C_FIELD(temp_v1_2, s32 *, 0xA48) | 0x400);
    M2C_FIELD(temp_t0_7, s16 *, 0x124) = 0x800;
    M2C_FIELD(temp_t0_7, s16 *, 0x126) = 0x200;
    M2C_FIELD(temp_t0_7, s16 *, 0x128) = 0x800;
    temp_v1_3 = M2C_FIELD(arg0, s32 **, 0x234);
    temp_t0_8 = temp_v1_3 + 0xBC0;
    M2C_FIELD(temp_v1_3, s32 *, 0xBC0) = (s32) (M2C_FIELD(temp_v1_3, s32 *, 0xBC0) | 0x400);
    M2C_FIELD(temp_t0_8, s16 *, 0x124) = 0x800;
    M2C_FIELD(temp_t0_8, s16 *, 0x126) = 0x200;
    M2C_FIELD(temp_t0_8, s16 *, 0x128) = 0x800;
    temp_v1_4 = M2C_FIELD(arg0, s32 **, 0x234);
    temp_t0_9 = temp_v1_4 + 0x468;
    M2C_FIELD(temp_v1_4, s32 *, 0x468) = (s32) (M2C_FIELD(temp_v1_4, s32 *, 0x468) | 0x400);
    M2C_FIELD(temp_t0_9, s16 *, 0x124) = 0x1000;
    M2C_FIELD(temp_t0_9, s16 *, 0x126) = 0x200;
    M2C_FIELD(temp_t0_9, s16 *, 0x128) = 0x1000;
    if ((M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFFF) == 2) {
        M2C_FIELD(arg0, s16 *, 0x1F4) = 0x3C;
        M2C_FIELD(arg0, s16 *, 0x1F2) = 0x1388;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 2);
        M2C_FIELD(arg0, u8 *, 0x2C3) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C3) | ((func_80033634_ovl_01(0x800, 0x200) & 1) * 0x10));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x208), s8 *, 0xE) = 0;
        var_a0_2 = 0x12;
        var_t0_2 = M2C_FIELD(arg0, s32 **, 0x234);
        M2C_FIELD(arg0, s8 *, 5) = 0;
        M2C_FIELD(arg0, s8 *, 6) = 3;
        do {
            var_a0_2 -= 1;
            *var_t0_2 |= 0x4000;
            var_t0_2 += 0x178;
        } while (var_a0_2 != 0);
        temp_v1_5 = M2C_FIELD(arg0, s32 **, 0x234);
        M2C_FIELD(temp_v1_5, s32 *, 0x8D0) = (s32) (M2C_FIELD(temp_v1_5, s32 *, 0x8D0) & ~0x400);
        temp_v1_6 = M2C_FIELD(arg0, s32 **, 0x234);
        M2C_FIELD(temp_v1_6, s32 *, 0xA48) = (s32) (M2C_FIELD(temp_v1_6, s32 *, 0xA48) & ~0x400);
        temp_v1_7 = M2C_FIELD(arg0, s32 **, 0x234);
        M2C_FIELD(temp_v1_7, s32 *, 0xBC0) = (s32) (M2C_FIELD(temp_v1_7, s32 *, 0xBC0) & ~0x400);
    }
    var_a0_3 = 0x12;
    if ((M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFFF) == 3) {
        M2C_FIELD(arg0, s16 *, 0x1F2) = 0x1388;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0xA);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x208), s8 *, 0xE) = 0;
        var_t0_3 = M2C_FIELD(arg0, s32 **, 0x234);
        M2C_FIELD(arg0, s8 *, 5) = 9;
        M2C_FIELD(arg0, s8 *, 6) = 0;
        do {
            var_a0_3 -= 1;
            *var_t0_3 |= 0x4000;
            var_t0_3 += 0x178;
        } while (var_a0_3 != 0);
        temp_v1_8 = M2C_FIELD(arg0, s32 **, 0x234);
        M2C_FIELD(temp_v1_8, s32 *, 0x8D0) = (s32) (M2C_FIELD(temp_v1_8, s32 *, 0x8D0) & ~0x400);
        temp_v1_9 = M2C_FIELD(arg0, s32 **, 0x234);
        M2C_FIELD(temp_v1_9, s32 *, 0xA48) = (s32) (M2C_FIELD(temp_v1_9, s32 *, 0xA48) & ~0x400);
        temp_v1_10 = M2C_FIELD(arg0, s32 **, 0x234);
        M2C_FIELD(temp_v1_10, s32 *, 0xBC0) = (s32) (M2C_FIELD(temp_v1_10, s32 *, 0xBC0) & ~0x400);
    }
}
