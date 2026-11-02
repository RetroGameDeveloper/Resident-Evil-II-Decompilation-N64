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

s32 func_8008C4FC_ovl_01(u8);                       /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_8012BF38_ovl_01;
extern M2C_UNK D_8012FF48_ovl_01;

u32 func_8008CFEC_ovl_01(void) {
    u32 temp_v0;

    temp_v0 = ~func_8008C4FC_ovl_01(*M2C_FIELD(((M2C_FIELD(((M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 8) * 4) + &D_800C7650_ovl_01), u8 *, 0x21818) * 8) + &D_8012FF48_ovl_01), u8 **, 4));
    if (M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xA) != 0x11) {
        return temp_v0 >> 0x1F;
    }
    return 0U;
}
