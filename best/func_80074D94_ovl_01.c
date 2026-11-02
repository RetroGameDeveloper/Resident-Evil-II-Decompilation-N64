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

s32 func_80083D5C_ovl_01(s32 *, M2C_UNK *);         /* extern */
s32 func_80083E44_ovl_01(s32 *, void *);            /* extern */
extern M2C_UNK D_800C7650_ovl_01;

s16 func_80074D94_ovl_01(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    M2C_UNK sp20;
    u16 sp24;
    u16 sp26;
    u16 sp28;
    u16 sp2A;
    u16 sp2C;
    u16 sp2E;
    u16 sp30;
    u16 sp32;
    M2C_UNK *var_s2;
    s32 var_v0;
    u32 var_s1;
    u8 temp_s3;
    void *temp_s0;

    temp_s3 = M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x20F54);
    var_s1 = 0;
    sp10 = arg0;
    sp14 = 0;
    sp18 = arg1;
    if (temp_s3 != 0) {
        var_s2 = &D_800C7650_ovl_01;
loop_2:
        temp_s0 = M2C_FIELD(var_s2, void **, 0x184B0);
        var_s2 += 4;
        if (temp_s0 != NULL) {
            var_s1 += 1;
            if (M2C_FIELD(temp_s0, u8 *, 0) == 7) {
                if (M2C_FIELD(temp_s0, u8 *, 1) & 0x80) {
                    sp24 = M2C_FIELD(temp_s0, u16 *, 4);
                    sp26 = M2C_FIELD(temp_s0, u16 *, 6);
                    sp28 = M2C_FIELD(temp_s0, u16 *, 8);
                    sp2A = M2C_FIELD(temp_s0, u16 *, 0xA);
                    sp2C = M2C_FIELD(temp_s0, u16 *, 0xC);
                    sp2E = M2C_FIELD(temp_s0, u16 *, 0xE);
                    sp30 = M2C_FIELD(temp_s0, u16 *, 0x10);
                    sp32 = M2C_FIELD(temp_s0, u16 *, 0x12);
                    var_v0 = var_s1 < temp_s3;
                    if (func_80083D5C_ovl_01(&sp10, &sp20) != 0) {
                        return M2C_FIELD(temp_s0, s16 *, 0x14);
                    }
                    goto block_10;
                }
                var_v0 = var_s1 < temp_s3;
                if (func_80083E44_ovl_01(&sp10, temp_s0 + 4) != 0) {
                    return (s16) M2C_FIELD(temp_s0, u16 *, 0xC);
                }
                goto block_10;
            }
        }
        var_v0 = var_s1 < temp_s3;
block_10:
        if (var_v0 == 0) {
            goto block_11;
        }
        goto loop_2;
    }
block_11:
    return 0;
}
