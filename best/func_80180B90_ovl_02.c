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

M2C_UNK func_8004D060_ovl_01(s32);                  /* extern */
extern s32 D_8010B670_ovl_01;
extern void **D_80185418_ovl_02;

u32 func_80180B90_ovl_02(void) {
    s32 var_v0_2;
    s32 var_v0_3;
    u32 temp_a0;
    u32 temp_a1;
    u32 temp_t0;
    u32 temp_t1;
    u32 var_a3;
    u32 var_v0;
    void *temp_a2;
    void *var_v1;

    func_8004D060_ovl_01(D_8010B670_ovl_01);
    temp_a2 = *D_80185418_ovl_02;
    temp_t1 = M2C_FIELD(temp_a2, u32 *, 0xC);
    temp_t0 = M2C_FIELD(temp_a2, u32 *, 8);
    var_a3 = 0;
loop_1:
    var_v0 = 0;
    if (temp_t1 != temp_t0) {
        var_v0 = temp_t1 - temp_t0;
        if (temp_t0 >= temp_t1) {
            var_v0 = M2C_FIELD(temp_a2, s32 *, 0) - (temp_t0 - temp_t1);
        }
    }
    var_v1 = NULL;
    if (var_v0 >= var_a3) {
        temp_a1 = M2C_FIELD(temp_a2, u32 *, 0xC);
        temp_a0 = var_a3 + 1;
        if (temp_a1 < temp_a0) {
            var_v0_2 = M2C_FIELD(temp_a2, s32 *, 0) - (temp_a0 - temp_a1);
        } else {
            var_v0_2 = temp_a1 - temp_a0;
        }
        var_v1 = M2C_FIELD(temp_a2, s32 *, 4) + (var_v0_2 * 4);
    }
    if (var_v1 != NULL) {
        var_v0_3 = M2C_FIELD(var_v1, u16 *, 2) & 0x1000 & 0xFFFF;
    } else {
        var_v0_3 = 0;
    }
    if (var_v0_3 != 0) {
        var_a3 += 1;
        goto loop_1;
    }
    return var_a3;
}
