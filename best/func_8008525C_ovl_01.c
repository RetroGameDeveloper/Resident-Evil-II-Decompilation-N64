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

s32 func_800072E0();                                /* extern */
M2C_UNK func_80007300(s32);                         /* extern */
extern M2C_UNK D_801247F8_ovl_01;

s32 func_8008525C_ovl_01(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_s0;
    void *temp_a0_2;
    void *temp_v1;

    temp_s0 = M2C_FIELD(&D_801247F8_ovl_01, s32 *, 4);
    temp_a0 = func_800072E0();
    if (temp_s0 >= 0) {
        M2C_FIELD(&D_801247F8_ovl_01, s32 *, 4) = (s32) M2C_FIELD(((temp_s0 * 0x10) + &D_801247F8_ovl_01), s32 *, 0x28);
    }
    func_80007300(temp_a0);
    temp_a0_2 = ((temp_s0 >> 5) * 4) + &D_801247F8_ovl_01;
    M2C_FIELD(temp_a0_2, s32 *, 0x14) = (s32) (M2C_FIELD(temp_a0_2, s32 *, 0x14) | (1 << (temp_s0 & 0x1F)));
    temp_v1 = (temp_s0 * 0x10) + &D_801247F8_ovl_01;
    M2C_FIELD(temp_v1, s32 *, 0x28) = arg0;
    M2C_FIELD(temp_v1, s32 *, 0x30) = arg1;
    M2C_FIELD(temp_v1, s32 *, 0x2C) = 0;
    M2C_FIELD(temp_v1, s32 *, 0x24) = (s32) (temp_s0 | (M2C_FIELD(&D_801247F8_ovl_01, s32 *, 0) << 8));
    M2C_FIELD(&D_801247F8_ovl_01, s32 *, 0) = (s32) (M2C_FIELD(&D_801247F8_ovl_01, s32 *, 0) + 1);
    M2C_FIELD(&D_801247F8_ovl_01, s32 *, 0x10) = (s32) (M2C_FIELD(&D_801247F8_ovl_01, s32 *, 0x10) + 1);
    return M2C_FIELD(temp_v1, s32 *, 0x24);
}
