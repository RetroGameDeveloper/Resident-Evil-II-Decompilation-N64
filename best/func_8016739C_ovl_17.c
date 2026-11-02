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

M2C_UNK func_80052C00_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80052C9C_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_801672B0_ovl_17(void *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

s32 func_8016739C_ovl_17(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 var_v0;
    s32 var_v0_2;

    var_v0 = M2C_FIELD(arg0, s32 *, 0x2C) - M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AAC);
    if (var_v0 < 0) {
        var_v0 = -var_v0;
    }
    if ((var_v0 < arg2) && (func_801672B0_ovl_17(arg0, 0, arg1) != 0)) {
        func_80077D48_ovl_01(1, arg0);
        func_80052C00_ovl_01(2, 0);
        func_80052C9C_ovl_01(8, 0xC8, 0);
        return 1;
    }
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & 0x10000000) {
        var_v0_2 = M2C_FIELD(arg0, s32 *, 0x2C) - M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19D3C), s32 *, 0x2C);
        if (var_v0_2 < 0) {
            var_v0_2 = -var_v0_2;
        }
        if ((var_v0_2 < arg2) && (func_801672B0_ovl_17(arg0, 1, arg1) != 0)) {
            func_80077D48_ovl_01(1, arg0);
            return 1;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
