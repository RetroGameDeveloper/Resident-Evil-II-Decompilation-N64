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
M2C_UNK func_80007320(s32, s32, u8 *);              /* extern */
M2C_UNK func_8000C9E0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80011390();                            /* extern */
M2C_UNK func_800A5618_ovl_01();                     /* extern */
M2C_UNK func_800A5660_ovl_01();                     /* extern */
extern M2C_UNK D_800B44E0_ovl_01;
extern M2C_UNK *D_80143F74;
extern u8 D_8015AF60;
extern M2C_UNK D_8015AF70;
extern M2C_UNK D_8015AFB0;
extern M2C_UNK D_8015AFC8;

void func_800B461C_ovl_01(s32 arg0, s32 arg1, s32 arg2) {
    func_800A5618_ovl_01();
    if (D_80143F74 == NULL) {
        func_80006D30(&D_8015AFB0, &D_8015AFC8, 1);
        D_8015AF60 = 0;
        D_80143F74 = &D_800B44E0_ovl_01;
    }
    if ((u8) D_8015AF60 < 4U) {
        *((D_8015AF60 * 0xC) + &D_8015AF70) = arg0;
        M2C_FIELD(((D_8015AF60 * 0xC) + &D_8015AF70), s32 *, 4) = arg1;
        M2C_FIELD(((D_8015AF60 * 0xC) + &D_8015AF70), s32 *, 8) = (s32) ((arg2 + 0xF) & ~0xF);
        D_8015AF60 += 1;
        func_80007320(arg0, arg2, &D_8015AF60);
        func_800A5660_ovl_01();
        func_8000C9E0(&D_8015AFB0, 0, 1);
        func_80011390();
        return;
    }
    func_800A5660_ovl_01();
}
