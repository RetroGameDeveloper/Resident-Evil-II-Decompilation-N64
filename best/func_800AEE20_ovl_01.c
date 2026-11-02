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

M2C_UNK func_800A5AB4_ovl_01(s32);                  /* extern */
M2C_UNK func_800AE140_ovl_01(void *, s32);          /* extern */
M2C_UNK func_800AEB9C_ovl_01(void *);               /* extern */
extern u8 D_801362B0_ovl_01;
extern M2C_UNK D_801443E8;
extern void *D_801583D0;

s32 func_800AEE20_ovl_01(u32 arg0) {
    s32 temp_s2;
    s32 var_a0;
    s32 var_a1;
    s32 var_s1;
    u32 temp_v0;
    void *temp_s0;
    void *var_v0;
    void *var_v1;

    var_a1 = -1;
    if (D_801362B0_ovl_01 != 0) {
        if (arg0 != -1U) {
            var_v1 = D_801583D0;
            var_v0 = NULL;
            if (var_v1 != NULL) {
loop_3:
                temp_v0 = M2C_FIELD(var_v1, u32 *, 8);
                if (temp_v0 != arg0) {
                    var_v0 = NULL;
                    if (arg0 >= temp_v0) {
                        var_v1 = M2C_FIELD(var_v1, void **, 0);
                        if (var_v1 != NULL) {
                            goto loop_3;
                        }
                    }
                } else {
                    var_v0 = var_v1;
                }
            }
            var_a0 = -1;
            if (var_v0 != NULL) {
                var_a0 = M2C_FIELD(var_v0, s32 *, 0xC);
            }
        } else {
            var_a0 = -1;
        }
        if (var_a0 != -1) {
            var_s1 = var_a0 & 0xFF;
            do {
                temp_s0 = (var_s1 * 0x1A0) + &D_801443E8;
                temp_s2 = M2C_FIELD(temp_s0, s32 *, 0x10);
                if (M2C_FIELD(temp_s0, s32 *, 0x60) == var_a0) {
                    if (M2C_FIELD(temp_s0, s32 *, 0) != 0) {
                        func_800AE140_ovl_01(temp_s0, var_a1);
                        M2C_FIELD(temp_s0, s32 *, 0x28) = 0;
                        M2C_FIELD(temp_s0, s32 *, 0x24) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x24) & ~3);
                        func_800AEB9C_ovl_01(temp_s0);
                    }
                    func_800A5AB4_ovl_01(var_s1);
                    var_a1 = 0;
                }
                var_a0 = temp_s2;
                var_s1 = var_a0 & 0xFF;
            } while (var_a0 != -1);
        }
    }
    return var_a1;
}
