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

s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80165140_ovl_35(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80166324_ovl_35(void *, M2C_UNK, s32); /* extern */

void func_801654AC_ovl_35(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_v1;
    u32 var_s0;
    u32 var_s0_2;
    u32 var_s0_3;

    if (M2C_FIELD(arg0, u8 *, 0x2BD) & 1) {
        var_s0 = 0;
        do {
            var_s0 += 1;
            func_80166324_ovl_35(arg0, 4, func_80033634_ovl_01() & 7);
            func_80166324_ovl_35(arg0, 3, func_80033634_ovl_01() & 7);
        } while (var_s0 < 4U);
    }
    var_s0_2 = 0;
    do {
        func_80166324_ovl_35(arg0, 4, var_s0_2 + 0xC);
        var_s0_2 += 1;
    } while (var_s0_2 < 4U);
    var_s0_3 = 0;
    var_v1 = 0;
    do {
        var_s0_3 += 1;
        M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x234) + var_v1), s32 *, 0x60) = 0x3F3F3F;
        var_v1 += 0x178;
    } while (var_s0_3 < 0xDU);
    func_80165140_ovl_35(arg0, arg1, arg2);
}
