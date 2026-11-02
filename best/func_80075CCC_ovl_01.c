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

M2C_UNK func_800755F0_ovl_01(u32, M2C_UNK, s8 *);   /* extern */
M2C_UNK func_80078B70_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_80078B8C_ovl_01(s8);                   /* extern */
M2C_UNK func_800790D4_ovl_01(s8);                   /* extern */
s32 func_80079448_ovl_01(s8, M2C_UNK);              /* extern */
M2C_UNK func_800B1FCC_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_80119E18_ovl_01;
extern s8 D_80119E48_ovl_01;
extern M2C_UNK D_80119E84_ovl_01;
extern s8 D_8011A22E_ovl_01;
extern s32 D_8011A230_ovl_01;

void func_80075CCC_ovl_01(void) {
    M2C_UNK *var_s0;
    s8 *var_v1;
    s8 temp_a0;
    u32 var_a0;

    func_800B1FCC_ovl_01(0x7F, 0, 0xFF);
    var_s0 = &D_80119E84_ovl_01;
    D_8011A230_ovl_01 = 0;
    D_80119E18_ovl_01 = 0;
    D_8011A22E_ovl_01 = 0;
    do {
        if (M2C_FIELD(var_s0, u8 *, 0) != 0) {
            if ((func_80079448_ovl_01(M2C_FIELD(var_s0, s8 *, 2), 0) << 0x10) != 0) {
                func_800790D4_ovl_01(M2C_FIELD(var_s0, s8 *, 2));
            }
            M2C_FIELD(var_s0, u8 *, 0) = 0U;
        }
        temp_a0 = M2C_FIELD(var_s0, s8 *, 2);
        if (temp_a0 >= 0) {
            func_80078B8C_ovl_01(temp_a0);
            M2C_FIELD(var_s0, s8 *, 2) = -1;
        }
        var_s0 += 8;
    } while ((u32) var_s0 < (u32) (&D_80119E84_ovl_01 + 0x18));
    func_80078B70_ovl_01(0);
    var_a0 = 0;
    var_v1 = &D_80119E48_ovl_01;
    do {
        if (*var_v1 >= 0) {
            *var_v1 = -1;
        }
        var_a0 += 1;
        var_v1 = &(&D_80119E48_ovl_01)[var_a0];
    } while (var_a0 < 8U);
    func_800755F0_ovl_01(var_a0, -1, &D_80119E48_ovl_01);
}
