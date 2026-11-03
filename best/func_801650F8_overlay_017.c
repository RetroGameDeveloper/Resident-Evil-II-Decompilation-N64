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
M2C_UNK func_80164748_ovl_17(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80166FBC_ovl_17(void *, u8, M2C_UNK);  /* extern */
M2C_UNK func_801674BC_ovl_17(void *);               /* extern */
extern M2C_UNK D_80167E98_ovl_17;

void func_801650F8_overlay_017(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;

    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        func_80166FBC_ovl_17(arg0, *((func_80033634_ovl_01() & 3) + &D_80167E98_ovl_17), 3);
        temp_v0 = func_80033634_ovl_01() & 7;
        if (!(((s32) M2C_FIELD(arg0, u8 *, 0x2BC) >> temp_v0) & 1)) {
            func_80166FBC_ovl_17(arg0, (temp_v0 * 2) + 3, 3);
        }
        if ((M2C_FIELD(arg0, s8 *, 0x1ED) < 0) || (M2C_FIELD(arg0, s8 *, 0x1EE) < 0) || (M2C_FIELD(arg0, s8 *, 0x1EF) < 0)) {
            func_801674BC_ovl_17(arg0);
            M2C_FIELD(arg0, s8 *, 0x1ED) = 6;
            M2C_FIELD(arg0, s8 *, 0x1EE) = 6;
            M2C_FIELD(arg0, s8 *, 0x1EF) = 6;
        }
    }
    func_80164748_ovl_17(arg0, arg1, arg2);
}
