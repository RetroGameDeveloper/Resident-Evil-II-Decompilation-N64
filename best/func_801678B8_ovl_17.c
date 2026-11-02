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

M2C_UNK func_80077D48_ovl_01(u8, void *);           /* extern */
extern M2C_UNK D_80167FB8_ovl_17;

void func_801678B8_ovl_17(void *arg0) {
    u8 var_a0;

    if (*M2C_FIELD(arg0, s32 **, 0x214) & 0x100000) {
        var_a0 = 0xA;
        if (M2C_FIELD(arg0, s16 *, 0x1A8) == 0) {
            var_a0 = *(M2C_FIELD(arg0, u8 *, 0x2D4) + &D_80167FB8_ovl_17);
        }
        func_80077D48_ovl_01(var_a0, arg0);
        M2C_FIELD(arg0, u8 *, 0x2D4) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2D4) + 1) % 3);
    }
}
