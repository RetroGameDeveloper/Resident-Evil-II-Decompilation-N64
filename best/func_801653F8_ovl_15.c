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
M2C_UNK func_80165D3C_ovl_15(s32, M2C_UNK, M2C_UNK, s32, s32, s32, void *); /* extern */
extern M2C_UNK D_80166054_ovl_15;

void func_801653F8_ovl_15(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5) {
    s32 var_s1;
    s32 var_v0;
    void *temp_s0;

    var_s1 = arg1 - 1;
    if (arg1 != 0) {
        do {
            if (arg5 != 0) {
                var_v0 = ((func_80033634_ovl_01() & 0xFF) % 24) & 0xFF;
            } else {
                var_v0 = func_80033634_ovl_01() & 7;
            }
            temp_s0 = (var_v0 * 0xC) + &D_80166054_ovl_15;
            var_s1 -= 1;
            func_80165D3C_ovl_15(arg0, arg2, arg3, arg4, M2C_FIELD(temp_s0, s16 *, 6) + ((s32) (func_80033634_ovl_01() << 0x18) >> 0x14), M2C_FIELD(temp_s0, s32 *, 8), temp_s0);
        } while (var_s1 != -1);
    }
}
