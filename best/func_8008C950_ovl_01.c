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

M2C_UNK func_80047BA4_ovl_01(M2C_UNK *, s16 *, M2C_UNK, s32); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_8012F4D0_ovl_01;

void func_8008C950_ovl_01(s32 arg0, M2C_UNK arg1) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    s16 sp16;

    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & 0x8000) {
        sp14 = 0x28;
        sp16 = 0x1E;
        sp10 = (arg0 % 3) * 0x28;
        sp12 = (arg0 / 3) * 0x1E;
        func_80047BA4_ovl_01(&D_8012F4D0_ovl_01, &sp10, arg1, arg0);
    }
}
