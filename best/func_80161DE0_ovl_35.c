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
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80166520_ovl_35(void *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;
extern M2C_UNK func_8016590C_ovl_35;

void func_80161DE0_ovl_35(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 var_v1;
    s32 *var_v1_2;
    s8 temp_hi;
    u32 var_a0;
    u32 var_a0_2;
    void *temp_v1;
    void *var_a1;

    var_a0 = 0;
    var_a1 = arg0;
    M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
    M2C_FIELD(arg0, s16 *, 0x26C) = 0;
    M2C_FIELD(arg0, s16 *, 0x268) = 0;
    M2C_FIELD(arg0, s16 *, 0x264) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0xC00000);
    do {
        M2C_FIELD(var_a1, s32 *, 0x2B4) = 0;
        var_a0 += 1;
        var_a1 += 4;
    } while (var_a0 < 0xCU);
    M2C_FIELD(arg0, s16 *, 0x1E0) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
    var_v1 = 0xFA;
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x20) {
        var_v1 = 0xC8;
    }
    temp_hi = var_v1 / 3;
    M2C_FIELD(arg0, s16 *, 0x1F2) = var_v1;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x0C000000);
    M2C_FIELD(arg0, s8 *, 0x1EF) = temp_hi;
    M2C_FIELD(arg0, s8 *, 0x1EE) = temp_hi;
    M2C_FIELD(arg0, s8 *, 0x1ED) = temp_hi;
    func_80033A0C_ovl_01(arg0 + 0x208, 0, 0x057807D0, 0, arg0 + 0x28);
    M2C_FIELD(arg0, M2C_UNK **, 0x250) = &D_800E10D0_ovl_01;
    M2C_FIELD(arg0, s8 *, 0x25C) = 1;
    temp_v1 = M2C_FIELD(arg0, void **, 0x234);
    M2C_FIELD(arg0, s8 *, 0x25D) = 0;
    M2C_FIELD(temp_v1, s16 *, 0x134) = 8;
    M2C_FIELD(temp_v1, s16 *, 0x138) = 0x100;
    M2C_FIELD(temp_v1, s16 *, 0x130) = 0;
    M2C_FIELD(temp_v1, s16 *, 0x132) = 0;
    M2C_FIELD(temp_v1, s16 *, 0x136) = 0;
    M2C_FIELD(temp_v1, s16 *, 0x13A) = 0;
    M2C_FIELD(arg0, s32 *, 0x284) = 1;
    M2C_FIELD(arg0, s16 *, 0x134) = -0x320;
    M2C_FIELD(arg0, s16 *, 0x13A) = 0x3E8;
    M2C_FIELD(arg0, s16 *, 0x130) = 0;
    M2C_FIELD(arg0, s16 *, 0x132) = 0;
    M2C_FIELD(arg0, s16 *, 0x136) = 0x320;
    M2C_FIELD(arg0, s16 *, 0x138) = 0x578;
    M2C_FIELD(arg0, s16 *, 0x12C) = 0x320;
    M2C_FIELD(arg0, s16 *, 0x12E) = 0x578;
    M2C_FIELD(arg0, s16 *, 0x28A) = 0x384;
    func_80166520_ovl_35(arg0, 0, 0x320);
    var_a0_2 = 0;
    var_v1_2 = M2C_FIELD(arg0, void **, 0x234) + 0x1318;
    do {
        var_a0_2 += 1;
        *var_v1_2 |= 0x4000;
        var_v1_2 += 0x178;
    } while (var_a0_2 < 4U);
    M2C_FIELD(arg0, s8 *, 0x2C9) = 2;
    M2C_FIELD(arg0, s8 *, 0x2BD) = 1;
    M2C_FIELD(arg0, s8 *, 0x2CB) = 0x1E;
    if (M2C_FIELD(arg0, u16 *, 0x1AA) & 0x10) {
        M2C_FIELD(arg0, s8 *, 5) = 0xA;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x08000000;
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        M2C_FIELD(arg0, s8 *, 0x2C5) = 1;
        M2C_FIELD(arg0, s8 *, 0x2BC) = 1;
        M2C_FIELD(arg0, s16 *, 0x270) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    }
    M2C_FIELD(&D_800C7650_ovl_01, M2C_UNK **, 0x18340) = &func_8016590C_ovl_35;
}
