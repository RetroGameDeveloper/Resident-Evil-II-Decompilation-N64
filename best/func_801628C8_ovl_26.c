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

M2C_UNK D_80033678(void *);                         /* extern */
s32 func_80032EA4_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_801625F8_ovl_26(void *);               /* extern */
M2C_UNK func_801629EC_ovl_26(void *);               /* extern */
M2C_UNK func_80166984_ovl_26(void *);               /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;

void func_801628C8_ovl_26(void *arg0) {
    M2C_UNK *var_s1;
    s32 temp_v1;
    s32 var_s2;

    if (M2C_FIELD(arg0, u8 *, 0x2B4) != 0) {
        var_s1 = M2C_FIELD(&D_800C7650_ovl_01, M2C_UNK **, 0x19D3C);
    } else {
        var_s1 = &D_800E10D0_ovl_01;
    }
    if (M2C_FIELD(arg0, u8 *, 0x2B4) != 0) {
        var_s2 = M2C_FIELD(arg0, s32 *, 0x290) & 0x3FFFFFFF;
    } else {
        var_s2 = M2C_FIELD(arg0, s32 *, 0x28C);
    }
    D_80033678(arg0);
    M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + 0x800 + (M2C_FIELD(arg0, u8 *, 0x2CD) << 0xB));
    temp_v1 = func_80032EA4_ovl_01(arg0, M2C_FIELD(var_s1, s32 *, 0x28), M2C_FIELD(var_s1, s32 *, 0x30), 0x200);
    M2C_FIELD(arg0, u16 *, 0x66) = (u16) ((M2C_FIELD(arg0, u16 *, 0x66) - 0x800) - (M2C_FIELD(arg0, u8 *, 0x2CD) << 0xB));
    if ((var_s2 < 0xBB8) && ((temp_v1 << 0x10) == 0) && (M2C_FIELD(arg0, u8 *, 0x2CE) == 0)) {
        M2C_FIELD(arg0, s8 *, 5) = 2;
        M2C_FIELD(arg0, s16 *, 6) = 0;
    }
    if (M2C_FIELD(var_s1, s16 *, 0x1F2) < 0) {
        M2C_FIELD(arg0, s8 *, 5) = 0;
        M2C_FIELD(arg0, s16 *, 6) = 0;
    }
    func_801629EC_ovl_26(arg0);
    func_80166984_ovl_26(arg0);
    func_801625F8_ovl_26(arg0);
}
