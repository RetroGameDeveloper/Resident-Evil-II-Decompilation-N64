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
s32 func_800439B8_ovl_01(s32, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8004789C_ovl_01(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_800837DC_ovl_01(M2C_UNK *, u8);            /* extern */
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_800DF650_ovl_01;
extern M2C_UNK D_800E8D50_ovl_01;
extern M2C_UNK D_8012BF38_ovl_01;
extern M2C_UNK D_8012F940_ovl_01;

void func_80090C80_ovl_01(void) {
    M2C_UNK var_a1_2;
    s32 var_s1;
    s32 var_s4;
    s32 var_v0;
    u32 temp_v1;
    u32 var_a1;
    void *var_s2;

    func_80043650_ovl_01();
    var_a1 = D_800C527C_ovl_01 + 0x3BB64;
    temp_v1 = D_800C527C_ovl_01 + 0x3C004;
    if (var_a1 < temp_v1) {
        var_a1 = temp_v1;
    }
    var_s1 = var_a1 + 0xA64;
    var_s4 = 0xE;
    var_s2 = &D_8012F940_ovl_01 + 0x70;
    do {
        var_s2 -= 8;
        var_s4 -= 1;
        if (M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x29) != 0) {
            var_a1_2 = 0x80;
        } else {
            var_a1_2 = 0x50;
        }
        func_8004789C_ovl_01(var_s1, var_a1_2, var_a1_2, var_a1_2);
        if ((func_800837DC_ovl_01(&D_800E8D50_ovl_01, M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x1A)) != 0) && (M2C_FIELD(var_s2, u8 *, 1) == M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x1A)) && (func_800837DC_ovl_01(&D_800E8D50_ovl_01 + 0x110, M2C_FIELD(var_s2, u8 *, 0)) == 0)) {
            if (!(M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x1A5C) & 0x40000000)) {
                var_v0 = M2C_FIELD(var_s2, u8 *, 2) & 0x40;
                goto block_14;
            }
            if ((M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x1A5C) >= 0) || !(M2C_FIELD(var_s2, u8 *, 2) & 0x40)) {
                var_v0 = M2C_FIELD(var_s2, u8 *, 2) & 0x80;
block_14:
                if (var_v0 == 0) {
                    M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x208) = func_800439B8_ovl_01(M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x208), var_s1, 0, 0);
                }
            }
        }
        var_s1 += 0x28;
    } while (var_s4 != 0);
}
