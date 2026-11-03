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

s32 func_80032EA4_ovl_01(s32, s32, M2C_UNK);        /* extern */
M2C_UNK func_80059E30_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80162404_ovl_32(void *arg0) {
    s32 temp_a0;
    u32 temp_s2;

    temp_s2 = M2C_FIELD(arg0, u32 *, 0x28C);
    temp_a0 = func_80032EA4_ovl_01(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AA8), M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AB0), 0x80);
    if ((M2C_FIELD(arg0, s32 *, 0x28) >= 0x2329) && (temp_s2 < 0x1770U) && ((temp_a0 << 0x10) == 0) && (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19CEF) == 0) && (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C72) <= 0) && !(M2C_FIELD(arg0, u16 *, 0x2C2) & 4)) {
        M2C_FIELD(arg0, s32 *, 4) = 0x01040000;
        func_80059E30_ovl_01(0x1F4, 0);
        M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19CEF) = (u8) (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19CEF) | 0x80);
        M2C_FIELD(arg0, s8 *, 0x2B4) = 4;
        M2C_FIELD(arg0, s8 *, 0x2B5) = 0;
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) | 0x100);
    }
}
