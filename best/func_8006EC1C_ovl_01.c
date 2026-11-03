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

M2C_UNK func_80083C44_ovl_01(s16, u8, M2C_UNK, s16); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern s8 D_800E9127_ovl_01;
extern u8 D_80114ED5_ovl_01;

void func_8006EC1C_ovl_01(s16 arg0) {
    M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FC) = arg0;
    D_800E9127_ovl_01 = 1;
    D_80114ED5_ovl_01 = M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x215FD);
    if (!(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x02000000)) {
        func_80083C44_ovl_01(arg0, M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x215FD), 0x18000, arg0);
    }
}
