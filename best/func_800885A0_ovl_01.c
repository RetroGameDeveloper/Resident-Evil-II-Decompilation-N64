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

M2C_UNK func_8000BD80(M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *); /* extern */
extern M2C_UNK D_8012BC50_ovl_01;
extern M2C_UNK D_8012BCD0_ovl_01;
extern M2C_UNK D_8013A2F0;

s32 func_800885A0_ovl_01(void) {
    u16 temp_v0;
    void *temp_a2;

    temp_v0 = M2C_FIELD(&D_8012BC50_ovl_01, u16 *, 4) + 1;
    if ((u16) M2C_FIELD(&D_8012BC50_ovl_01, u16 *, 4) >= (u16) M2C_FIELD(&D_8012BC50_ovl_01, u16 *, 2)) {
        return 0;
    }
    M2C_FIELD(&D_8012BC50_ovl_01, u16 *, 4) = temp_v0;
    temp_a2 = (((temp_v0 & 0xFFFF) * 0xC) + M2C_FIELD(&D_8012BC50_ovl_01, s32 *, 8)) - 0xC;
    func_8000BD80(&D_8013A2F0, 0, 0, M2C_FIELD(temp_a2, s32 *, 4), M2C_FIELD(temp_a2, s32 *, 8), M2C_FIELD(((M2C_FIELD(&D_8012BC50_ovl_01, u16 *, 4) * 0xC) + M2C_FIELD(&D_8012BC50_ovl_01, s32 *, 8)), s32 *, -0xC), &D_8012BCD0_ovl_01);
    return 1;
}
