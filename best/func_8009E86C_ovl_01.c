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

extern s16 D_801326D8_ovl_01;
extern u32 D_801326E0_ovl_01;
extern void *D_801326E8_ovl_01;

void func_8009E86C_ovl_01(s8 arg0, s32 arg1) {
    u32 var_a2;
    void *var_v1;

    var_v1 = D_801326E8_ovl_01;
    var_a2 = 0;
    do {
        if (((u32) D_801326E0_ovl_01 >> var_a2) & 1) {
            M2C_FIELD(var_v1, s8 *, 0) = arg0;
        } else if (arg1 & 0xFF) {
            M2C_FIELD(var_v1, s8 *, 0) = 0;
        }
        if (M2C_FIELD(var_v1, u8 *, 1) & 0x10) {
            M2C_FIELD(var_v1, s8 *, 0) = 0;
        }
        var_a2 += 1;
        var_v1 += 0xC;
    } while (var_a2 < (u32) D_801326D8_ovl_01);
}
