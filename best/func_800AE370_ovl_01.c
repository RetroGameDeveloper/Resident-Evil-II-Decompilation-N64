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

extern M2C_UNK D_801583D8;
extern u16 D_801587DA;
extern M2C_UNK D_801587E0;
extern M2C_UNK D_801588E0;

void func_800AE370_ovl_01(void *arg0) {
    u16 temp_v1_3;
    u16 temp_v1_4;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_a0;
    void *temp_a1;

    temp_a1 = (M2C_FIELD(arg0, u8 *, 0x63) * 4) + &D_801587E0;
    if (M2C_FIELD(temp_a1, u16 *, 2) == 1) {
        temp_v1 = M2C_FIELD(temp_a1, u8 *, 0);
        if (temp_v1 != 0xFF) {
            M2C_FIELD(((temp_v1 * 4) + &D_801587E0), u8 *, 1) = (u8) M2C_FIELD(temp_a1, u8 *, 1);
        } else {
            *(M2C_FIELD(arg0, u8 *, 0x2E) + &D_801588E0) = M2C_FIELD(temp_a1, u8 *, 1);
        }
        temp_v1_2 = M2C_FIELD(temp_a1, u8 *, 1);
        if (temp_v1_2 != 0xFF) {
            *((temp_v1_2 * 4) + &D_801587E0) = M2C_FIELD(temp_a1, u8 *, 0);
        } else if (M2C_FIELD(temp_a1, u8 *, 0) == temp_v1_2) {
            temp_a0 = (M2C_FIELD(arg0, u8 *, 0x2E) * 4) + &D_801583D8;
            temp_v1_3 = M2C_FIELD(temp_a0, u16 *, 2);
            if (temp_v1_3 != 0xFFFF) {
                *((temp_v1_3 * 4) + &D_801583D8) = M2C_FIELD(temp_a0, u16 *, 0);
            } else {
                D_801587DA = M2C_FIELD(temp_a0, u16 *, 0);
            }
            temp_v1_4 = M2C_FIELD(temp_a0, u16 *, 0);
            if (temp_v1_4 != 0xFFFF) {
                M2C_FIELD(((temp_v1_4 * 4) + &D_801583D8), u16 *, 2) = (u16) M2C_FIELD(temp_a0, u16 *, 2);
            }
        }
        M2C_FIELD(temp_a1, u16 *, 2) = 0U;
    }
}
