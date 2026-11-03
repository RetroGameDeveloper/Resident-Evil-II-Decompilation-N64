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

s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80166684_ovl_33(void *, s32, s32, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_8016362C_ovl_33(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x07001F00;
        /* fallthrough */
    case 1:
        func_80166684_ovl_33(arg0, M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19CB4), s32 *, 0x50) - 0x1F4, M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19CB4), s32 *, 0x54), 0x40);
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x80) != 0) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01040000;
        }
        return;
    }
}
