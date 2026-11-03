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

s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80165308_ovl_12(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801659DC_ovl_12(void *, M2C_UNK);      /* extern */
M2C_UNK func_80166900_ovl_12(void *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_80166DEC_ovl_12;

void func_80164D10_ovl_12(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 temp_v1;
    void *temp_s2;

    temp_s2 = arg0 + 0x2B4;
    M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) ((M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19AE6) & 0xFFF) - (M2C_FIELD(arg0, u16 *, 0x66) & 0xFFF));
    M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) (M2C_FIELD(arg0, u16 *, 0x1F4) + *(((func_80033634_ovl_01() & 7) * 2) + &D_80166DEC_ovl_12));
    M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (M2C_FIELD(arg0, u16 *, 0x1AA) & 0xDFFF);
    M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 2);
    if (M2C_FIELD(arg0, u8 *, 4) == 2) {
        func_80077D48_ovl_01(1, arg0);
    }
    temp_v1 = M2C_FIELD(temp_s2, u8 *, 0xB);
    if ((temp_v1 != 0) && (M2C_FIELD(temp_s2, u8 *, 0x15) == 0)) {
        M2C_FIELD(temp_s2, u8 *, 0xB) = (u8) (temp_v1 | 0x80);
        func_80165308_ovl_12(arg0, arg1, arg2);
        return;
    }
    if (M2C_FIELD(temp_s2, u8 *, 1) != 0) {
        M2C_FIELD(arg0, s16 *, 6) = 0x100;
        M2C_FIELD(arg0, u16 *, 0x1E0) = (u16) ((s32) (M2C_FIELD(arg0, u16 *, 0x1E0) << 0x10) >> 0x11);
    } else {
        M2C_FIELD(arg0, s16 *, 6) = 0x200;
        M2C_FIELD(arg0, u16 *, 0x1E0) = 0xF0U;
        func_801659DC_ovl_12(arg0, 0);
    }
    M2C_FIELD(temp_s2, s8 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0x11000700;
    M2C_FIELD(arg0, s8 *, 0x2BF) = 1;
    M2C_FIELD(arg0, s16 *, 0x1F6) = 0x200;
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
    M2C_FIELD(temp_s2, s8 *, 7) = 1;
    func_80166900_ovl_12(arg0, 0, 0);
}
