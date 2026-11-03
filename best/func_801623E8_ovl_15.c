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

s32 func_800837DC_ovl_01(M2C_UNK *, M2C_UNK);       /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E1C00;
extern M2C_UNK D_800E8CA0_ovl_01;

void func_801623E8_ovl_15(void *arg0) {
    M2C_UNK *var_a0;
    s32 var_v1;
    u8 temp_a0;

    func_80162CE0_ovl_15(arg0);
    if ((M2C_FIELD(arg0, u8 *, 0x2B6) == 0) && (M2C_FIELD(arg0, s32 *, 0x28) < -0x45D5)) {
        M2C_FIELD(arg0, u8 *, 0x2B6) = 1U;
        M2C_FIELD(arg0, s32 *, 4) = 0x01030000;
        M2C_FIELD(arg0, s16 *, 0x2BA) = 0;
        M2C_FIELD(arg0, s16 *, 0x2B8) = (s16) (-0x45D5 - M2C_FIELD(arg0, u16 *, 0x2A));
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x2B6) == 1) {
        if (M2C_FIELD(arg0, s32 *, 0x30) >= -0x1C9A) {
            M2C_FIELD(arg0, u8 *, 0x2B6) = 2U;
            M2C_FIELD(arg0, s16 *, 0x2B8) = 0;
            M2C_FIELD(arg0, s32 *, 4) = 0x01030000;
            M2C_FIELD(arg0, s16 *, 0x2BA) = (s16) (M2C_FIELD(arg0, u16 *, 0x32) + 0x1C9B);
            return;
        }
        if (M2C_FIELD(arg0, u8 *, 0x2C8) == 0) {
            if (func_800837DC_ovl_01(&D_800E8CA0_ovl_01, 1) != 0) {
                var_v1 = 0x18000;
                if ((u8) M2C_FIELD(arg0, u8 *, 0x2C2) < 2U) {
                    M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 4);
                    M2C_FIELD(arg0, u16 *, 0x20C) = (u16) M2C_FIELD(arg0, u16 *, 0x2A);
                    M2C_FIELD(arg0, s16 *, 0x20E) = (s16) (M2C_FIELD(arg0, u16 *, 0x2E) - 0x320);
                    M2C_FIELD(arg0, u16 *, 0x210) = (u16) M2C_FIELD(&D_800E1C00, u16 *, 0x32);
                    goto block_10;
                }
            } else {
block_10:
                var_v1 = 0x18000;
            }
            if (((M2C_FIELD((&D_800C7650_ovl_01 + var_v1), s32 *, 0x25E0) - M2C_FIELD(arg0, s32 *, 0x30)) - 0x2328) < -0x78) {
                var_a0 = &D_800E8CA0_ovl_01;
                if (M2C_FIELD(arg0, u8 *, 0x2C2) == 0) {
                    M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) & 0xFB);
                    goto block_14;
                }
            } else {
block_14:
                var_a0 = &D_800E8CA0_ovl_01;
            }
            if (func_800837DC_ovl_01(var_a0, 0) != 0) {
                if (((u32) ((M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1A5E0) - M2C_FIELD(arg0, s32 *, 0x30)) - 0x2199) < 0x18FU) && (M2C_FIELD(arg0, u8 *, 0x2C2) == 0)) {
                    M2C_FIELD(arg0, u8 *, 0x2C2) = 1U;
                    if (M2C_FIELD(arg0, u8 *, 5) == 2) {
                        M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
                    }
                }
            } else {
                goto block_20;
            }
        }
    } else {
block_20:
        temp_a0 = M2C_FIELD(arg0, u8 *, 0x2C2);
        if ((temp_a0 == 0) || (temp_a0 == 7)) {
            if (M2C_FIELD(arg0, u8 *, 5) == 1) {
                if (M2C_FIELD(arg0, u8 *, 0x2C8) != 0) {
                    M2C_FIELD(arg0, s32 *, 4) = 0x01020000;
                }
                if (M2C_FIELD(arg0, u8 *, 0x2D4) == 0) {
                    if (M2C_FIELD(arg0, u16 *, 0x2B4) & 0x20) {
                        if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) >= 0x65U) {
                            M2C_FIELD(arg0, s32 *, 4) = 0x01020000;
                        }
                    } else if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) >= 0x65U) {
                        M2C_FIELD(arg0, s32 *, 4) = 0x01020000;
                    }
                }
            } else if (M2C_FIELD(arg0, u8 *, 0x2C8) == 0) {
                if ((temp_a0 != 0) && (temp_a0 != 7)) {
                    M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
                }
                if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0x5AU) {
                    M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
                }
                if (M2C_FIELD(arg0, u8 *, 0x2D4) != 0) {
                    M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
                }
            }
        }
    }
}
