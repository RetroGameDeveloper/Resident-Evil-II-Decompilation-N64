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

M2C_UNK func_8000EFA0(s32, s32, u16);               /* extern */
extern M2C_UNK D_80018B50_ovl_01;
extern M2C_UNK D_800B26A0_ovl_01;
extern M2C_UNK D_80136AF0_ovl_01;
extern M2C_UNK D_80143C00;
extern s8 D_80143EED;
extern s32 D_80143EF0;
extern u16 *D_80143EF4;
extern M2C_UNK (*D_80143F90)(M2C_UNK *);
extern M2C_UNK func_80018A80_ovl_01;

void func_800A2DE0_ovl_01(void) {
    u16 temp_a2;

    temp_a2 = *D_80143EF4;
    if (temp_a2 != 0) {
        M2C_FIELD(&D_80143C00, s32 *, 0) = 2;
        M2C_FIELD(&D_80143C00, s32 *, 0xC) = (s32) (&D_80018B50_ovl_01 - &func_80018A80_ovl_01);
        M2C_FIELD(&D_80143C00, M2C_UNK **, 0x10) = &D_800B26A0_ovl_01;
        M2C_FIELD(&D_80143C00, s32 *, 0x14) = 0x1000;
        M2C_FIELD(&D_80143C00, M2C_UNK **, 0x18) = &D_80136AF0_ovl_01;
        M2C_FIELD(&D_80143C00, s32 *, 4) = 0;
        M2C_FIELD(&D_80143C00, M2C_UNK **, 8) = &func_80018A80_ovl_01;
        M2C_FIELD(&D_80143C00, s32 *, 0x1C) = 0x800;
        M2C_FIELD(&D_80143C00, s32 *, 0x30) = (s32) D_80143EF0;
        M2C_FIELD(&D_80143C00, s32 *, 0x34) = (s32) temp_a2;
        func_8000EFA0(D_80143EF0, temp_a2 * 0xA10, temp_a2);
        D_80143F90(&D_80143C00);
        D_80143EED = 1;
    }
}
