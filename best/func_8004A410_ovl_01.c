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

s32 func_8004A358_ovl_01(s32, u8, s32, M2C_UNK *);  /* extern */
M2C_UNK func_8004A4C0_ovl_01(void *);               /* extern */
M2C_UNK func_80088970_ovl_01(void *, s32, s32, void *); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern s32 D_801247D0_ovl_01;

void func_8004A410_ovl_01(void *arg0) {
    if ((M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A41) == 2) || (func_8004A358_ovl_01(M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 *, 0x24) + (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FC) << 5), M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A41), arg0 + 0x28, &D_800C7650_ovl_01) & 0xFF)) {
        func_8004A4C0_ovl_01(arg0);
        D_801247D0_ovl_01 |= 1;
        func_80088970_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x234), M2C_FIELD(arg0, s32 *, 0), arg0 + 0x28);
        D_801247D0_ovl_01 &= ~1;
    }
}
