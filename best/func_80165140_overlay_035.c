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

M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_8016472C_ovl_35(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80165248_ovl_35(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801661F0_ovl_35(M2C_UNK, u8);          /* extern */
M2C_UNK func_80166520_ovl_35(void *, M2C_UNK);      /* extern */
extern M2C_UNK D_80166700_ovl_35;

void func_80165140_overlay_035(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_801661F0_ovl_35(0, M2C_FIELD((M2C_FIELD(arg0, u8 *, 5) + &D_80166700_ovl_35), u8 *, -1));
    func_80077D48_ovl_01(6, arg0);
    if (M2C_FIELD(arg0, u8 *, 0x2BC) == 0) {
        M2C_FIELD(arg0, s16 *, 6) = 0x200;
        func_80165248_ovl_35(arg0, arg1, arg2);
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x2C5) != 0) {
        M2C_FIELD(arg0, s16 *, 0x68) = 0;
        func_80166520_ovl_35(arg0, 0);
    }
    M2C_FIELD(arg0, s16 *, 6) = 0x100;
    func_8016472C_ovl_35(arg0, arg1, arg2);
}
