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

M2C_UNK func_80052C9C_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80052D40_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_8016678C_ovl_32(void *arg0) {
    s32 var_v0;
    s32 var_v0_2;
    u8 temp_v1;
    void *var_v1;
    void *var_v1_2;

    M2C_FIELD(arg0, u8 *, 0x2BF) = (u8) (M2C_FIELD(arg0, u8 *, 0x2BF) & 0xFE);
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x2C1);
    M2C_FIELD(arg0, u8 *, 0x2C0) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C0) & 0xFE);
    if (temp_v1 != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C1) = (u8) (temp_v1 - 1);
        M2C_FIELD(arg0, u8 *, 0x2BF) = (u8) (M2C_FIELD(arg0, u8 *, 0x2BF) | 1);
        func_80052C9C_ovl_01(3, 0x64, 0);
        func_80052D40_ovl_01(0x14, 0x64, 0, 3);
    }
    if (M2C_FIELD(arg0, s16 *, 0x1E0) >= 0x79) {
        M2C_FIELD(arg0, u8 *, 0x2C0) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C0) | 1);
        func_80052C9C_ovl_01(3, 0x96, 0);
        func_80052D40_ovl_01(0x1E, 0x96, 0, 3);
    }
    if (M2C_FIELD(arg0, s16 *, 0x1E0) >= 0x15) {
        M2C_FIELD(arg0, u8 *, 0x2BF) = (u8) (M2C_FIELD(arg0, u8 *, 0x2BF) | 1);
        func_80052C9C_ovl_01(3, 0x64, 0);
        func_80052D40_ovl_01(0x14, 0x64, 0, 3);
    }
    if (M2C_FIELD(arg0, u8 *, 0x2BF) == 0) {
        var_v1 = &D_800C7650_ovl_01 + 0x18000;
        var_v0 = M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & ~8;
    } else {
        var_v1 = &D_800C7650_ovl_01 + 0x18000;
        var_v0 = M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) | 8;
    }
    M2C_FIELD(var_v1, s32 *, 0x1A5C) = var_v0;
    if (M2C_FIELD(arg0, u8 *, 0x2C0) == 0) {
        var_v1_2 = &D_800C7650_ovl_01 + 0x18000;
        var_v0_2 = M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & ~4;
    } else {
        var_v1_2 = &D_800C7650_ovl_01 + 0x18000;
        var_v0_2 = M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) | 4;
    }
    M2C_FIELD(var_v1_2, s32 *, 0x1A5C) = var_v0_2;
}
