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

s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_800377B0_ovl_01(s32, M2C_UNK, s32, M2C_UNK *); /* extern */
extern M2C_UNK D_80166174_ovl_15;
extern M2C_UNK *D_8016628C_ovl_15;

void func_80165BE0_ovl_15(void *arg0) {
    s32 temp_s0;
    s32 temp_s3;

    temp_s3 = M2C_FIELD(arg0, s32 *, 0x234);
    if (M2C_FIELD(arg0, u8 *, 0x2CD) == 0) {
        D_8016628C_ovl_15 = &D_80166174_ovl_15;
        M2C_FIELD(arg0, void (**)(void *), 0x2D0) = func_80165BE0_ovl_15;
        M2C_FIELD(arg0, u8 *, 0x2CD) = (u8) (M2C_FIELD(arg0, u8 *, 0x2CD) + 1);
        return;
    }
    do {
        if (!(M2C_FIELD(D_8016628C_ovl_15, u16 *, 0xA) & 2)) {
            temp_s0 = temp_s3 + (M2C_FIELD(D_8016628C_ovl_15, u16 *, 8) * 0x178) + 0x38;
            func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 2) + 0x1800) | 0x06000000, 0, temp_s0, D_8016628C_ovl_15);
        }
        D_8016628C_ovl_15 += 0xC;
    } while (M2C_FIELD(D_8016628C_ovl_15, u16 *, 0xA) & 1);
    if (M2C_FIELD(arg0, u8 *, 0x2CD) == 0x18) {
        M2C_FIELD(arg0, void (**)(void *), 0x2D0) = NULL;
    }
    M2C_FIELD(arg0, u8 *, 0x2CD) = (u8) (M2C_FIELD(arg0, u8 *, 0x2CD) + 1);
}
