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

s32 func_800072E0(u32, void *);                     /* extern */
M2C_UNK func_80007300(s32);                         /* extern */
extern M2C_UNK D_801247F8_ovl_01;

void func_800853C8_ovl_01(u32 arg0, u32 arg1, u32 arg2) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_t1;
    u32 var_a2;
    u32 var_s0;
    void *temp_t0;
    void *var_a3;
    void *var_s1;

    var_a2 = arg2;
    var_a3 = &D_801247F8_ovl_01 + 0x24;
    var_s1 = NULL;
    var_s0 = -1U;
    var_t1 = 0;
    do {
        temp_t0 = &D_801247F8_ovl_01 + ((var_t1 >> 5) * 4);
        temp_v1 = 1 << (var_t1 & 0x1F);
        if (M2C_FIELD(temp_t0, s32 *, 0x14) & temp_v1) {
            var_a2 = M2C_FIELD(var_a3, u32 *, 4);
            if ((var_a2 >= arg0) && (var_a2 < arg1)) {
                M2C_FIELD(var_a3, u32 *, 4) = var_s0;
                var_s0 = (u32) var_t1;
                M2C_FIELD(var_a3, s32 *, 0) = (s32) (M2C_FIELD(var_a3, s32 *, 0) | 0xFF);
                M2C_FIELD(temp_t0, s32 *, 0x14) = (s32) (M2C_FIELD(temp_t0, s32 *, 0x14) & ~temp_v1);
                if (var_s1 == NULL) {
                    var_s1 = var_a3;
                }
                M2C_FIELD(&D_801247F8_ovl_01, s32 *, 0x10) = (s32) (M2C_FIELD(&D_801247F8_ovl_01, s32 *, 0x10) - 1);
            }
        }
        var_t1 += 1;
        var_a3 += 0x10;
    } while (var_t1 < 0x80);
    if ((s32) var_s0 >= 0) {
        temp_a0 = func_800072E0(var_a2, var_a3);
        M2C_FIELD(var_s1, u32 *, 4) = (u32) M2C_FIELD(&D_801247F8_ovl_01, u32 *, 4);
        M2C_FIELD(&D_801247F8_ovl_01, u32 *, 4) = var_s0;
        func_80007300(temp_a0);
    }
}
