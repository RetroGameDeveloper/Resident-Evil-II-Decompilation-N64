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

M2C_UNK func_80032C08_ovl_01(M2C_UNK, s16);         /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_80164C4C_ovl_17(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK var_a0;
    s16 temp_a0;

    func_80032C08_ovl_01(0, M2C_FIELD(arg0, s16 *, 0x1F4));
    M2C_FIELD(arg0, u16 *, 0x1E2) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E2) + 0x28);
    if (M2C_FIELD(arg0, s16 *, 0x1F4) != 0) {
        M2C_FIELD(arg0, u16 *, 0x68) = (u16) (M2C_FIELD(arg0, u16 *, 0x68) + 0x200);
        M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x1F4) - 0x200);
    }
    temp_a0 = M2C_FIELD(arg0, s16 *, 0x25E);
    if (M2C_FIELD(arg0, s32 *, 0x2C) >= temp_a0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) temp_a0;
        M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & 0xEFFFFFFF) | 0x0C000000);
        if (M2C_FIELD(arg0, s16 *, 0x1F4) == 0) {
            M2C_FIELD(arg0, s8 *, 6) = 2;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x09000300;
        }
        var_a0 = 5;
        if (M2C_FIELD(arg0, s8 *, 0x2D6) < 0) {
            var_a0 = 6;
        }
        func_80077D48_ovl_01(var_a0, arg0);
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
}
