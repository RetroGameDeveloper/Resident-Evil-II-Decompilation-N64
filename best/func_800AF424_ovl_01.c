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

s32 func_800B17FC_ovl_01(s32, u16, s32, u8, s32, s32, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK D_801443E8;

s32 func_800AF424_ovl_01(void *arg0, void *arg1) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_v1_2;
    s32 var_a2;
    s32 var_v1;
    u32 temp_v1;
    void *temp_v0;

    temp_v1 = M2C_FIELD(arg1, u32 *, 0);
    temp_a2 = M2C_FIELD(arg0, u16 *, 0x4E) + ((s32) (temp_v1 << 0x10) >> 0x18);
    if (temp_a2 >= 0) {
        var_v1 = 0x7F;
        if (temp_a2 < 0x80) {
            var_v1 = temp_a2;
        }
    } else {
        var_v1 = 0;
    }
    var_a2 = var_v1;
    if (M2C_FIELD(arg0, u8 *, 0x4C) != 0) {
        var_a2 |= 0x80;
    }
    M2C_FIELD(arg0, s8 *, 0xBD) = 1;
    temp_a0 = func_800B17FC_ovl_01(((temp_v1 >> 0x10) << 0x10) | (M2C_FIELD(arg1, u8 *, 5) << 8) | M2C_FIELD(arg1, u8 *, 4), M2C_FIELD(arg0, u16 *, 0xBA), var_a2 & 0xFF, M2C_FIELD(arg0, u8 *, 0x31), (s32) M2C_FIELD(arg0, u8 *, 0x39), (s32) M2C_FIELD(arg0, u8 *, 0x4A), (s32) M2C_FIELD(arg0, u8 *, 0x4B), (s32) M2C_FIELD(arg1, u16 *, 6), (s32) M2C_FIELD(arg0, u8 *, 0x2F), 0, (s32) M2C_FIELD(arg0, u8 *, 0xBE));
    M2C_FIELD(arg0, s8 *, 0xBD) = 0;
    if (temp_a0 != -1) {
        temp_v0 = ((temp_a0 & 0xFF) * 0x1A0) + &D_801443E8;
        M2C_FIELD(temp_v0, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x60);
        temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x10);
        if (temp_v1_2 != -1) {
            M2C_FIELD(temp_v0, s32 *, 0x10) = temp_v1_2;
            M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x13) * 0x1A0) + &D_801443E8), s32 *, 0x14) = temp_a0;
        }
        M2C_FIELD(arg0, s32 *, 0x10) = temp_a0;
    }
    return 0;
}
