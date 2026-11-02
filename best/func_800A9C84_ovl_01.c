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

extern s32 D_801484D0;
extern u8 D_80148650;
extern M2C_UNK D_801489F0;
extern u8 D_80148B70;

void func_800A9C84_ovl_01(void *arg0, f32 arg1) {
    M2C_UNK *var_a0;
    M2C_UNK *var_a2;
    s32 *var_v1;
    s32 var_a1;
    u8 temp_v1;
    void *temp_v0;
    void *temp_v0_2;

    var_a1 = 0;
    if (D_80148650 != 0) {
        var_v1 = &D_801484D0;
loop_2:
        if (M2C_FIELD(arg0, s32 *, 0x38) != *var_v1) {
            var_a1 += 1;
            var_v1 += 0xC;
            if (var_a1 < (s32) D_80148650) {
                goto loop_2;
            }
        }
    }
    if (var_a1 == D_80148650) {
        temp_v0 = (var_a1 * 0xC) + &D_801484D0;
        M2C_FIELD(temp_v0, s32 *, 4) = 0;
        M2C_FIELD(temp_v0, s32 *, 8) = 0;
        D_80148650 = var_a1 + 1;
        M2C_FIELD(temp_v0, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x38);
    }
    var_a2 = M2C_FIELD(((var_a1 * 0xC) + &D_801484D0), void ***, 8);
    var_a0 = NULL;
    if (var_a2 != NULL) {
loop_7:
        if (!(arg1 < M2C_FIELD(var_a2, f32 *, 4))) {
            var_a0 = var_a2;
            var_a2 = M2C_FIELD(var_a2, M2C_UNK **, 0);
            if (var_a2 != NULL) {
                goto loop_7;
            }
        }
    }
    if (var_a0 == NULL) {
        M2C_FIELD(((var_a1 * 0xC) + &D_801484D0), void **, 8) = (void *) ((D_80148B70 * 0xC) + &D_801489F0);
    } else {
        *var_a0 = (D_80148B70 * 0xC) + &D_801489F0;
    }
    temp_v1 = D_80148B70;
    temp_v0_2 = (temp_v1 * 0xC) + &D_801489F0;
    M2C_FIELD(temp_v0_2, M2C_UNK **, 0) = var_a2;
    M2C_FIELD(temp_v0_2, void **, 8) = arg0;
    D_80148B70 = temp_v1 + 1;
    M2C_FIELD(((temp_v1 * 0xC) + &D_801489F0), f32 *, 4) = arg1;
}
