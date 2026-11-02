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

M2C_UNK func_8002751C_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80027530_ovl_01(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_800276B4_ovl_01(u8);                       /* extern */
extern u8 D_801326C8_ovl_01;
extern s8 D_801326CA_ovl_01;
extern u8 D_801326CB_ovl_01;

void func_8009CDFC_ovl_01(void) {
    if (D_801326C8_ovl_01 & 1) {
        if (func_800276B4_ovl_01(D_801326CB_ovl_01) != 0) {
            D_801326CA_ovl_01 = 1;
            D_801326C8_ovl_01 ^= 1;
        }
    } else {
        func_80027530_ovl_01(D_801326CB_ovl_01 | 0x200, -0x100, 7, 1);
        D_801326CA_ovl_01 = 0;
        D_801326C8_ovl_01 |= 1;
        func_8002751C_ovl_01(5, 0);
    }
}
