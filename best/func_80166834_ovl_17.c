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

extern M2C_UNK D_80167F6C_ovl_17;

void func_80166834_ovl_17(void *arg0) {
    s16 temp_a3;
    s16 temp_v1_2;
    s16 temp_v1_3;
    u16 temp_a0;
    u16 temp_v0;
    u16 temp_v0_2;
    u8 temp_v1;
    void *temp_a2;

    temp_a2 = arg0 + 0x2B4;
    if (M2C_FIELD(temp_a2, u8 *, 0x26) != 0) {
        temp_a3 = M2C_FIELD(arg0, s16 *, 0x1A8);
        if (temp_a3 == 0) {
            M2C_FIELD(temp_a2, s8 *, 0x22) = 1;
            M2C_FIELD(temp_a2, s8 *, 0x27) = 0;
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s16 *, 0x25E);
            return;
        }
        temp_v1 = M2C_FIELD(temp_a2, u8 *, 0x26);
        switch (temp_v1) {                          /* irregular */
        case 1:
            M2C_FIELD(temp_a2, u8 *, 0x26) = 2U;
            M2C_FIELD(arg0, u16 *, 0x1E2) = 0x8CU;
            M2C_FIELD(temp_a2, u16 *, 0x2C) = 0U;
            /* fallthrough */
        case 2:
            temp_v0 = M2C_FIELD(temp_a2, u16 *, 0x2C) + M2C_FIELD(arg0, u16 *, 0x1E2);
            M2C_FIELD(temp_a2, u16 *, 0x2C) = temp_v0;
            temp_a0 = M2C_FIELD(arg0, u16 *, 0x1E2) - 0xF;
            M2C_FIELD(arg0, u16 *, 0x1E2) = temp_a0;
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s16 *, 0x1A8) + ((s16) temp_v0 + 0x46));
            if ((s16) temp_a0 <= 0) {
                if ((s16) temp_a0 < -0x46) {
                    M2C_FIELD(arg0, u16 *, 0x1E2) = -0x46U;
                }
                temp_v1_2 = M2C_FIELD(arg0, s16 *, 0x1A8);
                if (temp_v1_2 >= M2C_FIELD(arg0, s32 *, 0x2C)) {
                    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) temp_v1_2;
                    M2C_FIELD(temp_a2, u8 *, 0x26) = 3U;
                    return;
                }
                return;
            }
            temp_v1_3 = M2C_FIELD(arg0, s16 *, 0x25E);
            if (M2C_FIELD(arg0, s32 *, 0x2C) >= temp_v1_3) {
                M2C_FIELD(arg0, s32 *, 0x2C) = (s32) temp_v1_3;
                M2C_FIELD(arg0, u16 *, 0x1E2) = 0U;
                return;
            }
            break;
        case 3:
            temp_v0_2 = M2C_FIELD(arg0, u16 *, 0x1F6);
            M2C_FIELD(arg0, u16 *, 0x1F6) = (u16) (temp_v0_2 + 1);
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_a3 + (*(((u32) (temp_v0_2 & 0x3F) >> 3) + &D_80167F6C_ovl_17) + 0x46));
            break;
        }
    }
}
