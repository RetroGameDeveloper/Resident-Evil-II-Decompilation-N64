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

M2C_UNK func_8006CE20_ovl_01(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK D_800C4F20_ovl_01;
extern s32 D_800E91F4_ovl_01;
extern M2C_UNK D_80115380_ovl_01;
extern M2C_UNK D_801153A0_ovl_01;
extern M2C_UNK D_801153C0_ovl_01;

void func_80074FEC_ovl_01(s32 arg0) {
    M2C_UNK *var_v0;
    s32 temp_a2;
    s32 var_v1;
    u8 temp_a1;
    u8 temp_v1;
    u8 var_a3;
    void *temp_v1_2;

    temp_v1 = (M2C_FIELD(&D_801153C0_ovl_01, u8 *, 3) + 1) & 0xF;
    temp_a2 = temp_v1 * 2;
    M2C_FIELD(&D_801153C0_ovl_01, u8 *, 3) = temp_v1;
    if (arg0 == 1) {
        var_v0 = &D_80115380_ovl_01;
        var_a3 = *(temp_a2 + &D_80115380_ovl_01);
        var_v1 = temp_a2 + 1;
    } else {
        var_v0 = &D_801153A0_ovl_01;
        var_a3 = *(temp_a2 + &D_801153A0_ovl_01);
        var_v1 = temp_a2 + 1;
    }
    temp_a1 = *(var_v1 + var_v0);
    temp_v1_2 = (D_800E91F4_ovl_01 * 0x28) + &D_800C4F20_ovl_01;
    func_8006CE20_ovl_01(M2C_FIELD(temp_v1_2, s32 *, 0), M2C_FIELD(temp_v1_2, s32 *, 4), M2C_FIELD(temp_v1_2, s32 *, 8), M2C_FIELD(temp_v1_2, s32 *, 0xC), M2C_FIELD(temp_v1_2, s32 *, 0x10), M2C_FIELD(temp_v1_2, s32 *, 0x14), M2C_FIELD(temp_v1_2, s32 *, 0x18) - var_a3, M2C_FIELD(temp_v1_2, s32 *, 0x1C) - var_a3, M2C_FIELD(temp_v1_2, s32 *, 0x20) - temp_a1, M2C_FIELD(temp_v1_2, s32 *, 0x24) - temp_a1, 0, 0);
}
