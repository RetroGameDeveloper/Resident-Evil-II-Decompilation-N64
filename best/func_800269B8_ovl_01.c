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

M2C_UNK func_80026954_ovl_01(s32, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK D_800C4F20_ovl_01;
extern s32 D_800E90B0_ovl_01;
extern s32 D_80113790_ovl_01;
extern s32 D_80113794_ovl_01;

void func_800269B8_ovl_01(s32 arg0) {
    s32 var_t0;
    u32 temp_lo;
    void *temp_v0;
    void *var_a2;

    var_t0 = arg0;
    var_a2 = (var_t0 * 0x28) + &D_800C4F20_ovl_01;
    temp_lo = D_80113790_ovl_01 * D_80113794_ovl_01;
    if (temp_lo < (u32) (((M2C_FIELD(var_a2, s32 *, 0) - M2C_FIELD(var_a2, s32 *, 0xC)) - M2C_FIELD(var_a2, s32 *, 8)) * ((M2C_FIELD(var_a2, s32 *, 4) - M2C_FIELD(var_a2, s32 *, 0x14)) - M2C_FIELD(var_a2, s32 *, 0x10)))) {
        do {
            var_a2 -= 0x28;
            var_t0 -= 1;
        } while (temp_lo < (u32) (((M2C_FIELD(var_a2, s32 *, 0) - M2C_FIELD(var_a2, s32 *, 0xC)) - M2C_FIELD(var_a2, s32 *, 8)) * ((M2C_FIELD(var_a2, s32 *, 4) - M2C_FIELD(var_a2, s32 *, 0x14)) - M2C_FIELD(var_a2, s32 *, 0x10))));
    }
    temp_v0 = (var_t0 * 0x28) + &D_800C4F20_ovl_01;
    D_800E90B0_ovl_01 = var_t0;
    func_80026954_ovl_01(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, s32 *, 4), M2C_FIELD(temp_v0, s32 *, 8), M2C_FIELD(temp_v0, s32 *, 0xC), M2C_FIELD(temp_v0, s32 *, 0x10), M2C_FIELD(temp_v0, s32 *, 0x14));
}
