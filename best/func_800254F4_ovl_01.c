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

extern M2C_UNK D_80018B50_ovl_01;
extern s32 D_800C4E40_ovl_01;
extern M2C_UNK D_800C5280_ovl_01;
extern s32 D_800C5684_ovl_01;
extern void *D_800C5690_ovl_01;
extern M2C_UNK D_800C5FF8_ovl_01;
extern M2C_UNK func_80018A80_ovl_01;

void func_800254F4_ovl_01(void *arg0) {
    D_800C5690_ovl_01 = arg0;
    M2C_FIELD(arg0, s32 *, 0) = 1;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (&D_80018B50_ovl_01 - &func_80018A80_ovl_01);
    M2C_FIELD(arg0, s32 *, 0x14) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x800;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &D_800C5280_ovl_01;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &func_80018A80_ovl_01;
    M2C_FIELD(arg0, s32 *, 0x24) = 0x400;
    M2C_FIELD(arg0, M2C_UNK **, 0x30) = &D_800C5FF8_ovl_01;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) D_800C4E40_ovl_01;
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) D_800C5684_ovl_01;
}
