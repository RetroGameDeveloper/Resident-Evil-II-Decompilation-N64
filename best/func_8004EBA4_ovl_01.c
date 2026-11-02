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

M2C_UNK func_80083800_ovl_01(s16, u16 *, u16 *);    /* extern */

s32 func_8004EBA4_ovl_01(void *arg0, void *arg1) {
    u16 sp10;
    u16 sp14;
    s16 var_a1;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;

    sp14 = 0;
    sp10 = ((M2C_FIELD(arg0, u16 *, 0x136) * 0x87) / 100) + 0x80;
    func_80083800_ovl_01(M2C_FIELD(arg0, s16 *, 0x66), &sp10, &sp10);
    sp10 += M2C_FIELD(arg0, u16 *, 0x2A);
    sp14 += M2C_FIELD(arg0, u16 *, 0x32);
    temp_a1 = M2C_FIELD(arg1, s32 *, 0x28) - M2C_FIELD(arg0, s32 *, 0x28);
    temp_a0 = M2C_FIELD(arg1, s32 *, 0x30) - M2C_FIELD(arg0, s32 *, 0x30);
    temp_a2 = M2C_FIELD(arg1, u16 *, 0x12C) - 0x80;
    temp_a3 = M2C_FIELD(arg1, u16 *, 0x12E) - 0x80;
    if (((u32) (temp_a2 * 2) >= (u32) (temp_a1 + temp_a2)) || (var_v0 = 0, (((u32) (temp_a3 * 2) < (u32) (temp_a0 + temp_a3)) == 0))) {
        var_v1 = temp_a1;
        if (temp_a1 < 0) {
            var_v1 = -temp_a1;
        }
        var_v0_2 = temp_a0;
        if (temp_a0 < 0) {
            var_v0_2 = -temp_a0;
        }
        if (var_v0_2 < var_v1) {
            var_a1 = (s16) sp10;
            var_a0 = M2C_FIELD(arg0, s32 *, 0x30);
        } else {
            var_a1 = (s16) M2C_FIELD(arg0, s32 *, 0x28);
            var_a0 = (s32) (s16) sp14;
        }
        if ((u32) (temp_a2 * 2) < (u32) ((var_a1 - M2C_FIELD(arg1, s32 *, 0x120)) + temp_a2)) {
            return 0;
        }
        var_v0 = (u32) (temp_a3 * 2) >= (u32) ((var_a0 - M2C_FIELD(arg1, s32 *, 0x128)) + temp_a3);
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
