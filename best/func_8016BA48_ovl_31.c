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

M2C_UNK D_80034224(s32, s16, s16, s32);             /* extern */
extern s32 D_800EB230_ovl_01;
extern M2C_UNK D_8016C32C_ovl_31;

void func_8016BA48_ovl_31(void *arg0, s32 arg1) {
    s16 var_v0;
    s16 var_v0_2;
    s8 temp_t1;
    s8 temp_v1;
    s8 temp_v1_2;
    u8 temp_a1;
    void *temp_a3;

    temp_a3 = ((arg1 & 0xFF) * 0x1C) + &D_8016C32C_ovl_31;
    if (M2C_FIELD(temp_a3, s8 *, 2) < M2C_FIELD(temp_a3, s8 *, 0)) {
        M2C_FIELD(temp_a3, u16 *, 8) = -1U;
    }
    if (M2C_FIELD(temp_a3, s8 *, 0) < M2C_FIELD(temp_a3, s8 *, 2)) {
        M2C_FIELD(temp_a3, u16 *, 8) = 1U;
    }
    if (M2C_FIELD(temp_a3, s8 *, 3) < M2C_FIELD(temp_a3, s8 *, 1)) {
        M2C_FIELD(temp_a3, u16 *, 0xA) = -1U;
    }
    if (M2C_FIELD(temp_a3, s8 *, 1) < M2C_FIELD(temp_a3, s8 *, 3)) {
        M2C_FIELD(temp_a3, u16 *, 0xA) = 1U;
    }
    if (-(s16) M2C_FIELD(temp_a3, u16 *, 8) == (s16) M2C_FIELD(temp_a3, u16 *, 8)) {
        M2C_FIELD(temp_a3, s16 *, 4) = (s16) ((M2C_FIELD(temp_a3, s16 *, 4) * 2) / 3);
    }
    if (-(s16) M2C_FIELD(temp_a3, u16 *, 0xA) == (s16) M2C_FIELD(temp_a3, u16 *, 0xA)) {
        M2C_FIELD(temp_a3, s16 *, 6) = (s16) ((M2C_FIELD(temp_a3, s16 *, 6) * 2) / 3);
    }
    if (M2C_FIELD(temp_a3, s8 *, 0) == M2C_FIELD(temp_a3, s8 *, 2)) {
        var_v0 = M2C_FIELD(temp_a3, s16 *, 4);
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        if (var_v0 < 3) {
            M2C_FIELD(temp_a3, s8 *, 0) = (s8) (u8) M2C_FIELD(temp_a3, s8 *, 2);
            M2C_FIELD(temp_a3, u16 *, 8) = 0U;
            M2C_FIELD(temp_a3, s16 *, 4) = 0;
        }
    }
    if (M2C_FIELD(temp_a3, s8 *, 1) == M2C_FIELD(temp_a3, s8 *, 3)) {
        var_v0_2 = M2C_FIELD(temp_a3, s16 *, 6);
        if (var_v0_2 < 0) {
            var_v0_2 = -var_v0_2;
        }
        if (var_v0_2 < 3) {
            M2C_FIELD(temp_a3, s8 *, 1) = (s8) (u8) M2C_FIELD(temp_a3, s8 *, 3);
            M2C_FIELD(temp_a3, u16 *, 0xA) = 0U;
            M2C_FIELD(temp_a3, s16 *, 6) = 0;
        }
    }
    temp_v1 = M2C_FIELD(temp_a3, s8 *, 0);
    if ((temp_v1 == M2C_FIELD(temp_a3, s8 *, 2)) && ((temp_v1 >= M2C_FIELD(temp_a3, s8 *, 0x15)) || (M2C_FIELD(temp_a3, s8 *, 0x16) >= temp_v1))) {
        M2C_FIELD(temp_a3, s16 *, 4) = 0;
        M2C_FIELD(temp_a3, u16 *, 8) = 0U;
    }
    temp_v1_2 = M2C_FIELD(temp_a3, s8 *, 1);
    if ((temp_v1_2 == M2C_FIELD(temp_a3, s8 *, 3)) && ((temp_v1_2 >= M2C_FIELD(temp_a3, s8 *, 0x17)) || (M2C_FIELD(temp_a3, s8 *, 0x18) >= temp_v1_2))) {
        M2C_FIELD(temp_a3, s16 *, 6) = 0;
        M2C_FIELD(temp_a3, u16 *, 0xA) = 0U;
    }
    temp_a1 = (u8) M2C_FIELD(temp_a3, s8 *, 0);
    temp_t1 = (s8) (u8) M2C_FIELD(temp_a3, s8 *, 1);
    M2C_FIELD(temp_a3, s16 *, 4) = (s16) ((u16) M2C_FIELD(temp_a3, s16 *, 4) + M2C_FIELD(temp_a3, u16 *, 8));
    M2C_FIELD(temp_a3, s16 *, 6) = (s16) ((u16) M2C_FIELD(temp_a3, s16 *, 6) + M2C_FIELD(temp_a3, u16 *, 0xA));
    M2C_FIELD(temp_a3, s8 *, 0) = (s8) (temp_a1 + M2C_FIELD(temp_a3, u8 *, 5));
    M2C_FIELD(temp_a3, s8 *, 1) = (s8) ((u8) M2C_FIELD(temp_a3, s8 *, 1) + M2C_FIELD(temp_a3, u8 *, 7));
    if (M2C_FIELD(temp_a3, s8 *, 0x15) < M2C_FIELD(temp_a3, s8 *, 0)) {
        M2C_FIELD(temp_a3, s8 *, 0) = (s8) (u8) M2C_FIELD(temp_a3, s8 *, 0x15);
    }
    if (M2C_FIELD(temp_a3, s8 *, 0) < M2C_FIELD(temp_a3, s8 *, 0x16)) {
        M2C_FIELD(temp_a3, s8 *, 0) = (s8) (u8) M2C_FIELD(temp_a3, s8 *, 0x16);
    }
    if (M2C_FIELD(temp_a3, s8 *, 0x17) < M2C_FIELD(temp_a3, s8 *, 1)) {
        M2C_FIELD(temp_a3, s8 *, 1) = (s8) (u8) M2C_FIELD(temp_a3, s8 *, 0x17);
    }
    if (M2C_FIELD(temp_a3, s8 *, 1) < M2C_FIELD(temp_a3, s8 *, 0x18)) {
        M2C_FIELD(temp_a3, s8 *, 1) = (s8) (u8) M2C_FIELD(temp_a3, s8 *, 0x18);
    }
    D_80034224(M2C_FIELD(arg0, s32 *, 0x234) + (M2C_FIELD(temp_a3, u8 *, 0x14) * 0x178), (s16) ((s8) (u8) M2C_FIELD(temp_a3, s8 *, 1) - temp_t1), (s16) ((s8) (u8) M2C_FIELD(temp_a3, s8 *, 0) - (s8) temp_a1), D_800EB230_ovl_01);
}
