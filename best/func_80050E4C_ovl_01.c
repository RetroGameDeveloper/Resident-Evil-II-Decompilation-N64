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

extern M2C_UNK D_800C7650_ovl_01;
extern s16 D_8010BF20_ovl_01;
extern s16 D_8010BF24_ovl_01;
extern u16 D_8010BF28_ovl_01;
extern u16 D_8010BF2C_ovl_01;

void func_80050E4C_ovl_01(void *arg0) {
    s16 temp_v0;
    s16 var_a0;

    temp_v0 = M2C_FIELD(arg0, u16 *, 0x2A) - M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19AAA);
    var_a0 = temp_v0;
    if (var_a0 < 0) {
        var_a0 = -var_a0;
    }
    if (var_a0 < 0x384) {
        D_8010BF20_ovl_01 = 0;
        D_8010BF24_ovl_01 = ((s32) ((M2C_FIELD(arg0, u16 *, 0x32) - M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19AB2)) << 0x10) >> 0x1F) | 1;
    } else {
        D_8010BF24_ovl_01 = 0;
        D_8010BF20_ovl_01 = ((s32) (temp_v0 << 0x10) >> 0x1F) | 1;
    }
    D_8010BF28_ovl_01 = M2C_FIELD(arg0, u16 *, 0x64);
    D_8010BF2C_ovl_01 = M2C_FIELD(arg0, u16 *, 0x68);
}
