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

M2C_UNK func_80165BE8_ovl_13(M2C_UNK, u32);         /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_801621D4_ovl_13(void *arg0) {
    s32 var_a1;
    u16 temp_v0;
    u32 temp_a2;

    var_a1 = 0;
    if ((M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C72) >= 0) || (M2C_FIELD(arg0, s8 *, 0x2BD) > 0) || ((u32) M2C_FIELD(arg0, u32 *, 0x28C) >= 0x708U)) {
        temp_a2 = M2C_FIELD(arg0, u32 *, 0x28C);
        if (temp_a2 < 0x709U) {
            var_a1 = 1;
        }
        if ((M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A7A) & 4) && (temp_a2 < 0x1519U)) {
            var_a1 = 1;
        }
        if (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A7A) & 1) {
            var_a1 = 1;
        }
        if (M2C_FIELD(arg0, u16 *, 0x2C6) & 1) {
            temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
            M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
            if ((s16) temp_v0 == -1) {
                var_a1 = 1;
            }
        }
        if (var_a1 != 0) {
            func_80165BE8_ovl_13(1, temp_a2);
        }
    }
}
