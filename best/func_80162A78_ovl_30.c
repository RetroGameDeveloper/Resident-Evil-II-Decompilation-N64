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

M2C_UNK func_80167B58_ovl_30(void *, u8, M2C_UNK, M2C_UNK); /* extern */
extern u8 D_80167D3C_ovl_30;

void func_80162A78_ovl_30(void *arg0) {
    s32 *temp_v0;
    s32 var_a0;
    u32 var_s0;
    u32 var_s0_2;
    u8 *var_v0;

    var_s0 = 0;
    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x1AA) = (s16) M2C_FIELD(arg0, u8 *, 0x1AB);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~0x800);
    M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) & 0xFE);
    var_v0 = &D_80167D3C_ovl_30;
    do {
        var_s0 += 1;
        func_80167B58_ovl_30(arg0, *var_v0, 0, 0);
        var_v0 = &(&D_80167D3C_ovl_30)[var_s0];
    } while (var_s0 < 8U);
    var_s0_2 = 0x14;
    var_a0 = 0x1D60;
    do {
        var_s0_2 += 1;
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x234) + var_a0;
        *temp_v0 &= ~0x400;
        var_a0 += 0x178;
    } while (var_s0_2 < 0x17U);
    M2C_FIELD(arg0, s8 *, 0x2C4) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C5) = 1;
    M2C_FIELD(arg0, s8 *, 5) = 1;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) & 0x7F);
}
