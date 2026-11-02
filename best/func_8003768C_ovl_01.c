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

s32 func_800844FC_ovl_01(s16);                      /* extern */
u32 func_80084514_ovl_01(s32);                      /* extern */
extern u8 D_800EBB38_ovl_01;
extern M2C_UNK D_800EBB48_ovl_01;

void func_8003768C_ovl_01(void) {
    s16 *temp_s1;
    u32 var_a0;
    u32 var_a0_2;
    u8 *var_s3;
    u8 *var_v1;
    u8 temp_v1;
    u8 var_s2;
    void *temp_s0;
    void *var_s0;
    void *var_v0;

    var_s3 = &D_800EBB38_ovl_01;
    var_v0 = &D_800EBB38_ovl_01 + 8;
loop_1:
    if (((u32) var_s3 < (u32) var_v0) || (*var_s3 != 0xFF)) {
        temp_s1 = *((*var_s3 * 4) + &D_800EBB48_ovl_01);
        var_s2 = 0x7FFFFFFF;
        var_s0 = temp_s1 + (((s32) (func_800844FC_ovl_01(*temp_s1) << 0x10) >> 0xD) + 8);
        var_a0 = func_80084514_ovl_01((s32) *temp_s1) >> 0x10;
        do {
            temp_v1 = M2C_FIELD(var_s0, u8 *, 1);
            var_a0 -= 1;
            if (temp_v1 < var_s2) {
                var_s2 = temp_v1;
            }
            var_s0 += 4;
        } while (var_a0 != 0);
        temp_s0 = temp_s1 + (((s32) (func_800844FC_ovl_01(*temp_s1) << 0x10) >> 0xD) + 8);
        var_a0_2 = func_80084514_ovl_01((s32) *temp_s1) >> 0x10;
        var_v1 = temp_s0 + 1;
        do {
            var_a0_2 -= 1;
            *var_v1 -= var_s2;
            var_v1 += 4;
        } while (var_a0_2 != 0);
        var_s3 += 1;
        var_v0 = &D_800EBB38_ovl_01 + 8;
        if ((u32) var_s3 < (u32) (&D_800EBB38_ovl_01 + 0x10)) {
            goto loop_1;
        }
    }
}
