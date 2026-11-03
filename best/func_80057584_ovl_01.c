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

s32 func_80032EA4_ovl_01(void *, s32, s32, s16);    /* extern */
s32 func_80033174_ovl_01(void *, void *);           /* extern */
u32 func_80040BE4_ovl_01(s32);                      /* extern */
s32 func_8006AB70_ovl_01(s32, s32, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern void *D_800E1390_ovl_01;

s32 func_80057584_ovl_01(void *arg0, u32 arg1, s16 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s3;
    u32 temp_s4;
    u32 var_s5;
    void **var_s1;
    void *temp_s0;
    void *var_s6;

    var_s6 = NULL;
    if (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A76) != 0) {
        var_s5 = arg1;
        var_s1 = &D_800E1390_ovl_01;
        do {
            temp_s0 = *var_s1;
            if ((M2C_FIELD(temp_s0, s32 *, 0) & 1) && !(M2C_FIELD(temp_s0, u16 *, 0x1AA) & 0xE000)) {
                temp_v0 = M2C_FIELD(arg0, s32 *, 0x28) - M2C_FIELD(temp_s0, s32 *, 0x28);
                temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x30) - M2C_FIELD(temp_s0, s32 *, 0x30);
                var_s3 = 0;
                temp_s4 = func_80040BE4_ovl_01((temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2));
                if ((M2C_FIELD(temp_s0, s16 *, 0x1F2) >= 0) && (func_8006AB70_ovl_01(M2C_FIELD(arg0, s32 *, 0x234) + (M2C_FIELD(arg0, u8 *, 0x25D) * 0x178) + 0x4C, M2C_FIELD(temp_s0, s32 *, 0x234) + (M2C_FIELD(temp_s0, u8 *, 0x25D) * 0x178) + 0x4C, 0x2080, 1) == 0) && (func_80032EA4_ovl_01(arg0, M2C_FIELD(temp_s0, s32 *, 0x28), M2C_FIELD(temp_s0, s32 *, 0x30), arg2) == 0)) {
                    var_s3 = (func_80033174_ovl_01(arg0, temp_s0) & 0xFF) == 0;
                }
                if ((var_s3 != 0) && (temp_s4 < var_s5)) {
                    var_s5 = temp_s4;
                    var_s6 = temp_s0;
                }
            }
            var_s1 += 4;
        } while (var_s1 != M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1828C));
        if (var_s6 != NULL) {
            M2C_FIELD(arg0, void **, 0x250) = var_s6;
            return 1;
        }
        goto block_15;
    }
block_15:
    M2C_FIELD(arg0, void **, 0x250) = arg0;
    return 0;
}
