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
M2C_UNK func_80007300(s32);                         /* extern */
M2C_UNK func_8006BEEC_ovl_01(s32, M2C_UNK *);       /* extern */
extern M2C_UNK D_80112908_ovl_01;
extern s32 D_80139E00;

void func_8006BF78_ovl_01(s32 arg0) {
    s32 temp_s0;

    temp_s0 = func_800072E0();
    if (M2C_FIELD(&D_80112908_ovl_01, u8 *, 1) == 2) {
        if (~D_80139E00 & 0x80) {
            M2C_FIELD(&D_80112908_ovl_01, u8 *, 1) = 3U;
        } else {
            D_80139E00 |= 0x100;
        }
        func_8006BEEC_ovl_01(arg0, &D_80112908_ovl_01);
    }
    func_80007300(temp_s0);
}
