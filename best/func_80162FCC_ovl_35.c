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
s32 func_80032EA4_ovl_01(void *, s16, s16, s8);     /* extern */
M2C_UNK func_80065400_ovl_01(void *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800E10D0_ovl_01;
extern M2C_UNK D_80166664_ovl_35;

void func_80162FCC_ovl_35(void *arg0) {
    s16 temp_a0;
    s16 var_v0;
    s32 temp_v0;
    u16 var_a0;
    void *temp_s2;

    temp_s2 = arg0 + 0x2B4;
    func_80065400_ovl_01(&D_800E10D0_ovl_01 + 0x28, 0, 0);
    temp_a0 = M2C_FIELD(arg0, s16 *, 0x66);
    temp_v0 = func_80032EA4_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), M2C_FIELD(temp_s2, s8 *, 0xB)) << 0x10;
    if (M2C_FIELD(&D_800E10D0_ovl_01, s16 *, 0x1F2) >= 0) {
        var_v0 = temp_a0 + (temp_v0 >> 0x10);
    } else {
        var_v0 = temp_a0 - (temp_v0 >> 0x10);
    }
    M2C_FIELD(arg0, s16 *, 0x66) = var_v0;
    M2C_FIELD(arg0, u16 *, 0x64) = (u16) *((M2C_FIELD(arg0, u16 *, 0x1F4) & 0xE) + &D_80166664_ovl_35);
    var_a0 = 0x4B;
    if (M2C_FIELD(temp_s2, u8 *, 9) & 1) {
        var_a0 = 0x32;
    }
    M2C_FIELD(arg0, u16 *, 0x1E0) = var_a0;
    if (!(*M2C_FIELD(arg0, s32 **, 0x214) & 0x10000)) {
        M2C_FIELD(arg0, u16 *, 0x1E0) = (u16) (var_a0 >> 1);
    }
    func_80032B8C_ovl_01(arg0, 0);
}
