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
M2C_UNK func_80032EA4_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_800334F8_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801634E4_ovl_26(void *);               /* extern */
s8 func_801667B8_ovl_26(void *);                    /* extern */
s32 func_80166C94_ovl_26(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80166CE4_ovl_26(void *, s32, s32, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;

void func_80163334_ovl_26(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK *var_s0;
    s32 temp_s0;
    s32 temp_s2;
    s32 var_s0_2;

    if (M2C_FIELD(arg0, u8 *, 0x2B4) != 0) {
        var_s0 = M2C_FIELD(&D_800C7650_ovl_01, M2C_UNK **, 0x19D3C);
    } else {
        var_s0 = &D_800E10D0_ovl_01;
    }
    func_80032EA4_ovl_01(arg0, M2C_FIELD(var_s0, s32 *, 0x28), M2C_FIELD(var_s0, s32 *, 0x30), 0x40);
    func_80166CE4_ovl_26(arg0, M2C_FIELD(var_s0, s32 *, 0x28), M2C_FIELD(var_s0, s32 *, 0x30), 0x300);
    func_800334F8_ovl_01(arg0, arg1, arg2, 0);
    temp_s2 = func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
    func_80032B8C_ovl_01(arg0, 0);
    M2C_FIELD(arg0, u16 *, 0x130) = (u16) (M2C_FIELD(arg0, u16 *, 0x130) - M2C_FIELD(arg0, u16 *, 0x1E0));
    temp_s0 = *M2C_FIELD(arg0, s32 **, 0x214);
    D_80033678(arg0);
    if ((temp_s0 & 0x10000) && (M2C_FIELD(arg0, s8 *, 0x206) == 0)) {
        M2C_FIELD(arg0, s8 *, 0x206) = func_801667B8_ovl_26(arg0);
    }
    if (temp_s0 & 0x20000) {
        var_s0_2 = 0;
        M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) = (u16) (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) & 0xFFBF);
        M2C_FIELD(arg0, u8 *, 0x2D6) = (u8) (M2C_FIELD(arg0, u8 *, 0x2D6) + 1);
        M2C_FIELD(arg0, u8 *, 0x2D7) = (u8) (M2C_FIELD(arg0, u8 *, 0x2D7) + 1);
        if ((func_80166C94_ovl_26(arg0, 0x11, 0x28) != 0) || (func_80166C94_ovl_26(arg0, 0x17, 0x28) != 0)) {
            var_s0_2 = 1;
        }
        if (var_s0_2 != 0) {
            M2C_FIELD(arg0, s16 *, 6) = 0x200;
        }
    }
    if ((temp_s2 << 0x10) != 0) {
        func_801634E4_ovl_26(arg0);
    }
}
