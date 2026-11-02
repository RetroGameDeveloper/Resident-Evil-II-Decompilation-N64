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

u16 func_80032D44_ovl_01(s16, s16, s16, s16);       /* extern */
u32 func_80040BE4_ovl_01(s32);                      /* extern */
s32 func_8006AB70_ovl_01(s32, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80082230_ovl_01(void **, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern void *D_800E1390_ovl_01;
extern M2C_UNK D_8011B4EC_ovl_01;
extern M2C_UNK D_8011B4F8_ovl_01;
extern M2C_UNK D_8011B500_ovl_01;

void func_80080800_ovl_01(void *arg0, void *arg4, void *arg5, void *arg6) {
    s32 temp_v0;
    s32 temp_v0_2;
    u32 temp_v0_3;
    u32 var_s3;
    u32 var_s4;
    u32 var_s5;
    void **var_s1;
    void *temp_s0;
    void *temp_v0_4;
    void *temp_v1;

    var_s5 = 0x7FFFFFFF;
    var_s3 = 0x7FFFFFFF;
    var_s4 = 0x7FFFFFFF;
    func_80082230_ovl_01(&arg4, 0, 0xC);
    M2C_FIELD(&D_8011B4EC_ovl_01, void **, 0) = NULL;
    M2C_FIELD(&D_8011B4EC_ovl_01, void **, 4) = NULL;
    M2C_FIELD(&D_8011B4EC_ovl_01, void **, 8) = NULL;
    if (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A76) != 0) {
        var_s1 = &D_800E1390_ovl_01;
        do {
            temp_s0 = *var_s1;
            if ((M2C_FIELD(temp_s0, s32 *, 0) & 1) && !(M2C_FIELD(temp_s0, u16 *, 0x1AA) & 0xC000) && (temp_v0 = M2C_FIELD(temp_s0, s32 *, 0x28) - M2C_FIELD(arg0, s32 *, 0x28), temp_v0_2 = M2C_FIELD(temp_s0, s32 *, 0x30) - M2C_FIELD(arg0, s32 *, 0x30), temp_v0_3 = func_80040BE4_ovl_01((temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2)), M2C_FIELD(temp_s0, u32 *, 0x290) = temp_v0_3, (func_8006AB70_ovl_01(M2C_FIELD(arg0, s32 *, 0x234) + (M2C_FIELD(arg0, u8 *, 0x25D) * 0x178) + 0x4C, M2C_FIELD(temp_s0, s32 *, 0x234) + (M2C_FIELD(temp_s0, u8 *, 0x25D) * 0x178) + 0x4C, 0x2080, 1) == 0)) && (M2C_FIELD(temp_s0, s16 *, 0x1F2) >= 0)) {
                if (temp_v0_3 < var_s5) {
                    var_s4 = var_s3;
                    var_s3 = var_s5;
                    var_s1 += 4;
                    temp_v1 = arg4;
                    var_s5 = temp_v0_3;
                    arg4 = temp_s0;
                    arg6 = arg5;
                    arg5 = temp_v1;
                } else if (temp_v0_3 < var_s3) {
                    var_s4 = var_s3;
                    var_s1 += 4;
                    temp_v0_4 = arg5;
                    var_s3 = temp_v0_3;
                    arg5 = temp_s0;
                    arg6 = temp_v0_4;
                } else {
                    var_s1 += 4;
                    if (temp_v0_3 < var_s4) {
                        arg6 = temp_s0;
                        var_s4 = temp_v0_3;
                    }
                }
            } else {
                var_s1 += 4;
            }
        } while (var_s1 != M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1828C));
        M2C_FIELD(&D_8011B500_ovl_01, s16 *, 0) = (s16) var_s5;
        M2C_FIELD(&D_8011B500_ovl_01, s16 *, 2) = (s16) var_s3;
        M2C_FIELD(&D_8011B500_ovl_01, s16 *, 4) = (s16) var_s4;
        M2C_FIELD(&D_8011B4EC_ovl_01, void **, 0) = arg4;
        M2C_FIELD(&D_8011B4EC_ovl_01, void **, 4) = arg5;
        M2C_FIELD(&D_8011B4EC_ovl_01, void **, 8) = arg6;
        if (arg4 != NULL) {
            M2C_FIELD(&D_8011B4F8_ovl_01, u16 *, 0) = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), M2C_FIELD(arg4, s16 *, 0x2A), M2C_FIELD(arg4, s16 *, 0x32));
            M2C_FIELD(arg4, s32 *, 0x290) = (s32) (M2C_FIELD(arg4, s32 *, 0x290) | 0x40000000);
            M2C_FIELD(arg4, s16 *, 0x294) = (s16) ((M2C_FIELD(&D_8011B4F8_ovl_01, u16 *, 0) + 0x800) & 0xFFF);
        }
        if (arg5 != NULL) {
            M2C_FIELD(&D_8011B4F8_ovl_01, u16 *, 2) = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), M2C_FIELD(arg5, s16 *, 0x2A), M2C_FIELD(arg5, s16 *, 0x32));
            M2C_FIELD(arg5, s32 *, 0x290) = (s32) (M2C_FIELD(arg5, s32 *, 0x290) | 0x80000000);
            M2C_FIELD(arg5, s16 *, 0x294) = (s16) ((M2C_FIELD(&D_8011B4F8_ovl_01, u16 *, 2) + 0x800) & 0xFFF);
        }
        if (arg6 != NULL) {
            M2C_FIELD(&D_8011B4F8_ovl_01, u16 *, 4) = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), M2C_FIELD(arg6, s16 *, 0x2A), M2C_FIELD(arg6, s16 *, 0x32));
            M2C_FIELD(arg6, s32 *, 0x290) = (s32) (M2C_FIELD(arg6, s32 *, 0x290) | 0xC0000000);
            M2C_FIELD(arg6, s16 *, 0x294) = (s16) ((M2C_FIELD(&D_8011B4F8_ovl_01, u16 *, 4) + 0x800) & 0xFFF);
        }
    }
}
