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

M2C_UNK func_8000CB60(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_80135C4C_ovl_01;
extern M2C_UNK D_80143F50;

void func_800A5660_ovl_01(void) {
    s32 temp_v0;

    if (D_80135C4C_ovl_01 > 0) {
        temp_v0 = D_80135C4C_ovl_01 - 1;
        D_80135C4C_ovl_01 = temp_v0;
        if (temp_v0 == 0) {
            func_8000CB60(&D_80143F50, 0, 0);
        }
    }
}
