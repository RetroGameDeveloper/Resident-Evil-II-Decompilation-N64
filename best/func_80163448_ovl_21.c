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

s16 func_80032D44_ovl_01(M2C_UNK, M2C_UNK, s16, s16); /* extern */
s32 func_800408F0_ovl_01(s16);                      /* extern */
s32 func_80040998_ovl_01(s16);                      /* extern */
M2C_UNK func_80040E88_ovl_01(void *, s32);          /* extern */

void func_80163448_ovl_21(void *arg0) {
    s16 temp_v0;
    s32 var_v0;

    temp_v0 = func_80032D44_ovl_01(-0x6270, -0x708, M2C_FIELD(arg0, s16 *, 0x32), M2C_FIELD(arg0, s16 *, 0x2E));
    M2C_FIELD(arg0, s16 *, 0x2B4) = temp_v0;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (((s32) (func_800408F0_ovl_01(temp_v0) * 0x708) / 4096) - 0x6270);
    var_v0 = -(func_80040998_ovl_01(M2C_FIELD(arg0, s16 *, 0x2B4)) * 0x708);
    if (var_v0 < 0) {
        var_v0 += 0xFFF;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) ((var_v0 >> 0xC) - 0x708);
    M2C_FIELD(arg0, s16 *, 0x1DA) = 0xC00;
    M2C_FIELD(arg0, s16 *, 0x1DC) = (s16) (0xC00 - (u16) M2C_FIELD(arg0, s16 *, 0x2B4));
    func_80040E88_ovl_01(arg0 + 0x1D8, M2C_FIELD(arg0, s32 *, 0x70));
}
