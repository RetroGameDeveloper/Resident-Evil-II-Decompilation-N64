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

void func_80165E20_ovl_35(void *arg1) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 var_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg1, u8 *, 7);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg1, u8 *, 7) = 1U;
        M2C_FIELD(arg1, u16 *, 2) = -0x100U;
        M2C_FIELD(arg1, u16 *, 4) = -0x100U;
        /* fallthrough */
    case 1:
        temp_v0 = M2C_FIELD(arg1, u16 *, 2) + 0x200;
        M2C_FIELD(arg1, u16 *, 2) = temp_v0;
        if ((s16) temp_v0 >= 0x300) {
            M2C_FIELD(arg1, u8 *, 7) = 2U;
            var_v0 = 0x300;
block_11:
            M2C_FIELD(arg1, u16 *, 2) = var_v0;
        }
        break;
    case 2:
        temp_v0_2 = M2C_FIELD(arg1, u16 *, 2) - 0x200;
        M2C_FIELD(arg1, u16 *, 2) = temp_v0_2;
        var_v0 = -0x100U;
        if ((s16) temp_v0_2 < -0xFF) {
            M2C_FIELD(arg1, u8 *, 7) = 1U;
            goto block_11;
        }
        break;
    }
    M2C_FIELD(arg1, u16 *, 4) = (u16) M2C_FIELD(arg1, u16 *, 2);
}
