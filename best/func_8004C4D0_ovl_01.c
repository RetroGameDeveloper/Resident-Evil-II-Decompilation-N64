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

void *func_8004C594_ovl_01(void *, s32, void *);    /* extern */
void *func_8004C73C_ovl_01(void *, s32, void *);    /* extern */
s16 func_800844FC_ovl_01(s16);                      /* extern */

void func_8004C4D0_ovl_01(void *arg0) {
    s16 temp_s1;
    s32 temp_s1_2;
    u32 temp_a0;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;
    void *var_s0;

    temp_a0 = M2C_FIELD(arg0, u32 *, 0xD008);
    temp_v0 = arg0 + 0xC808;
    var_s0 = temp_v0;
    if (temp_a0 != temp_v0) {
        do {
            temp_s0 = var_s0 + 2;
            temp_s1 = func_800844FC_ovl_01(M2C_FIELD(var_s0, s16 *, 0));
            temp_s0_2 = temp_s0 + 2;
            temp_s1_2 = temp_s1 + (func_800844FC_ovl_01(M2C_FIELD(var_s0, s16 *, 2)) << 0x10);
            if (func_800844FC_ovl_01(M2C_FIELD(temp_s0, s16 *, 2)) & 0x200) {
                var_s0 = func_8004C73C_ovl_01(temp_s0_2, temp_s1_2, arg0);
            } else {
                var_s0 = func_8004C594_ovl_01(temp_s0_2, temp_s1_2, arg0);
            }
        } while ((u32) var_s0 < temp_a0);
    }
}
