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
extern s16 D_800E10DA_ovl_01;
extern M2C_UNK D_800E1898_ovl_01;

void func_8006D3B4_ovl_01(void) {
    M2C_UNK *var_a0;
    s16 *var_a1;
    void *temp_v1;
    void *temp_v1_2;

    var_a1 = &D_800E10DA_ovl_01 + 0x2B6;
    D_800E10DA_ovl_01 = 0xFFFF;
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1828C) != var_a1) {
        do {
            temp_v1 = *var_a1;
            if (M2C_FIELD(temp_v1, s32 *, 0) & 1) {
                M2C_FIELD(temp_v1, s16 *, 0xA) = 0xFFFF;
            }
            var_a1 += 4;
        } while (var_a1 != M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1828C));
    }
    var_a0 = &D_800E1898_ovl_01;
    temp_v1_2 = (M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), u8 *, 2) * 0x368) + &D_800E1898_ovl_01;
    if ((u32) &D_800E1898_ovl_01 < (u32) temp_v1_2) {
        do {
            if (M2C_FIELD(var_a0, s32 *, 0) & 1) {
                M2C_FIELD(var_a0, s16 *, 0xA) = 0xFFFF;
            }
            var_a0 += 0x368;
        } while ((u32) var_a0 < (u32) temp_v1_2);
    }
}
