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

s32 D_80036F08(void *, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s8 D_80065658();                                    /* extern */
s32 func_80033634_ovl_01();                         /* extern */
extern M2C_UNK D_80166D28_ovl_12;

void func_80162748_ovl_12(void *arg0) {
    void *temp_s0;

    temp_s0 = arg0 + 0x2B4;
    M2C_FIELD(arg0, s8 *, 6) = 1;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0x02000F00;
    M2C_FIELD(temp_s0, s8 *, 0x14) = 0;
    M2C_FIELD(temp_s0, s8 *, 1) = 0;
    M2C_FIELD(temp_s0, s8 *, 0x15) = 0;
    M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) & 0x7F);
    M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) & 0xFD);
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & 0xEFFFFFFF) | 0x0C000000);
    M2C_FIELD(temp_s0, u16 *, 0xC) = 0x60U;
    if (D_80036F08(arg0, 0, 0x20, 0) != 0) {
        M2C_FIELD(temp_s0, u16 *, 0xC) = (u16) *(((func_80033634_ovl_01() & 7) * 2) + &D_80166D28_ovl_12);
    }
    if (M2C_FIELD(temp_s0, u8 *, 0x16) != 0) {
        M2C_FIELD(arg0, s8 *, 6) = 0x300;
        M2C_FIELD(arg0, s8 *, 0x2B4) = D_80065658();
        M2C_FIELD(temp_s0, s8 *, 0x14) = 1;
        M2C_FIELD(temp_s0, s8 *, 0x18) = 0;
        M2C_FIELD(arg0, s16 *, 0x1F6) = 0;
    }
}
