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

M2C_UNK func_80032B8C_ovl_01(M2C_UNK *, s32);       /* extern */
s16 func_80032D44_ovl_01(s16, s16, s16, s16);       /* extern */
s32 func_80032EA4_ovl_01(M2C_UNK *, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *, s32, M2C_UNK *); /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;

void func_801639F0_ovl_26(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_a2;
    s32 temp_v0;
    s32 var_s2;
    s32 var_v0;

    var_s2 = 0;
    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, s8 *, 0x2C1) = 5;
        M2C_FIELD(arg0, s8 *, 0x2C3) = 3;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 2);
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 2);
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((M2C_FIELD(arg0, u8 *, 0x2CD) * 0x0D000000) + 0x3F00);
        M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) = (u16) (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) | 0x40);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~4);
        M2C_FIELD(&D_800E10D0_ovl_01, void **, 0x250) = arg0;
        M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 4) = 0x06000000;
        M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 0x224) = (s32) M2C_FIELD(arg0, s32 *, 0x224);
        temp_a2 = M2C_FIELD(arg0, s32 *, 0x228);
        M2C_FIELD(&D_800E10D0_ovl_01, u8 *, 0x26F) = (u8) (M2C_FIELD(&D_800E10D0_ovl_01, u8 *, 0x26F) | 0x80);
        M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 0) = (s32) (M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 0) | 0x42);
        M2C_FIELD(&D_800E10D0_ovl_01, s16 *, 0x1E0) = 0x64;
        M2C_FIELD(&D_800E10D0_ovl_01, s16 *, 0x1E4) = 0;
        M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 0x228) = temp_a2;
        func_80077D48_ovl_01(0xC, arg0, temp_a2, &D_800E10D0_ovl_01);
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
    temp_v0 = func_80032EA4_ovl_01(&D_800E10D0_ovl_01, M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x30), 0x100);
    if ((temp_v0 << 0x10) == 0) {
        var_s2 = 1;
    } else {
        M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x66) = (u16) (M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x66) + temp_v0);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0x5DDU) {
        var_v0 = (var_s2 | 2) << 0x10;
    } else {
        func_80032B8C_ovl_01(&D_800E10D0_ovl_01, func_80032D44_ovl_01(M2C_FIELD(&D_800E10D0_ovl_01, s16 *, 0x2A), M2C_FIELD(&D_800E10D0_ovl_01, s16 *, 0x32), M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32)) - (s16) M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x66));
        var_v0 = var_s2 << 0x10;
    }
    if ((var_v0 >> 0x10) == 3) {
        M2C_FIELD(arg0, s16 *, 6) = 0x100;
        M2C_FIELD(arg0, s8 *, 0x2C3) = 0xFF;
    }
}
