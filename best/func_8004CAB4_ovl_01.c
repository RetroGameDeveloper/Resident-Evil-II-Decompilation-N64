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

M2C_UNK osCreateThread(void *, s32, s32, M2C_UNK, s32, s32); /* extern */
s32 func_80007010(M2C_UNK *);                       /* extern */
s32 func_800072E0();                                /* extern */
M2C_UNK func_80007300(s32);                         /* extern */
M2C_UNK func_8000C9E0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_8000DB90(void *);                      /* extern */
extern M2C_UNK D_8010B2C8_ovl_01;
extern M2C_UNK D_80112B90_ovl_01;
extern M2C_UNK D_80139AD0;

void func_8004CAB4_ovl_01(void) {
    M2C_UNK sp18;
    M2C_UNK *temp_s0;
    M2C_UNK *temp_s1;
    M2C_UNK *temp_s2;
    M2C_UNK *var_s5;
    s32 temp_s3;
    s32 var_s6;
    u16 temp_v0;
    u16 temp_v1;

    var_s6 = 0;
    var_s5 = &D_8010B2C8_ovl_01;
loop_1:
    if (var_s6 < 2) {
        M2C_FIELD(&D_8010B2C8_ovl_01, M2C_UNK **, 0x390) = var_s5;
        temp_v1 = M2C_FIELD(M2C_FIELD(&D_8010B2C8_ovl_01, M2C_UNK **, 0x390), u16 *, 0);
        if (temp_v1 != 2) {
            if ((s32) temp_v1 < 3) {
                if (temp_v1 != 1) {
                    var_s5 += 0x1C8;
                } else {
                    temp_v0 = M2C_FIELD(M2C_FIELD(&D_8010B2C8_ovl_01, M2C_UNK **, 0x390), u16 *, 2) - 1;
                    M2C_FIELD(M2C_FIELD(&D_8010B2C8_ovl_01, M2C_UNK **, 0x390), u16 *, 2) = temp_v0;
                    if ((temp_v0 << 0x10) <= 0) {
                        goto block_10;
                    }
                    goto block_11;
                }
            } else if (temp_v1 != 4) {
                var_s5 += 0x1C8;
            } else {
                goto block_10;
            }
        } else {
            temp_s3 = func_800072E0();
            temp_s0 = M2C_FIELD(&D_8010B2C8_ovl_01, M2C_UNK **, 0x390);
            temp_s1 = M2C_FIELD(&D_8010B2C8_ovl_01, M2C_UNK **, 0x390);
            temp_s2 = M2C_FIELD(&D_8010B2C8_ovl_01, M2C_UNK **, 0x390);
            osCreateThread(M2C_FIELD(&D_8010B2C8_ovl_01, M2C_UNK **, 0x390) + 8, M2C_FIELD(temp_s0, s32 *, 0x1BC), M2C_FIELD(temp_s1, s32 *, 0x1B8), 0, M2C_FIELD(temp_s2, s32 *, 0x1C0), func_80007010(&D_80112B90_ovl_01) + 1);
            func_80007300(temp_s3);
block_10:
            M2C_FIELD(M2C_FIELD(&D_8010B2C8_ovl_01, M2C_UNK **, 0x390), u16 *, 0) = 0x7FU;
            func_8000DB90(M2C_FIELD(&D_8010B2C8_ovl_01, M2C_UNK **, 0x390) + 8);
            func_8000C9E0(&D_80139AD0, &sp18, 1);
block_11:
            var_s5 += 0x1C8;
        }
        var_s6 += 1;
        goto loop_1;
    }
}
