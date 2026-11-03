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

M2C_UNK func_8004A26C_ovl_01(s32, M2C_UNK *, u8, s16); /* extern */
M2C_UNK func_80082D7C_ovl_01(M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_8004A584_ovl_01(void) {
    M2C_UNK sp50;
    M2C_UNK sp54;
    M2C_UNK sp60;

    func_8004A26C_ovl_01(M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 *, 0x24) + (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FC) << 5), &sp50, M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A41), M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19A42));
    func_80082D7C_ovl_01(&sp54, &sp60);
}
