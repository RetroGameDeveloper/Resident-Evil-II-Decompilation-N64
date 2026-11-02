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

M2C_UNK func_80032B8C_ovl_01(void *, M2C_UNK);      /* extern */
M2C_UNK func_80032DEC_ovl_01(void *, s16, s16, s16); /* extern */
s32 func_80040BE4_ovl_01(s32);                      /* extern */
M2C_UNK func_80077F60_ovl_01(M2C_UNK, s32, void *); /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

s32 func_80081E18_ovl_01(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 var_v0;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    void *var_v1;

    func_80032DEC_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), (s16) ((1 - (((u16) M2C_FIELD(arg0, u16 *, 0x1E0) >> 0xF) * 2)) * M2C_FIELD(arg0, s16 *, 0x270)));
    func_80032B8C_ovl_01(arg0, 0);
    temp_a1 = *M2C_FIELD(arg0, s32 **, 0x214);
    if (temp_a1 & 0x4000) {
        if (M2C_FIELD(arg0, u8 *, 5) != 5) {
            func_80077F60_ovl_01(0, (((u32) (temp_a1 & 0x2000) >> 0xD) * 3) + 4, arg0);
            var_v1 = &D_800C7650_ovl_01 + 0x18000;
            var_v0 = M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A7A) | 2;
        } else {
            func_80077F60_ovl_01(1, (((u32) (temp_a1 & 0x2000) >> 0xD) * 3) + 4, arg0);
            var_v1 = &D_800C7650_ovl_01 + 0x18000;
            var_v0 = M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A7A) | 4;
        }
        M2C_FIELD(var_v1, s16 *, 0x1A7A) = var_v0;
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x28) - M2C_FIELD(arg0, s16 *, 0x260);
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x30) - M2C_FIELD(arg0, s16 *, 0x262);
    return func_80040BE4_ovl_01((temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2)) < 0x64;
}
