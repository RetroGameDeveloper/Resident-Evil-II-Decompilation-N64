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

s32 func_80044578_ovl_01(s32, s32);                 /* extern */
extern s32 D_800EFD34_ovl_01;
extern s32 D_800EFD3C_ovl_01;
extern s32 D_800EFD40_ovl_01;

s32 func_80043678_ovl_01(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s4;
    s32 temp_s4_2;
    s32 temp_s6;
    s32 var_a0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s3;
    s32 var_s3_2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_4;
    void *var_s0;
    void *var_s0_2;
    void *var_s2;
    void *var_s2_2;

    var_a0 = arg0;
    var_s3 = arg1;
    var_s1 = var_s3;
    D_800EFD34_ovl_01 = -1;
    D_800EFD40_ovl_01 = 0;
    temp_s6 = var_s3;
    D_800EFD3C_ovl_01 = 0;
    if (var_s3 != arg2) {
        var_s2 = arg1 + 9;
        do {
            temp_a1 = M2C_FIELD(var_s2, void **, 0x1B);
            if ((temp_a1 != NULL) && (M2C_FIELD(var_s2, u16 *, 0x19) != 0) && (M2C_FIELD(var_s2, u8 *, -6) != 2)) {
                temp_s4 = M2C_FIELD(temp_a1, s32 *, 0x14) + ((u8) M2C_FIELD(var_s2, u8 *, -1) >> 1) + (((u32) M2C_FIELD(temp_a1, u32 *, 4) >> 1) * M2C_FIELD(var_s2, u8 *, 0));
                if (var_s1 != arg2) {
                    var_s0 = var_s1 + 9;
                    do {
                        temp_a1_2 = M2C_FIELD(var_s0, void **, 0x1B);
                        if ((temp_a1_2 != NULL) && ((M2C_FIELD(temp_a1_2, s32 *, 0x14) + ((u8) M2C_FIELD(var_s0, u8 *, -1) >> 1) + (((u32) M2C_FIELD(temp_a1_2, u32 *, 4) >> 1) * M2C_FIELD(var_s0, u8 *, 0))) == temp_s4)) {
                            var_a0 = func_80044578_ovl_01(var_a0, var_s1);
                        }
                        var_s1 += 0x28;
                        var_s0 += 0x28;
                    } while (var_s1 != arg2);
                }
            }
            var_s2 += 0x28;
            var_s3 += 0x28;
            var_s1 = var_s3;
        } while (var_s3 != arg2);
    }
    var_s3_2 = temp_s6;
    var_s1_2 = var_s3_2;
    D_800EFD34_ovl_01 = -1;
    D_800EFD40_ovl_01 = 0;
    D_800EFD3C_ovl_01 = 0;
    if (var_s3_2 != arg2) {
        var_s2_2 = var_s3_2 + 9;
        do {
            temp_a1_3 = M2C_FIELD(var_s2_2, void **, 0x1B);
            if ((temp_a1_3 != NULL) && (M2C_FIELD(var_s2_2, u16 *, 0x19) != 0)) {
                temp_s4_2 = M2C_FIELD(temp_a1_3, s32 *, 0x14) + ((u8) M2C_FIELD(var_s2_2, u8 *, -1) >> 1) + (((u32) M2C_FIELD(temp_a1_3, u32 *, 4) >> 1) * M2C_FIELD(var_s2_2, u8 *, 0));
                if (var_s1_2 != arg2) {
                    var_s0_2 = var_s1_2 + 9;
                    do {
                        temp_a1_4 = M2C_FIELD(var_s0_2, void **, 0x1B);
                        if ((temp_a1_4 != NULL) && ((M2C_FIELD(temp_a1_4, s32 *, 0x14) + ((u8) M2C_FIELD(var_s0_2, u8 *, -1) >> 1) + (((u32) M2C_FIELD(temp_a1_4, u32 *, 4) >> 1) * M2C_FIELD(var_s0_2, u8 *, 0))) == temp_s4_2)) {
                            var_a0 = func_80044578_ovl_01(var_a0, var_s1_2);
                        }
                        var_s1_2 += 0x28;
                        var_s0_2 += 0x28;
                    } while (var_s1_2 != arg2);
                }
            }
            var_s2_2 += 0x28;
            var_s3_2 += 0x28;
            var_s1_2 = var_s3_2;
        } while (var_s3_2 != arg2);
    }
    return var_a0;
}
