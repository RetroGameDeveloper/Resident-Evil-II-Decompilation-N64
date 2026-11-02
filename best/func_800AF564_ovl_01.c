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

M2C_UNK func_800AC63C_ovl_01(u8, u8, u8);           /* extern */
s32 func_800AF150_ovl_01(void *, u32 *);            /* extern */
extern M2C_UNK D_80158A20;
extern M2C_UNK D_80158A40;

s32 func_800AF564_ovl_01(void *arg0, u32 *arg1) {
    s32 temp_v1_3;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_v1_2;
    u16 var_v1;
    u16 var_v1_2;
    u32 temp_v1;
    u8 temp_a1;

    temp_v1 = *arg1;
    if ((temp_v1 >> 0x18) == 0) {
        var_v1 = M2C_FIELD(arg0, u16 *, 0x50);
        var_v0 = (s32) (temp_v1 << 0x10) >> 0x18;
    } else {
        var_v1 = M2C_FIELD(arg0, u16 *, 0x4E);
        var_v0 = (s32) (temp_v1 << 0x10) >> 0x18;
    }
    M2C_FIELD(arg0, u16 *, 0x50) = (u16) (var_v1 + var_v0);
    temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x50);
    if ((s16) M2C_FIELD(arg0, u16 *, 0x50) >= 0) {
        if (temp_v1_2 >= 0x80U) {
            var_v1_2 = 0x7F;
            goto block_9;
        }
        M2C_FIELD(arg0, u16 *, 0x50) = temp_v1_2;
    } else {
        var_v1_2 = 0;
block_9:
        M2C_FIELD(arg0, u16 *, 0x50) = var_v1_2;
    }
    M2C_FIELD(arg0, s8 *, 0xC0) = (s8) (u16) *arg1;
    if (M2C_FIELD(arg0, s32 *, 0x60) != -1) {
        var_v0_2 = 0;
        if (M2C_FIELD(arg0, u8 *, 0x4A) != 0xFF) {
            temp_a1 = M2C_FIELD(arg0, u8 *, 0x63);
            if (M2C_FIELD(arg0, u8 *, 0x4B) == 0xFF) {
                temp_v1_3 = temp_a1 & 0xFF;
                var_v0_2 = 0;
                if (*(temp_v1_3 + &D_80158A20) == temp_v1_3) {
                    var_v0_2 = 1;
                }
            } else {
                var_v0_2 = 1;
                if (*(M2C_FIELD(arg0, u8 *, 0x4A) + (M2C_FIELD(arg0, u8 *, 0x4B) * 0x10) + &D_80158A40) != temp_a1) {
                    goto block_16;
                }
            }
        }
    } else {
block_16:
        var_v0_2 = 0;
    }
    if (var_v0_2 & 0xFF) {
        func_800AC63C_ovl_01(M2C_FIELD(arg0, u8 *, 0x4A), M2C_FIELD(arg0, u8 *, 0x4B), M2C_FIELD(arg0, u8 *, 0x51));
    }
    *arg1 = 4;
    return func_800AF150_ovl_01(arg0, arg1) & 0xFF;
}
