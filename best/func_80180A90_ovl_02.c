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

M2C_UNK func_8000E980(M2C_UNK *);                   /* extern */
M2C_UNK func_8000E9D0(M2C_UNK);                     /* extern */
M2C_UNK func_801809A0_ovl_02(u16, u16);             /* extern */
extern M2C_UNK D_80112918_ovl_01;
extern M2C_UNK D_80112968_ovl_01;
extern s32 D_80134450_ovl_01;
extern M2C_UNK D_801344B0_ovl_01;

void func_80180A90_ovl_02(void) {
    M2C_UNK *var_v0;
    M2C_UNK *var_v1;

    func_801809A0_ovl_02(M2C_FIELD(((D_80134450_ovl_01 * 0x112) + &D_801344B0_ovl_01), u16 *, 8), M2C_FIELD(((D_80134450_ovl_01 * 0x112) + &D_801344B0_ovl_01), u16 *, 0xA));
    var_v1 = &D_80112918_ovl_01;
    var_v0 = &D_80112968_ovl_01;
    do {
        M2C_FIELD(var_v1, s32 *, 0) = (s32) M2C_FIELD(var_v0, s32 *, 0);
        M2C_FIELD(var_v1, s32 *, 4) = (s32) M2C_FIELD(var_v0, s32 *, 4);
        M2C_FIELD(var_v1, s32 *, 8) = (s32) M2C_FIELD(var_v0, s32 *, 8);
        M2C_FIELD(var_v1, s32 *, 0xC) = (s32) M2C_FIELD(var_v0, s32 *, 0xC);
        var_v0 += 0x10;
        var_v1 += 0x10;
    } while (var_v0 != (&D_80112968_ovl_01 + 0x50));
    func_8000E980(&D_80112918_ovl_01);
    func_8000E9D0(2);
    func_8000E9D0(8);
    func_8000E9D0(0x20);
    func_8000E9D0(0x40);
}
