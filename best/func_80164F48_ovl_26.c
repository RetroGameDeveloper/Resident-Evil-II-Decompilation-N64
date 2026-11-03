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

M2C_UNK func_80032B8C_ovl_01(void *, M2C_UNK);      /* extern */
s32 func_80033174_ovl_01(void *, M2C_UNK *);        /* extern */
M2C_UNK func_800334F8_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80033634_ovl_01(void *);                   /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80164E08_ovl_26();                     /* extern */
M2C_UNK func_80166B18_ovl_26(void *, s32, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;

void func_80164F48_ovl_26(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 var_v1;
    s32 var_a1;
    s32 var_v0;

    if (M2C_FIELD(arg0, u8 *, 0x2D9) != 0) {
        func_80164E08_ovl_26();
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        M2C_FIELD(arg0, u8 *, 6) = 0x100;
        M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) = (u16) (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) & 0xFFBF);
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (((func_80033174_ovl_01(arg0, &D_800E10D0_ovl_01) & 0xFF) + ((M2C_FIELD(arg0, u8 *, 0x2CD) * 0xD) + 3)) << 0x18);
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
        M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
        M2C_FIELD(arg0, s16 *, 0x2AC) = 0;
        if (M2C_FIELD(arg0, u8 *, 0x2D9) == 0) {
            M2C_FIELD(arg0, s8 *, 0x2C1) = 6;
            M2C_FIELD(arg0, s8 *, 0x2C3) = 3;
        }
        if (((M2C_FIELD(arg0, u8 *, 0x26E) % 3) & 0xFF) || (M2C_FIELD(arg0, u8 *, 0x2D9) != 0)) {
            var_a1 = 0xA;
        } else {
            var_a1 = ((func_80033634_ovl_01(arg0) & 1) * 4) | 3;
        }
        func_80166B18_ovl_26(arg0, var_a1, 0);
        func_80077D48_ovl_01(0xB, arg0);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~4);
        return;
    }
    func_800334F8_ovl_01(arg0, arg1, arg2, 0);
    if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x400) != 0) {
        var_v0 = 0x01090000;
        if (M2C_FIELD(arg0, u8 *, 0x2D9) == 0) {
            var_v0 = 0x01010000;
        }
        M2C_FIELD(arg0, s32 *, 4) = var_v0;
        var_v1 = -0x320;
        if (M2C_FIELD(arg0, u8 *, 0x2CD) == 0) {
            var_v1 = 0x320;
        }
        M2C_FIELD(arg0, s16 *, 0x130) = var_v1;
        return;
    }
    func_80032B8C_ovl_01(arg0, 0);
}
