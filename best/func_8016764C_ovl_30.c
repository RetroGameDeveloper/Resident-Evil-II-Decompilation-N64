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

s16 func_80032D44_ovl_01(s16, s16, s16, s16);       /* extern */
s32 func_80033174_ovl_01(void *, M2C_UNK *);        /* extern */
M2C_UNK func_80052C00_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80052C9C_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80059E30_ovl_01(M2C_UNK, M2C_UNK);         /* extern */
M2C_UNK func_80167518_ovl_30(s32);                  /* extern */
M2C_UNK func_8016753C_ovl_30(void *, M2C_UNK, s32); /* extern */
M2C_UNK func_8016756C_ovl_30();                     /* extern */
s32 func_8016758C_ovl_30();                         /* extern */
extern M2C_UNK D_800E10D0_ovl_01;

s32 func_8016764C_ovl_30(void *arg0) {
    void *temp_v0;

    if (func_8016758C_ovl_30() != 0) {
        if (func_80059E30_ovl_01(0x14, 0) != 2) {
            temp_v0 = M2C_FIELD(arg0, s32 *, 0x234) + 0x468;
            M2C_FIELD(&D_800E10D0_ovl_01, s16 *, 0x1F4) = func_80032D44_ovl_01(M2C_FIELD(temp_v0, s16 *, 0x4E), M2C_FIELD(temp_v0, s16 *, 0x56), M2C_FIELD(&D_800E10D0_ovl_01, s16 *, 0x2A), M2C_FIELD(&D_800E10D0_ovl_01, s16 *, 0x32));
            if (M2C_FIELD(arg0, u8 *, 0x2BD) == 0) {
                func_8016753C_ovl_30(arg0, 0, func_80033174_ovl_01(arg0, &D_800E10D0_ovl_01) & 0xFF);
            } else {
                func_80167518_ovl_30(func_80033174_ovl_01(arg0, &D_800E10D0_ovl_01) & 0xFF);
            }
            func_80052C00_ovl_01(8, 0);
            func_80052C9C_ovl_01(8, 0xFA, 4);
            return 1;
        }
        func_8016756C_ovl_30();
        return -1;
    }
    return 0;
}
