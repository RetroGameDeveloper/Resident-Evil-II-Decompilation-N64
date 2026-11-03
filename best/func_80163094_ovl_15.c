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

s32 func_80040BE4_ovl_01(s32, s32);                 /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern s32 D_800E10D4_ovl_01;

void func_80163094_ovl_15(void *arg0) {
    s32 temp_lo;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0x234);
    if (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19CEF) == 0) {
        temp_v0 = M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AA8) - M2C_FIELD(temp_a0, s32 *, 0x4C);
        temp_lo = temp_v0 * temp_v0;
        temp_v0_2 = M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AB0) - M2C_FIELD(temp_a0, s32 *, 0x54);
        if (func_80040BE4_ovl_01(temp_lo + (temp_v0_2 * temp_v0_2), temp_lo) < 0x1450) {
            M2C_FIELD(arg0, s8 *, 0x2C8) = 8;
            M2C_FIELD(arg0, u16 *, 0x2B4) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B4) | 2);
            M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19CD0) = arg0;
            D_800E10D4_ovl_01 = 0x05010000;
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x100A);
            M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C72) = -1;
            M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A80) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A80) | 0x1008);
            M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19CEF) = (u8) (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19CEF) | 0x80);
        }
    }
}
