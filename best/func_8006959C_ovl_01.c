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

s32 func_800691F0_ovl_01(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK D_80139DF0;

s32 func_8006959C_ovl_01(M2C_UNK *arg0, M2C_UNK arg1, void *arg2) {
    s32 temp_a0;
    s32 temp_v0;
    u16 temp_t1;
    u16 temp_v1;
    u32 temp_a1;
    u32 temp_a2;

    temp_v1 = M2C_FIELD(arg2, u16 *, 2);
    temp_t1 = M2C_FIELD(arg2, u16 *, 4);
    temp_a0 = M2C_FIELD(arg0, s32 *, 8);
    temp_a1 = temp_t1 >> 1;
    temp_a2 = (((u32) (temp_a0 - (s16) ((M2C_FIELD(arg2, u16 *, 6) + temp_v1) - temp_a1)) >> 0x1E) & 2) | ((u32) (temp_a0 - (s16) (temp_v1 + temp_a1)) >> 0x1F);
    temp_v0 = temp_a2 < 3U;
    if (temp_a2 != 2) {
        if (temp_v0 == 0) {
            if (temp_a2 != 3) {
                return 3;
            }
            M2C_FIELD(&D_80139DF0, u16 *, 6) = temp_t1;
            M2C_FIELD(&D_80139DF0, u16 *, 2) = (u16) M2C_FIELD(arg2, u16 *, 2);
            M2C_FIELD(&D_80139DF0, u16 *, 4) = (u16) M2C_FIELD(arg2, u16 *, 4);
            M2C_FIELD(&D_80139DF0, u16 *, 0) = (u16) M2C_FIELD(arg2, u16 *, 0);
            return func_800691F0_ovl_01(arg0, arg1, &D_80139DF0, arg0);
        }
        if (temp_a2 != 0) {
            return temp_v0;
        }
        M2C_FIELD(&D_80139DF0, u16 *, 6) = temp_t1;
        M2C_FIELD(&D_80139DF0, u16 *, 2) = (u16) ((M2C_FIELD(arg2, u16 *, 6) + M2C_FIELD(arg2, u16 *, 2)) - M2C_FIELD(arg2, u16 *, 4));
        M2C_FIELD(&D_80139DF0, u16 *, 4) = (u16) M2C_FIELD(arg2, u16 *, 4);
        M2C_FIELD(&D_80139DF0, u16 *, 0) = (u16) M2C_FIELD(arg2, u16 *, 0);
        return func_800691F0_ovl_01(arg0, arg1, &D_80139DF0, &D_80139DF0);
    }
    return 1;
}
