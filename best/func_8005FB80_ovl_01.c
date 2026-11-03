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

s16 func_80032D44_ovl_01(s16, s16, s16, s16);       /* extern */
u32 func_80040BE4_ovl_01(s32, s32);                 /* extern */
s32 func_800608A8_ovl_01(s16, s16, s16, s32 *);     /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern void *D_800E1390_ovl_01;

void *func_8005FB80_ovl_01(void *arg0, s16 arg1, u32 arg2, s16 arg3) {
    s32 sp10;
    s16 temp_a0_2;
    s32 temp_a0;
    s32 temp_lo;
    s32 temp_v0;
    u32 temp_s2;
    u32 var_s4;
    void **var_s1;
    void *temp_s0;
    void *var_s5;
    void *var_v0;

    var_s5 = NULL;
    if (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A76) == 0) {
        return M2C_FIELD(&D_800C7650_ovl_01, void **, 0x18288);
    }
    var_s4 = arg2;
    var_s1 = &D_800E1390_ovl_01;
    do {
        temp_s0 = *var_s1;
        if ((M2C_FIELD(temp_s0, s32 *, 0) & 1) && !(M2C_FIELD(temp_s0, u16 *, 0x1AA) & 0xE000)) {
            temp_a0 = M2C_FIELD(arg0, s32 *, 0) - M2C_FIELD(temp_s0, s32 *, 0x28);
            temp_lo = temp_a0 * temp_a0;
            temp_v0 = M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(temp_s0, s32 *, 0x30);
            sp10 = temp_a0;
            temp_s2 = func_80040BE4_ovl_01(temp_lo + (temp_v0 * temp_v0), temp_lo);
            temp_a0_2 = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 2), M2C_FIELD(arg0, s16 *, 0xA), M2C_FIELD(temp_s0, s16 *, 0x2A), M2C_FIELD(temp_s0, s16 *, 0x32));
            if ((M2C_FIELD(temp_s0, s16 *, 0x1F2) >= 0) && (func_800608A8_ovl_01(temp_a0_2, arg1, arg3, &sp10) == 0) && (temp_s2 < var_s4)) {
                var_s4 = temp_s2;
                var_s5 = temp_s0;
            }
        }
        var_s1 += 4;
    } while (var_s1 != M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1828C));
    var_v0 = var_s5;
    if (var_s5 == NULL) {
        var_v0 = M2C_FIELD(&D_800C7650_ovl_01, void **, 0x18288);
    }
    return var_v0;
}
