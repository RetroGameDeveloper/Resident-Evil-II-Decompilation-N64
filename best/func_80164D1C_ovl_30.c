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

s32 func_80033634_ovl_01();                         /* extern */
s32 func_80164C84_ovl_30(void *, s32);              /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80164D1C_ovl_30(void *arg0) {
    u32 var_v1;

    if (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C72) >= 0) {
        var_v1 = 0x1C2;
        if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x20) {
            var_v1 = 0x177;
        }
        if ((M2C_FIELD(arg0, u8 *, 0x2C7) == 0) && (func_80164C84_ovl_30(arg0, (u32) M2C_FIELD(arg0, s16 *, 0x1F2) < var_v1) == 0) && ((0x1A0 >> (func_80033634_ovl_01() & 0xF)) & 1)) {
            M2C_FIELD(arg0, s8 *, 5) = 7;
            M2C_FIELD(arg0, s16 *, 6) = 0;
        }
    }
}
