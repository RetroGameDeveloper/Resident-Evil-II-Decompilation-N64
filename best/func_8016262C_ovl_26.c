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

M2C_UNK func_80032B8C_ovl_01(void *, M2C_UNK);      /* extern */
M2C_UNK func_800334F8_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80065400_ovl_01(void *, void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801628C8_ovl_26(void *);               /* extern */
s32 func_80166CE4_ovl_26(void *, s16, s16, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;

void func_8016262C_ovl_26(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK *var_a1;
    u16 temp_v0;
    u16 temp_v1_2;
    u8 temp_v1;
    void *var_s1;

    if (M2C_FIELD(arg0, u8 *, 0x2B4) != 0) {
        var_a1 = M2C_FIELD(&D_800C7650_ovl_01, M2C_UNK **, 0x19D3C);
        var_s1 = arg0 + 0x2B4;
    } else {
        var_a1 = &D_800E10D0_ovl_01;
        var_s1 = arg0 + 0x2B4;
    }
    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x1AA);
        if (temp_v1_2 == 0x6002) {
            if (M2C_FIELD(arg0, s16 *, 0x270) != 0) {
                M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (temp_v1_2 & 0xFFF);
                goto block_13;
            }
        } else {
block_13:
            M2C_FIELD(arg0, u8 *, 6) = 1U;
            M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((((M2C_FIELD(arg0, u8 *, 0x2CD) * 0xD) + 1) << 0x18) + 0x3F00);
            func_800334F8_ovl_01(arg0, arg1, arg2, 0);
            func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
            M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) & 0xFD);
            M2C_FIELD(var_s1, s8 *, 0xD) = 3;
            M2C_FIELD(var_s1, s8 *, 0xF) = 3;
            M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) = (u16) (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) & 0xFFBF);
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~4);
            M2C_FIELD(var_s1, s8 *, 2) = 0;
block_21:
            M2C_FIELD(arg0, s8 *, 0x2C9) = 0;
        default:
block_22:
            func_801628C8_ovl_26(arg0);
        }
        break;
    case 1:
        func_80065400_ovl_01(arg0, var_a1 + 0x28, 0, 0);
        M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + func_80166CE4_ovl_26(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), 6));
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
        func_80032B8C_ovl_01(arg0, 0);
        if (M2C_FIELD(var_s1, u8 *, 0xB) == 0) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
        }
        if ((u8) M2C_FIELD(var_s1, u8 *, 0x15) >= 0x79U) {
            M2C_FIELD(arg0, s8 *, 5) = 3;
            M2C_FIELD(arg0, u8 *, 6) = 0;
        }
        goto block_22;
    case 2:
        M2C_FIELD(arg0, u8 *, 6) = 3U;
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0x5AU;
        /* fallthrough */
    case 3:
        func_80065400_ovl_01(arg0, var_a1 + 0x28, 0, 0);
        M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + func_80166CE4_ovl_26(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), 6));
        M2C_FIELD(var_s1, s8 *, 8) = 0;
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
        if ((temp_v0 << 0x10) == 0) {
            M2C_FIELD(arg0, u8 *, 6) = 1U;
            goto block_21;
        }
        goto block_22;
    }
}
