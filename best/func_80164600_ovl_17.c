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

M2C_UNK func_80089D34_ovl_01(M2C_UNK);              /* extern */
s32 func_80166D98_ovl_17(void *, s32, u8);          /* extern */

void func_80164600_ovl_17(void *arg0) {
    s8 var_v0_2;
    u32 var_v0;

    func_80089D34_ovl_01(0x400);
    if (M2C_FIELD(arg0, u8 *, 0x2D3) != 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x290) & 0x3FFFFFFF;
    } else {
        var_v0 = M2C_FIELD(arg0, u32 *, 0x28C);
    }
    if ((var_v0 < 0x1C20U) || (func_80166D98_ovl_17(arg0, M2C_FIELD(arg0, s32 *, 0x2C4), M2C_FIELD(arg0, u8 *, 0x2CC)) != 0)) {
        if (M2C_FIELD(arg0, u8 *, 0x2D3) != 0) {
            var_v0_2 = 7;
            if ((u32) (M2C_FIELD(arg0, s32 *, 0x290) & 0x3FFFFFFF) >= 0xBB8U) {
                var_v0_2 = 3;
            }
        } else {
            var_v0_2 = 7;
            if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) >= 0xBB8U) {
                var_v0_2 = 3;
            }
        }
        M2C_FIELD(arg0, s8 *, 5) = var_v0_2;
        M2C_FIELD(arg0, s16 *, 6) = 0;
    }
}
