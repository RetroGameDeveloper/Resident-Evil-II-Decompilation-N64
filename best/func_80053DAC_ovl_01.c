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

M2C_UNK func_80043650_ovl_01();                     /* extern */
s32 func_80084514_ovl_01(s32);                      /* extern */
extern void *D_8010D8E0_ovl_01;

void func_80053DAC_ovl_01(s8 arg0) {
    s32 temp_v0_2;
    u32 temp_v1;
    u8 *var_s3;
    u8 *var_s4;
    u8 temp_v0;
    u8 temp_v1_2;
    u8 temp_v1_3;
    void *temp_s0;
    void *temp_s5;
    void *var_s1;
    void *var_s2;

    func_80043650_ovl_01();
    temp_s0 = D_8010D8E0_ovl_01;
    var_s4 = temp_s0 + 4;
    var_s3 = temp_s0 + 0x16C;
    var_s2 = temp_s0 + 0x340;
    temp_s5 = temp_s0 + 0x19C0;
    var_s1 = temp_s0 + 0x34F;
    do {
        var_s2 += 0x10;
        temp_v0 = *var_s4;
        var_s4 += 1;
        M2C_FIELD(var_s1, s32 *, -0xB) = 0x8000A;
        temp_v1 = (temp_v0 - 0x20) & 0xFFFF;
        temp_v0_2 = func_80084514_ovl_01((((temp_v1 >> 5) * 0xA00) | ((temp_v1 & 0x1F) * 8)) & 0xFEF8);
        temp_v1_2 = *var_s3;
        var_s3 += 1;
        M2C_FIELD(var_s1, s8 *, 0) = arg0;
        M2C_FIELD(var_s1, s32 *, -7) = (s32) (temp_v0_2 + (temp_v1_2 << 5));
        var_s1 += 0x10;
    } while ((u32) var_s2 < (u32) temp_s5);
    M2C_FIELD(temp_s0, s16 *, 0x320) = (s16) ((M2C_FIELD(temp_s0, u8 *, 0) * 8) + 0x10);
    M2C_FIELD(temp_s0, s16 *, 0x322) = (s16) ((M2C_FIELD(temp_s0, u8 *, 1) * 0xA) + 0x15);
    temp_v1_3 = (M2C_FIELD(temp_s0, u8 *, 0x2D5) + 1) & 0x1F;
    M2C_FIELD(temp_s0, u8 *, 0x2D5) = temp_v1_3;
    M2C_FIELD(temp_s0, s16 *, 0x32A) = (s16) M2C_FIELD(temp_s0, u8 *, 0x2D7);
    if (arg0 != 0) {
        M2C_FIELD(temp_s0, s8 *, 0x32F) = (s8) (temp_v1_3 & 0x10);
    } else {
        M2C_FIELD(temp_s0, s8 *, 0x32F) = 0;
    }
    M2C_FIELD(temp_s0, s8 *, 0x33F) = arg0;
}
