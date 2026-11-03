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

M2C_UNK func_800662B8_ovl_01(void *, void *, void *); /* extern */

void func_801671EC_ovl_30(void *arg0, void *arg1) {
    u16 temp_v0;
    u16 temp_v0_2;
    u8 temp_v1;
    void *temp_a1;

    if (M2C_FIELD(arg1, u8 *, 0x15) == 0) {
        temp_v1 = M2C_FIELD(arg1, u8 *, 0x14);
        switch (temp_v1) {                          /* irregular */
        case 0:
            M2C_FIELD(arg1, u8 *, 0x14) = 1U;
            M2C_FIELD(arg1, u16 *, 0x16) = 0U;
            break;
        case 1:
            temp_v0 = M2C_FIELD(arg1, u16 *, 0x16) + 0x200;
            M2C_FIELD(arg1, u16 *, 0x16) = temp_v0;
            if ((s16) temp_v0 >= 0x2801) {
                M2C_FIELD(arg1, u16 *, 0x16) = 0x2800U;
                M2C_FIELD(arg1, u8 *, 0x14) = 2U;
            }
            break;
        case 2:
            temp_v0_2 = M2C_FIELD(arg1, u16 *, 0x16) - 0x800;
            M2C_FIELD(arg1, u16 *, 0x16) = temp_v0_2;
            if (temp_v0_2 & 0x8000) {
                M2C_FIELD(arg1, u16 *, 0x16) = 0U;
                M2C_FIELD(arg1, u8 *, 0x14) = 1U;
            }
            break;
        }
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x234) + 0x2F0;
        if ((s16) M2C_FIELD(arg1, u16 *, 0x16) < 0x1000) {
            M2C_FIELD(M2C_FIELD(temp_a1, void **, 0x120), s16 *, 0x10) = 0;
            M2C_FIELD(M2C_FIELD(temp_a1, void **, 0x120), s16 *, 0x14) = (s16) (0x1000 - M2C_FIELD(arg1, u16 *, 0x16));
        } else {
            M2C_FIELD(M2C_FIELD(temp_a1, void **, 0x120), s16 *, 0x10) = (s16) (M2C_FIELD(arg1, u16 *, 0x16) - 0x1000);
            M2C_FIELD(M2C_FIELD(temp_a1, void **, 0x120), s16 *, 0x14) = 0;
        }
        func_800662B8_ovl_01(arg0, temp_a1, arg0);
    }
}
