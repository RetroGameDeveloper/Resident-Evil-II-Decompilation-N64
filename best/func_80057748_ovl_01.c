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

s32 func_80032EA4_ovl_01(void *, s32, s32, s16);    /* extern */
s32 func_8006AB70_ovl_01(s32, s32, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern void *D_800E138C_ovl_01;
extern u8 D_8010DBA0_ovl_01;

void func_80057748_ovl_01(void *arg0, u32 arg1, u16 arg2) {
    u16 sp16;
    void *sp18;
    s32 var_s3;
    u32 temp_s1;
    u32 var_s5;
    u32 var_s6;
    u8 temp_v0;
    void **var_s2;
    void *temp_s0;
    void *var_fp;
    void *var_s7;

    var_fp = NULL;
    var_s6 = 0x7FFFFFFF;
    var_s7 = NULL;
    sp16 = arg2;
    if (!(M2C_FIELD(arg0, u8 *, 0x25C) & 1) && (temp_v0 = D_8010DBA0_ovl_01 - 1, D_8010DBA0_ovl_01 = temp_v0, ((temp_v0 & 0xFF) == 0xFF))) {
        D_8010DBA0_ovl_01 = 0x2D;
        if (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A76) == 0) {
            if (!(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & 0x10000000)) {
                M2C_FIELD(arg0, void **, 0x254) = arg0;
                return;
            }
            goto block_6;
        }
block_6:
        var_s5 = arg1;
        var_s2 = &D_800E138C_ovl_01;
        sp18 = &D_800C7650_ovl_01 + 0x18000;
        do {
            temp_s0 = *var_s2;
            if ((M2C_FIELD(temp_s0, s32 *, 0) & 1) && !(M2C_FIELD(temp_s0, u16 *, 0x1AA) & 0xC000)) {
                var_s3 = 0;
                temp_s1 = M2C_FIELD(temp_s0, u32 *, 0x28C);
                if (func_8006AB70_ovl_01(M2C_FIELD(arg0, s32 *, 0x234) + (M2C_FIELD(arg0, u8 *, 0x25D) * 0x178) + 0x4C, M2C_FIELD(temp_s0, s32 *, 0x234) + (M2C_FIELD(temp_s0, u8 *, 0x25D) * 0x178) + 0x4C, 0x2080, 1) == 0) {
                    var_s3 = func_80032EA4_ovl_01(arg0, M2C_FIELD(temp_s0, s32 *, 0x28), M2C_FIELD(temp_s0, s32 *, 0x30), (s16) sp16) == 0;
                }
                if (var_s3 != 0) {
                    if (!(M2C_FIELD(temp_s0, u16 *, 0x1AA) & 0x2000)) {
                        if (temp_s1 < var_s5) {
                            var_s5 = temp_s1;
                            var_fp = temp_s0;
                        }
                    } else if (temp_s1 < var_s6) {
                        var_s6 = temp_s1;
                        var_s7 = temp_s0;
                    }
                }
            }
            var_s2 += 4;
        } while (var_s2 != M2C_FIELD(sp18, s32 *, 0x28C));
        if (var_fp != NULL) {
            M2C_FIELD(arg0, void **, 0x254) = var_fp;
            return;
        }
        if (var_s7 == NULL) {
            M2C_FIELD(arg0, void **, 0x254) = arg0;
            return;
        }
        M2C_FIELD(arg0, void **, 0x254) = var_s7;
    }
}
