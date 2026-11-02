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

M2C_UNK func_800736E0_ovl_01(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;
extern M2C_UNK D_800E1898_ovl_01;

void func_80074C18_ovl_01(void) {
    M2C_UNK **var_s1;
    M2C_UNK *temp_s0;
    M2C_UNK *var_s0;
    void *temp_s1;

    if (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C72) >= 0) {
        M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C28) = 0;
        if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & 0x200000) {
            func_800736E0_ovl_01(&D_800E10D0_ovl_01, 1, 0x10);
        }
        func_800736E0_ovl_01(&D_800E10D0_ovl_01, 1, 0);
        var_s1 = &D_800E10D0_ovl_01 + 0x2C0;
        if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1828C) != var_s1) {
            do {
                temp_s0 = *var_s1;
                if (M2C_FIELD(temp_s0, s32 *, 0) & 1) {
                    M2C_FIELD(temp_s0, s16 *, 0x1A8) = 0;
                    func_800736E0_ovl_01(temp_s0, 2, 0);
                }
                var_s1 += 4;
            } while (var_s1 != M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1828C));
        }
        var_s0 = &D_800E1898_ovl_01;
        temp_s1 = (M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), u8 *, 2) * 0x368) + &D_800E1898_ovl_01;
        if ((u32) &D_800E1898_ovl_01 < (u32) temp_s1) {
            do {
                if (M2C_FIELD(var_s0, s32 *, 0) & 1) {
                    M2C_FIELD(var_s0, s16 *, 0x1A8) = 0;
                    func_800736E0_ovl_01(var_s0, 4, 0);
                }
                var_s0 += 0x368;
            } while ((u32) var_s0 < (u32) temp_s1);
        }
        if (M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, M2C_UNK **, 0x19D3C), s32 *, 0) & 1) {
            M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, M2C_UNK **, 0x19D3C), s16 *, 0x1A8) = 0;
            func_800736E0_ovl_01(M2C_FIELD(&D_800C7650_ovl_01, M2C_UNK **, 0x19D3C), 8, 0);
        }
    }
}
