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

M2C_UNK func_80006650(void *, M2C_UNK);             /* extern */
s32 func_800072E0();                                /* extern */
M2C_UNK func_80007300(s32);                         /* extern */
M2C_UNK func_8000C940(M2C_UNK, u32 *);              /* extern */
extern void *D_8001290C;
extern M2C_UNK D_80017680;
extern s8 D_80017684;
extern s8 D_80017685;
extern s8 D_80017686;
extern s8 D_80017687;
extern s8 D_80017688;
extern s8 D_80017689;
extern M2C_UNK D_8001768C;
extern s32 D_80017690;

M2C_UNK *func_8000BFF0(void) {
    u32 sp10;
    s32 temp_a0;
    void *temp_v1;

    sp10 = 0;
    if (M2C_FIELD(&D_8001768C, s32 *, 0) != 0xB0000000) {
        D_80017684 = 0;
        M2C_FIELD(&D_8001768C, s32 *, 0) = 0xB0000000;
        func_8000C940(0, &sp10);
        D_80017689 = 0;
        D_80017690 = 0;
        D_80017688 = (s8) (sp10 >> 8);
        D_80017685 = (s8) sp10;
        D_80017686 = (sp10 >> 0x10) & 0xF;
        D_80017687 = (sp10 >> 0x14) & 0xF;
        func_80006650(&D_8001768C + 8, 0x60);
        temp_v1 = D_8001290C;
        temp_a0 = func_800072E0();
        D_8001290C = &D_8001768C - 0xC;
        M2C_FIELD(&D_8001768C, void **, -0xC) = temp_v1;
        func_80007300(temp_a0);
    }
    return &D_80017680;
}
