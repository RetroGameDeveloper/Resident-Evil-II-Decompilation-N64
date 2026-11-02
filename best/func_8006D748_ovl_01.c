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

M2C_UNK func_8004FC64_ovl_01(u32, u8 *);            /* extern */
M2C_UNK func_8004FC6C_ovl_01(u32, u8 *);            /* extern */
extern u8 D_8010BBD4_ovl_01;

void func_8006D748_ovl_01(void) {
    u32 var_s1;
    u8 *var_s0;
    u8 temp_s2;
    u8 temp_v1;

    temp_s2 = M2C_FIELD(&D_8010BBD4_ovl_01, u8 *, 0x34A);
    var_s1 = 0;
    if (temp_s2 != 0) {
        var_s0 = &D_8010BBD4_ovl_01;
        do {
            temp_v1 = *var_s0;
            if (temp_v1 & 0x80) {
                func_8004FC64_ovl_01(var_s1, var_s0);
                var_s0 += 0x1C;
            } else {
                if (temp_v1 & 0x40) {
                    func_8004FC6C_ovl_01(var_s1, var_s0);
                }
                var_s0 += 0x1C;
            }
            var_s1 += 1;
        } while (var_s1 < temp_s2);
    }
}
