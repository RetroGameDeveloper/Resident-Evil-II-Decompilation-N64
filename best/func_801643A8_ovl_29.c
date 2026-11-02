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

s32 func_80032EA4_ovl_01(s32, s32, M2C_UNK);        /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_801643A8_ovl_29(void *arg0) {
    u32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, u32 *, 0x28C);
    if (((func_80032EA4_ovl_01(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AA8), M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AB0), 0x400) << 0x10) == 0) && (temp_s0 >= 0x9C5U)) {
        M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
    }
}
