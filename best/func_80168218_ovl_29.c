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
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8016778C_ovl_29(void *);               /* extern */
extern M2C_UNK D_800E10D0_ovl_01;

void func_80168218_ovl_29(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (((4 - (func_80033174_ovl_01(arg0, &D_800E10D0_ovl_01) & 0xFF)) << 0x18) + 0x300);
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        func_80077D48_ovl_01(9, arg0);
        M2C_FIELD(arg0, u8 *, 0x2C4) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C4) + 1);
        M2C_FIELD(arg0, u16 *, 0x2B8) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B8) | 0x200);
        /* fallthrough */
    case 1:
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x400) != 0) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
            M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) & 0x7F);
        }
        func_80032B8C_ovl_01(arg0, 0);
        if (M2C_FIELD(arg0, u8 *, 0x1E9) == 0xF) {
            if (M2C_FIELD(arg0, u8 *, 5) == 0xE) {
                func_8016778C_ovl_29(arg0);
            }
            M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
            M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) & 0x7F);
            M2C_FIELD(arg0, u16 *, 0x2B8) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B8) & 0xFDFF);
        }
        return;
    }
}
