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

M2C_UNK func_800377B0_ovl_01(M2C_UNK, s16, void *, M2C_UNK); /* extern */

void func_80167A3C_ovl_11(void *arg0) {
    void *temp_a2;

    M2C_FIELD(arg0, u16 *, 0x2B6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B6) | 0x1800);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x60) = 0x304040;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x1D8) = 0x304040;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x350) = 0x405050;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x7B8) = 0x405050;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0xC20) = 0x304040;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0xD98) = 0x506060;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x1200) = 0x506060;
    func_800377B0_ovl_01(0x040F1770, M2C_FIELD(arg0, s16 *, 0x66), M2C_FIELD(arg0, void **, 0x234) + 0x38, 0);
    temp_a2 = M2C_FIELD(arg0, void **, 0x234);
    if (M2C_FIELD(temp_a2, s32 *, 0x11A0) & 1) {
        func_800377B0_ovl_01(0x040F0FA0, M2C_FIELD(arg0, s16 *, 0x66), temp_a2 + 0x11D8, 0);
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x468) & 1) {
        func_800377B0_ovl_01(0x040F0FA0, M2C_FIELD(arg0, s16 *, 0x66), M2C_FIELD(arg0, void **, 0x234) + 0x4A0, 0);
    }
}
