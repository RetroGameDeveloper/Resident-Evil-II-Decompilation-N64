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

u32 func_80040BE4_ovl_01(s32, s32);                 /* extern */
extern M2C_UNK D_800E10F8_ovl_01;

s32 func_80161D90_ovl_22(void *arg0, s32 arg1, s32 arg2, s32 arg3, u32 arg4) {
    s32 temp_lo;
    s32 temp_v0;
    s32 temp_v0_2;
    u32 temp_v0_3;
    u8 temp_v1;
    void *temp_s0;

    temp_s0 = (arg1 * 0x178) + M2C_FIELD(arg0, s32 *, 0x234);
    temp_v0 = M2C_FIELD(&D_800E10F8_ovl_01, s32 *, 0) - M2C_FIELD(temp_s0, s32 *, 0x4C);
    temp_lo = temp_v0 * temp_v0;
    temp_v0_2 = M2C_FIELD(&D_800E10F8_ovl_01, s32 *, 8) - M2C_FIELD(temp_s0, s32 *, 0x54);
    temp_v0_3 = func_80040BE4_ovl_01(temp_lo + (temp_v0_2 * temp_v0_2), temp_lo);
    M2C_FIELD(arg0, u16 *, 0x2B8) = (u16) M2C_FIELD(temp_s0, u16 *, 0x4E);
    M2C_FIELD(arg0, u16 *, 0x2BA) = (u16) M2C_FIELD(temp_s0, u16 *, 0x56);
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x1E9);
    if (temp_v1 >= (u32) (arg2 & 0xFFFF)) {
        if (((u32) (arg3 & 0xFFFF) >= temp_v1) && (M2C_FIELD(arg0, s16 *, 0x1F4) == 0)) {
            if (arg4 >= temp_v0_3) {
                M2C_FIELD(arg0, s16 *, 0x1F4) = 1;
                return 1;
            }
            goto block_5;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return 0;
    }
block_5:
    return 0;
}
