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

void func_80165D98_ovl_32(void *arg0, void *arg1) {
    u8 temp_v0;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_a0;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x2B5);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 0x2B5) = 1U;
        M2C_FIELD(arg0, u16 *, 0x2B8) = 0x24U;
        M2C_FIELD(arg0, u8 *, 0x2B7) = 0xAU;
        M2C_FIELD(arg0, u8 *, 0x2BC) = 0xAU;
        M2C_FIELD(arg0, s16 *, 0x2BA) = 1;
        /* fallthrough */
    case 1:
        temp_a0 = M2C_FIELD(arg1, void **, 0x120);
        M2C_FIELD(temp_a0, u16 *, 0x10) = (u16) (M2C_FIELD(temp_a0, u16 *, 0x10) + M2C_FIELD(arg0, u16 *, 0x2B8));
        temp_v0 = M2C_FIELD(arg0, u8 *, 0x2B7) - 1;
        M2C_FIELD(arg0, u8 *, 0x2B7) = temp_v0;
        M2C_FIELD(arg0, u16 *, 0x2B8) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B8) - (M2C_FIELD(arg0, s16 *, 0x2BA) * 4));
        if ((s8) temp_v0 == -1) {
            temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x2BC);
            M2C_FIELD(arg0, u8 *, 0x2BC) = (u8) (temp_v1_2 - 1);
            M2C_FIELD(arg0, u8 *, 0x2B7) = temp_v1_2;
            M2C_FIELD(arg0, s16 *, 0x2BA) = (s16) -M2C_FIELD(arg0, s16 *, 0x2BA);
            if ((s8) M2C_FIELD(arg0, u8 *, 0x2B7) == 0) {
                M2C_FIELD(arg0, s8 *, 0x2B4) = 0;
                M2C_FIELD(arg0, u8 *, 0x2B5) = 0U;
            } else {
                return;
            }
        } else {
            return;
        }
        break;
    }
}
