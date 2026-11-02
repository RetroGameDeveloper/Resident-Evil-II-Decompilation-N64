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

extern M2C_UNK D_800C7650_ovl_01;
extern void *D_800E1390_ovl_01;

void func_8016600C_ovl_13(s32 arg0) {
    u16 temp_a1;
    void **var_a0;
    void *temp_v1;

    var_a0 = &D_800E1390_ovl_01;
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1828C) != &D_800E1390_ovl_01) {
        do {
            temp_v1 = *var_a0;
            if (M2C_FIELD(temp_v1, u8 *, 8) == 0x21) {
                temp_a1 = M2C_FIELD(temp_v1, u16 *, 0x2C6);
                if (!(temp_a1 & 4)) {
                    M2C_FIELD(temp_v1, u16 *, 0x2C6) = (u16) (temp_a1 | arg0);
                    M2C_FIELD(temp_v1, s8 *, 0x2BC) = 0;
                    M2C_FIELD(temp_v1, s8 *, 0x2BB) = 0;
                }
            }
            var_a0 += 4;
        } while (var_a0 != M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1828C));
    }
}
