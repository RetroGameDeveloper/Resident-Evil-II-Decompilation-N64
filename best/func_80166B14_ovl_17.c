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

s32 func_8006A45C_ovl_01(s32, void *);              /* extern */
extern void *D_800E1008;

s32 func_80166B14_ovl_17(void *arg0) {
    s32 temp_v0;
    void **var_s0;
    void *temp_s1;

    var_s0 = &D_800E1008;
    temp_s1 = arg0 + 0x2B4;
    if (D_800E1008 != NULL) {
loop_2:
        temp_v0 = func_8006A45C_ovl_01(arg0 + 0x28, *var_s0);
        M2C_FIELD(temp_s1, s16 *, 0xE) = (s16) (temp_v0 << 0xA);
        M2C_FIELD(temp_s1, void **, 0x10) = (void *) *var_s0;
        var_s0 += 4;
        if (((s16) (temp_v0 << 0xA) == ((M2C_FIELD(arg0, u16 *, 0x66) + 0x200) & 0xC00)) && ((u32) M2C_FIELD(M2C_FIELD(temp_s1, void **, 0x10), u32 *, 0xC) >= (u32) (-M2C_FIELD(arg0, s32 *, 0x2C) / 1800))) {
            return (temp_v0 & 0xFFFF) + 1;
        }
        if (*var_s0 == NULL) {
            goto block_6;
        }
        goto loop_2;
    }
block_6:
    return 0;
}
