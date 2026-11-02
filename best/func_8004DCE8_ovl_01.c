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

s32 func_80066804_ovl_01(void *, u16, s32, s32);    /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_8004DCE8_ovl_01(void *arg0, s32 arg1) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x1AC) = 0;
    if (!(temp_v1 & 8) && (M2C_FIELD(arg0, s32 *, 0x280) == 0)) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_v1 & ~0x4000);
        M2C_FIELD(arg0, s32 *, 0x1AC) = func_80066804_ovl_01(arg0 + 0x120, M2C_FIELD(arg0, u16 *, 0x12C), 1 << M2C_FIELD(arg0, u8 *, 0x1A2), arg1 | 0x01000000);
        M2C_FIELD(arg0, s32 *, 0x1B0) = (s32) M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x199B8);
    }
    M2C_FIELD(arg0, u16 *, 0x1B4) = (u16) M2C_FIELD(arg0, u16 *, 0x122);
    M2C_FIELD(arg0, u16 *, 0x1B6) = (u16) M2C_FIELD(arg0, u16 *, 0x12A);
}
