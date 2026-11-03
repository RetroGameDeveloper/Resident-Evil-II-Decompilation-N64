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

M2C_UNK func_800AC5B4_ovl_01(M2C_UNK, s32, u8, s32); /* extern */
s32 func_800AF074_ovl_01();                         /* extern */
extern M2C_UNK D_801443E8;

s32 func_800A77F4_ovl_01(s32 arg1) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 var_a1;
    s32 var_s0;
    s32 var_v0;
    s32 var_v1;
    u32 temp_s4;
    u8 var_a2;
    void *temp_s2;

    var_s0 = -1;
    var_v1 = func_800AF074_ovl_01();
    if (var_v1 != -1) {
        temp_s4 = (u32) (arg1 & 0xFFFF) >> 7;
loop_2:
        temp_s1 = var_v1 & 0xFF;
        temp_s2 = (temp_s1 * 0x1A0) + &D_801443E8;
        var_v0 = var_s0;
        if (M2C_FIELD(temp_s2, s32 *, 0x60) == var_v1) {
            if (M2C_FIELD(temp_s2, s32 *, 0x24) & 2) {
                temp_s0 = temp_s1 & 0xFF;
                func_800AC5B4_ovl_01(0x84, temp_s0, M2C_FIELD(temp_s2, u8 *, 0x55), temp_s4 & 0xFF);
                var_a2 = M2C_FIELD(temp_s2, u8 *, 0x55);
                var_a1 = temp_s0;
            } else {
                temp_s0_2 = temp_s1 & 0xFF;
                func_800AC5B4_ovl_01(0x84, temp_s0_2, M2C_FIELD(temp_s2, u8 *, 0x4B), temp_s4 & 0xFF);
                var_a1 = temp_s0_2;
                var_a2 = M2C_FIELD(temp_s2, u8 *, 0x4B);
            }
            func_800AC5B4_ovl_01(0x85, var_a1, var_a2, arg1 & 0x7F & 0xFF);
            var_v1 = M2C_FIELD(((temp_s1 * 0x1A0) + &D_801443E8), s32 *, 0x10);
            var_s0 = 0;
            if (var_v1 == -1) {
                goto block_7;
            }
            goto loop_2;
        }
    } else {
block_7:
        var_v0 = var_s0;
    }
    return var_v0;
}
