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

s32 func_800667E0_ovl_01(s32, s32, s16, s16);       /* extern */
M2C_UNK func_80066EF8_ovl_01(void *, s32, void *);  /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern u16 D_80139DE0;

s16 func_80066C70_ovl_01(void *arg0, s32 arg2) {
    s16 var_v0;
    s32 temp_fp;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s3_2;
    s32 temp_s4_2;
    s32 temp_s5;
    s32 temp_s7;
    s32 var_s0;
    s32 var_s5;
    u16 temp_s3;
    u16 temp_s4;
    u16 temp_v1;
    u16 var_v0_2;
    void *temp_s6;
    void *var_s1;

    var_v0 = 0;
    if (!(M2C_FIELD(arg0, s32 *, 0) & 8)) {
        temp_s5 = M2C_FIELD(arg0, s32 *, 0x28) + M2C_FIELD(arg0, s16 *, 0x13C);
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x30) + M2C_FIELD(arg0, s16 *, 0x13E);
        var_s1 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), void **, 0x20);
        temp_s6 = var_s1 + (M2C_FIELD(var_s1, s32 *, 4) * 0x10);
        temp_fp = func_800667E0_ovl_01(temp_s5, temp_s0, M2C_FIELD(var_s1, s16 *, 0), M2C_FIELD(var_s1, s16 *, 2));
        D_80139DE0 = 0;
        temp_s4 = M2C_FIELD(arg0, u16 *, 0x12C);
        temp_s3 = M2C_FIELD(arg0, u16 *, 0x12E);
        var_s5 = temp_s5 + temp_s4;
        var_s0 = temp_s0 + temp_s3;
        temp_s4_2 = temp_s4 * 2;
        temp_s3_2 = temp_s3 * 2;
        temp_s7 = 1 << M2C_FIELD(arg0, u8 *, 0x1A2);
loop_14:
        var_s1 += 0x10;
        if (var_s1 != temp_s6) {
            if ((M2C_FIELD(var_s1, u16 *, 0xA) & temp_fp) && ((u32) (var_s5 - M2C_FIELD(var_s1, s16 *, 0)) < (u32) (M2C_FIELD(var_s1, u16 *, 4) + temp_s4_2)) && ((u32) (var_s0 - M2C_FIELD(var_s1, s16 *, 2)) < (u32) (M2C_FIELD(var_s1, u16 *, 6) + temp_s3_2))) {
                temp_v1 = M2C_FIELD(var_s1, u16 *, 8);
                if ((temp_v1 & 0x4000) && !(temp_v1 & arg2) && (M2C_FIELD(var_s1, s32 *, 0xC) & temp_s7)) {
                    if ((temp_v1 & 0xF) != 0xA) {
                        if (arg2 != 0) {
                            temp_s0_2 = temp_s3_2 >> 1;
                            func_80066EF8_ovl_01(arg0, temp_s0_2, var_s1);
                            var_s5 = M2C_FIELD(arg0, s32 *, 0x28) + M2C_FIELD(arg0, s16 *, 0x13C) + (temp_s4_2 >> 1);
                            var_s0 = M2C_FIELD(arg0, s32 *, 0x30) + M2C_FIELD(arg0, s16 *, 0x13E) + temp_s0_2;
                        }
                        var_v0_2 = D_80139DE0 | 1;
                    } else {
                        var_v0_2 = D_80139DE0 | 4;
                    }
                    D_80139DE0 = var_v0_2;
                }
            }
            goto loop_14;
        }
        var_v0 = (s16) D_80139DE0;
    }
    return var_v0;
}
