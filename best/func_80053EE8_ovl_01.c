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

M2C_UNK func_80043650_ovl_01();                     /* extern */
s32 func_800439B8_ovl_01(s32, s32 *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80054104_ovl_01();                     /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern void *D_8010D8E0_ovl_01;
extern M2C_UNK D_8010D8E4_ovl_01;

void func_80053EE8_ovl_01(s32 arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 *var_s2;
    s32 *var_s3;
    u8 temp_a0;
    void *temp_s4;
    void *temp_s6;
    void *temp_s7;
    void *var_s0;
    void *var_s1;

    func_80043650_ovl_01();
    temp_s4 = D_8010D8E0_ovl_01;
    var_s3 = temp_s4 + ((M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x18538) * 0x1C70) + 0x19C0);
    var_s2 = temp_s4 + 0x300;
    temp_s7 = var_s2 + (arg0 * 0x10);
    temp_s6 = temp_s4 + 0x320;
    var_s1 = temp_s4 + 0x30D;
    var_s0 = var_s3 + 0xC;
    do {
        if (M2C_FIELD(var_s1, u8 *, 2) != 0) {
            temp_a0 = M2C_FIELD(var_s1, u8 *, 1);
            M2C_FIELD(var_s3, s32 *, 0) = (M2C_FIELD(var_s1, u8 *, 0) << 0x18) + (temp_a0 + 0x64000000) + (temp_a0 << 8) + (temp_a0 << 0x10);
            M2C_FIELD(var_s0, s32 *, -8) = (s32) *var_s2;
            M2C_FIELD(var_s0, s32 *, 4) = (s32) M2C_FIELD(var_s1, s32 *, -9);
            M2C_FIELD(var_s0, s32 *, -4) = (s32) M2C_FIELD(var_s1, s32 *, -5);
            if (M2C_FIELD(var_s1, u8 *, 0) != 0) {
                M2C_FIELD(var_s0, s8 *, -9) = 2;
            } else {
                M2C_FIELD(var_s0, s8 *, -9) = 0;
            }
            M2C_FIELD(var_s0, M2C_UNK **, 0) = &D_8010D8E4_ovl_01;
            if (var_s2 == temp_s6) {
                sp10 = M2C_FIELD(var_s3, s32 *, 0);
                sp14 = M2C_FIELD(var_s3, s32 *, 4);
                sp18 = M2C_FIELD(var_s3, s32 *, 8);
                sp1C = M2C_FIELD(var_s3, s32 *, 0xC);
                sp20 = M2C_FIELD(var_s3, s32 *, 0x10);
                var_s0 += 0x14;
            } else {
                M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18200) = func_800439B8_ovl_01(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18200), var_s3, 0, 0);
                var_s0 += 0x14;
            }
            var_s3 += 0x14;
        }
        var_s2 += 0x10;
        var_s1 += 0x10;
    } while ((u32) var_s2 < (u32) temp_s7);
    if (M2C_FIELD(temp_s4, u8 *, 0x32F) != 0) {
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18200) = func_800439B8_ovl_01(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18200), &sp10, 0, 0);
    }
    func_80054104_ovl_01();
}
