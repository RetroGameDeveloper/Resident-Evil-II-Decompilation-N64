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

extern M2C_UNK D_800E9128_ovl_01;

void func_8009E8D4_ovl_01(s32 arg0, s16 arg1, s32 arg2, void *arg3) {
    void *temp_v1;

    temp_v1 = (arg0 * 0x2C) + &D_800E9128_ovl_01;
    M2C_FIELD(temp_v1, s16 *, 0) = arg1;
    M2C_FIELD(temp_v1, s32 *, 0x10) = (s32) (arg2 | (M2C_FIELD(temp_v1, u8 *, 0x13) << 0x18));
    if (arg3 != NULL) {
        M2C_FIELD(temp_v1, u16 *, 0x14) = (u16) M2C_FIELD(arg3, u16 *, 0);
        M2C_FIELD(temp_v1, u16 *, 0x16) = (u16) M2C_FIELD(arg3, u16 *, 2);
        M2C_FIELD(temp_v1, u16 *, 0x18) = (u16) M2C_FIELD(arg3, u16 *, 4);
        M2C_FIELD(temp_v1, u16 *, 0x1A) = (u16) M2C_FIELD(arg3, u16 *, 6);
        return;
    }
    M2C_FIELD(temp_v1, u16 *, 0x14) = 0;
    M2C_FIELD(temp_v1, u16 *, 0x18) = 0x014000F0;
}
