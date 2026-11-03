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
M2C_UNK func_80032DEC_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80166458_ovl_12(void *);               /* extern */
M2C_UNK func_801664DC_ovl_12(void *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;

void func_801636F0_overlay_012(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK *var_s1;
    u8 temp_v1;

    if (M2C_FIELD(arg0, u8 *, 0x2C3) != 0) {
        var_s1 = M2C_FIELD(&D_800C7650_ovl_01, M2C_UNK **, 0x19D3C);
    } else {
        var_s1 = &D_800E10D0_ovl_01;
    }
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s16 *, 0x1E0) = 0x32;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x09000300;
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) & 0xFD);
    }
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x1E9);
    if (temp_v1 < 0xFU) {
        if (temp_v1 >= 8U) {
            func_801664DC_ovl_12(arg0, 0x20, 0x1E);
        }
        func_80032B8C_ovl_01(arg0, 0x800);
        func_80032DEC_ovl_01(arg0, M2C_FIELD(var_s1, s32 *, 0x28), M2C_FIELD(var_s1, s32 *, 0x30), 0x40);
    }
    if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x400) != 0) {
        M2C_FIELD(arg0, s32 *, 4) = 0x01020000;
    }
    func_80166458_ovl_12(arg0);
}
