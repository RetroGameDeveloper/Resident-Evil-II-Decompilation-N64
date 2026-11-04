/* machine draft (m2c) for gcc-2.7.2-kmc -O2 -mips3 -G0 -mgp32 -mfp32 -mcpu=r4600, tried by autopilot */
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

s32 func_80162C10_ovl_18(void *, void *);           /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;

void func_80162164_ovl_18(void *arg0, void *arg1) {
    M2C_UNK *var_v0;
    s32 temp_v0;
    s8 var_a0;
    u16 temp_v0_2;
    u8 temp_a0;
    u8 temp_v1;
    void *var_a1;

    var_a1 = arg1;
    temp_v1 = M2C_FIELD(arg0, u8 *, 7);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        temp_a0 = M2C_FIELD(arg0, u8 *, 0x2BD);
        temp_v0 = (func_80033634_ovl_01() & 0xFF) + 0x1E;
        M2C_FIELD(arg0, u8 *, 0x2BD) = 0U;
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) (temp_v0 & ((temp_a0 * 0x1E) + 0x3F));
        var_a0 = 0x40;
        if ((0x1111 >> (func_80033634_ovl_01() & 0xF)) & 1) {
            var_a0 = -0x40;
        }
        var_a1 = &D_800C7650_ovl_01 + 0x18000;
        M2C_FIELD(arg0, s8 *, 0x2BF) = var_a0;
        if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & 0x10000000) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) < (u32) (M2C_FIELD(arg0, s32 *, 0x290) & 0x3FFFFFFF)) {
                var_v0 = &D_800E10D0_ovl_01;
            } else {
                var_v0 = M2C_FIELD(&D_800C7650_ovl_01, M2C_UNK **, 0x19D3C);
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x2B4) = var_v0;
        }
        /* fallthrough */
    case 1:
        temp_v0_2 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0_2;
        if ((s16) temp_v0_2 == -1) {
            M2C_FIELD(arg0, s16 *, 6) = 0x100;
        }
        break;
    }
    if (func_80162C10_ovl_18(arg0, var_a1) == 0) {
        M2C_FIELD(arg0, s8 *, 5) = 2;
        M2C_FIELD(arg0, s16 *, 6) = 0;
    }
}
