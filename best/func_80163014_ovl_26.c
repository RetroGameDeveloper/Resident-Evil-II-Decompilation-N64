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
s32 func_80089D34_ovl_01(void *, M2C_UNK);          /* extern */
M2C_UNK func_80162F18_ovl_26(void *);               /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_80167218_ovl_26;

void func_80163014_ovl_26(void *arg0) {
    s16 temp_v1;
    s16 var_v0;

    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 2);
        M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) = (u16) (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) & 0xFFBF);
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (((M2C_FIELD(arg0, u8 *, 0x2CD) * 0xD) + 5) << 0x18);
    }
    temp_v1 = M2C_FIELD(arg0, s16 *, 0x130);
    var_v0 = temp_v1 + 0x2B;
    if (M2C_FIELD((arg0 + 0x2B4), u8 *, 0x19) == 0) {
        var_v0 = temp_v1 - 0x2B;
    }
    M2C_FIELD(arg0, s16 *, 0x130) = var_v0;
    if (func_80089D34_ovl_01(arg0, 0x40) != 0) {
        M2C_FIELD(arg0, u8 *, 0x2BC) = (u8) *((func_80033634_ovl_01() & 7) + &D_80167218_ovl_26);
        func_80162F18_ovl_26(arg0);
    }
}
