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

M2C_UNK func_80032B8C_ovl_01(void *, M2C_UNK);      /* extern */
M2C_UNK func_80032DEC_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_800334F8_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80163F68_ovl_28(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u16 temp_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01001F00;
        if (M2C_FIELD(arg0, u16 *, 0x2B8) & 1) {
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0C001F00;
        }
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0x3CU;
        /* fallthrough */
    case 1:
        func_80032DEC_ovl_01(arg0, M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AA8), M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AB0), 0x20);
        func_800334F8_ovl_01(arg0, arg1, arg2, 1);
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1EA) >= 0x15U) {
            M2C_FIELD(arg0, u16 *, 0x1E0) = (u16) ((s32) (M2C_FIELD(arg0, u16 *, 0x1E0) << 0x10) >> 0x11);
        }
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x10080);
        func_80032B8C_ovl_01(arg0, 0);
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
        if ((s16) temp_v0 == -1) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
        }
        return;
    }
}
