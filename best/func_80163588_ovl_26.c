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
M2C_UNK func_800334F8_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801634E4_ovl_26(void *);               /* extern */
s8 func_801667B8_ovl_26(void *);                    /* extern */

void func_80163588_ovl_26(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((((M2C_FIELD(arg0, u8 *, 0x2CD) * 0xD) + 6) << 0x18) + 0x3F00);
    }
    func_800334F8_ovl_01(arg0, arg1, arg2, 0);
    if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x40) != 0) {
        func_801634E4_ovl_26(arg0);
    }
    func_80032B8C_ovl_01(arg0, 0);
    if ((*M2C_FIELD(arg0, s32 **, 0x214) & 0x10000) && (M2C_FIELD(arg0, s8 *, 0x206) == 0)) {
        M2C_FIELD(arg0, s8 *, 0x206) = func_801667B8_ovl_26(arg0);
    }
}
