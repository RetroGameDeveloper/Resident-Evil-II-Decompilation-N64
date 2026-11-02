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

M2C_UNK func_8004CE04_ovl_01(void *);               /* extern */
extern M2C_UNK D_800C7650_ovl_01;

u32 func_8008C03C_ovl_01(u8 arg0) {
    s32 temp_v1;
    u32 temp_v0;
    u32 var_a0;
    u8 temp_v0_2;
    void *temp_a0;
    void *temp_v0_3;
    void *temp_v1_2;

    var_a0 = 0;
    if ((u32) (arg0 - 0x19) < 0x10U) {
        temp_v0_2 = M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x2196B) + 1;
        if (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x2196B) != 0xFF) {
            M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x2196B) = temp_v0_2;
            if ((u32) (temp_v0_2 & 0xFF) >= 0x11U) {
                func_8004CE04_ovl_01(&D_800C7650_ovl_01 + 0x20000);
                return 0U;
            }
            goto block_5;
        }
        M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x2196B) = 1U;
block_5:
        temp_v1 = (s32) (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x2196B) - 1) / 2;
        if (((M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x2196B) - 1) % 2) & 0xFF) {
            temp_v1_2 = (temp_v1 & 0xFF) + &D_800C7650_ovl_01;
            M2C_FIELD(temp_v1_2, u8 *, 0x21963) = (u8) ((M2C_FIELD(temp_v1_2, u8 *, 0x21963) & 0xF0) | (arg0 - 0x19));
        } else {
            temp_a0 = (temp_v1 & 0xFF) + &D_800C7650_ovl_01;
            M2C_FIELD(temp_a0, u8 *, 0x21963) = (u8) ((M2C_FIELD(temp_a0, u8 *, 0x21963) & 0xF) | ((arg0 - 0x19) * 0x10));
        }
        return M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x2196B) - 1;
    }
loop_13:
    temp_v0_3 = var_a0 + &D_800C7650_ovl_01;
    if (M2C_FIELD(temp_v0_3, u8 *, 0x21944) == 0xFF) {
        M2C_FIELD(temp_v0_3, u8 *, 0x21944) = arg0;
        return var_a0;
    }
    var_a0 += 1;
    temp_v0 = var_a0 < 0x18U;
    if (temp_v0 == 0) {
        return temp_v0;
    }
    goto loop_13;
}
