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

M2C_UNK func_80006D30(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK osCreateThread(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_8000CC90(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_8000DB90(M2C_UNK *);                   /* extern */
M2C_UNK func_8000E4C0(M2C_UNK);                     /* extern */
extern M2C_UNK D_8006C104_ovl_01;
extern M2C_UNK D_800BDC40_ovl_01;
extern M2C_UNK D_801129E0_ovl_01;
extern M2C_UNK D_80139EB0;
extern M2C_UNK D_80139F90;

void func_8006CBC4_ovl_01(void) {
    func_8000E4C0(0xFE);
    func_80006D30(&D_80139EB0, &D_80139F90, 0x14);
    func_8000CC90(4, &D_80139EB0, 1);
    func_8000CC90(9, &D_80139EB0, 2);
    func_8000CC90(6, &D_80139EB0, 0xA);
    func_8000CC90(0xE, &D_80139EB0, 8);
    osCreateThread(&D_801129E0_ovl_01, 1, &D_8006C104_ovl_01, 0, &D_800BDC40_ovl_01, 0x28);
    func_8000DB90(&D_801129E0_ovl_01);
}
