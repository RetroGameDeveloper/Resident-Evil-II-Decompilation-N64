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
u16 func_80032EA4_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_800334F8_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80165F5C_ovl_11(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x19000700;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        func_80032DEC_ovl_01(arg0, M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AA8), M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AB0), 0x20);
        M2C_FIELD(arg0, u16 *, 0x1F4) = func_80032EA4_ovl_01(arg0, M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AA8), M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AB0), 0xBE);
        if (M2C_FIELD(arg0, u8 *, 0x2D5) == 0) {
            func_80077D48_ovl_01(0xA, arg0);
            M2C_FIELD(arg0, u8 *, 0x2D5) = 0x96U;
        }
        M2C_FIELD(arg0, s16 *, 0x1E0) = 0xB;
        /* fallthrough */
    case 1:
        if (func_80032EA4_ovl_01(arg0, M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AA8), M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AB0), 0x140) == 0) {
            M2C_FIELD(arg0, u16 *, 0x1F4) = 0U;
            M2C_FIELD(arg0, u8 *, 6) = 2U;
        }
        M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + M2C_FIELD(arg0, u16 *, 0x1F4));
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            return;
        }
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x1B000700;
        M2C_FIELD(arg0, u8 *, 6) = 3U;
        /* fallthrough */
    case 3:
        func_80032DEC_ovl_01(arg0, M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AA8), M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AB0), 0x20);
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
        }
        func_80032B8C_ovl_01(arg0, 0);
        if (M2C_FIELD(arg0, u8 *, 0x1E9) == 0x19) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
        }
        break;
    }
}
