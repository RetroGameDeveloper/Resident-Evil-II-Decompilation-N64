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

M2C_UNK func_80078FF0_ovl_01(s8);                   /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern s32 D_80119D24_ovl_01;
extern M2C_UNK D_80119E84_ovl_01;

void func_80076BA0_ovl_01(void) {
    if (!(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x2000)) {
        if ((M2C_FIELD(&D_80119E84_ovl_01, u8 *, 1) != 0xFF) && (M2C_FIELD(&D_80119E84_ovl_01, u8 *, 1) == 0)) {
            if (M2C_FIELD(&D_80119E84_ovl_01, s8 *, 2) >= 0) {
                if (D_80119D24_ovl_01 != 0) {
                    func_80078FF0_ovl_01(M2C_FIELD(&D_80119E84_ovl_01, s8 *, 2));
                }
                M2C_FIELD(&D_80119E84_ovl_01, s8 *, 0) = 1;
            }
        }
        if ((M2C_FIELD(&D_80119E84_ovl_01, u8 *, 9) != 0xFF) && (M2C_FIELD(&D_80119E84_ovl_01, u8 *, 9) == 0)) {
            if (M2C_FIELD(&D_80119E84_ovl_01, s8 *, 0xA) >= 0) {
                if (D_80119D24_ovl_01 != 0) {
                    func_80078FF0_ovl_01(M2C_FIELD(&D_80119E84_ovl_01, s8 *, 0xA));
                }
                M2C_FIELD(&D_80119E84_ovl_01, s8 *, 8) = 1;
            }
        }
        if ((M2C_FIELD(&D_80119E84_ovl_01, u8 *, 0x11) != 0xFF) && (M2C_FIELD(&D_80119E84_ovl_01, u8 *, 0x11) == 0) && (M2C_FIELD(&D_80119E84_ovl_01, s8 *, 0x12) >= 0)) {
            if (D_80119D24_ovl_01 != 0) {
                func_80078FF0_ovl_01(M2C_FIELD(&D_80119E84_ovl_01, s8 *, 0x12));
            }
            M2C_FIELD(&D_80119E84_ovl_01, s8 *, 0x10) = 1;
        }
    }
}
