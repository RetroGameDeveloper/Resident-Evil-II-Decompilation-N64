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

s32 func_800072E0();                                /* extern */
M2C_UNK func_80007300(s32, M2C_UNK, s32 *, M2C_UNK *); /* extern */
M2C_UNK func_8000CB60(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_80112908_ovl_01;
extern s32 D_80139E00;
extern M2C_UNK D_80139ED0;

void func_8006BFF4_ovl_01(void) {
    s32 temp_a0;

    temp_a0 = func_800072E0();
    if (M2C_FIELD(&D_80112908_ovl_01, u8 *, 1) != 3) {
        if (D_80139E00 & 0x100) {
            M2C_FIELD(&D_80112908_ovl_01, u8 *, 1) = 3U;
            D_80139E00 &= ~0x100;
        }
        func_80007300(temp_a0, 3, &D_80139E00, &D_80112908_ovl_01);
        return;
    }
    func_80007300(temp_a0, 3, &D_80139E00, &D_80112908_ovl_01);
    func_8000CB60(&D_80139ED0, 0, 0);
}
