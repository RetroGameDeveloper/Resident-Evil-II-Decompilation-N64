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

M2C_UNK D_800B42BC(s32);                            /* extern */
M2C_UNK func_800B2148_ovl_01(M2C_UNK *);            /* extern */
M2C_UNK func_8018064C_ovl_02(s32);                  /* extern */
extern s32 D_80134450_ovl_01;
extern M2C_UNK D_801344B0_ovl_01;
extern s32 D_80185400_ovl_02;
extern s32 D_80185404_ovl_02;
extern s32 D_80185408_ovl_02;

void func_801808D8_ovl_02(void) {
    if (D_80185400_ovl_02 != -1) {
        D_800B42BC(D_80185400_ovl_02);
        D_80185400_ovl_02 = -1;
    }
    if (D_80185404_ovl_02 != -1) {
        D_800B42BC(D_80185404_ovl_02);
        D_80185404_ovl_02 = -1;
    }
    if (D_80185408_ovl_02 != -1) {
        func_8018064C_ovl_02(D_80185408_ovl_02);
        D_80185408_ovl_02 = -1;
    }
    if (*((D_80134450_ovl_01 * 0x112) + &D_801344B0_ovl_01) == 3) {
        func_800B2148_ovl_01(&D_801344B0_ovl_01);
    }
}
