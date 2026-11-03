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

s32 func_80033174_ovl_01(M2C_UNK *);                /* extern */
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80162870_ovl_23(S_func_80162870_ovl_23_arg0 *, s32, s32, s32, s32, s32, void *); /* extern */
M2C_UNK func_80162944_ovl_23(S_func_80162870_ovl_23_arg0 *, s32, s32, s32, s32, s32, void *); /* extern */
extern M2C_UNK D_800E10D0_ovl_01;
extern M2C_UNK D_801660B0_ovl_23;

s32 func_80162998_ovl_23(S_func_80162870_ovl_23_arg0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 var_s0;
    s32 var_s3;
    s32 var_v0;
    u32 var_s1;
    void *temp_t0;

    var_s3 = 0;
    var_s1 = 0x24;
    if (arg5 & 2) {
        if (func_80033174_ovl_01(&D_800E10D0_ovl_01) & 0xFF) {
            var_s3 = 0x12;
        }
        var_s1 = 0x12;
    }
    var_v0 = arg1;
    if (arg5 & 1) {
        var_s1 = 6;
        var_s3 += ((arg0->unk_26E % 3) & 0xFF) * 6;
        var_v0 = arg1;
    }
    var_s0 = arg1 - 1;
    if (var_v0 != 0) {
        do {
            temp_t0 = ((var_s3 + ((u32) (func_80033634_ovl_01() & 0xFF) % var_s1)) * 0xC) + &D_801660B0_ovl_23;
            if (arg5 & 4) {
                func_80162944_ovl_23(arg0, arg2, arg3, arg4, M2C_FIELD(arg0, s16 *, 0x66) + M2C_FIELD(temp_t0, s16 *, 6), M2C_FIELD(temp_t0, s32 *, 8), temp_t0);
                var_v0 = var_s0;
            } else {
                func_80162870_ovl_23(arg0, arg2, arg3, arg4, M2C_FIELD(arg0, s16 *, 0x66) + M2C_FIELD(temp_t0, s16 *, 6), M2C_FIELD(temp_t0, s32 *, 8), temp_t0);
                var_v0 = var_s0;
            }
            var_s0 -= 1;
        } while (var_v0 != 0);
    }
    return var_v0;
}
