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

s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80166984_ovl_26(void *);               /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;

void func_80162F18_ovl_26(void *arg0) {
    M2C_UNK *var_s2;
    s16 var_v1;
    u8 temp_v0;
    void *var_s0;

    if (M2C_FIELD(arg0, u8 *, 0x2B4) != 0) {
        var_s2 = M2C_FIELD(&D_800C7650_ovl_01, M2C_UNK **, 0x19D3C);
        var_s0 = arg0 + 0x2B4;
    } else {
        var_s2 = &D_800E10D0_ovl_01;
        var_s0 = arg0 + 0x2B4;
    }
    var_v1 = -0x320;
    temp_v0 = M2C_FIELD(var_s0, u8 *, 0x19) ^ 1;
    M2C_FIELD(var_s0, u8 *, 0x19) = temp_v0;
    if (temp_v0 == 0) {
        var_v1 = 0x320;
    }
    M2C_FIELD(arg0, s16 *, 0x130) = var_v1;
    M2C_FIELD(var_s0, s8 *, 0x1A) = 0x3C;
    M2C_FIELD(arg0, s8 *, 5) = 1;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) & 0xFD);
    func_80166984_ovl_26(arg0);
    if (((M2C_FIELD(var_s2, s32 *, 4) & 0xFFFF0000) == 0x01020000) && ((0xBD0 >> (func_80033634_ovl_01() & 0xF)) & 1)) {
        M2C_FIELD(arg0, s8 *, 5) = 5;
        M2C_FIELD(var_s0, s8 *, 0x26) = 1;
    }
    M2C_FIELD(var_s0, s8 *, 0xA) = 0;
    M2C_FIELD(var_s0, s8 *, 8) = 0;
    M2C_FIELD(var_s0, s8 *, 9) = 0;
}
