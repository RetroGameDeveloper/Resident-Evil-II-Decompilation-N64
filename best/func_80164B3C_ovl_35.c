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

void func_80164B3C_ovl_35(void *arg0) {
    s32 *var_a3_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a3;
    s32 var_v1;
    u32 var_a2;
    u32 var_a2_2;
    u32 var_a2_3;
    u8 temp_v1;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_t0;
    void *var_a1;
    void *var_v1_2;

    temp_v1 = M2C_FIELD(arg0, u8 *, 7);
    temp_t0 = arg0 + 0x2B4;
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s16 *, 0x25E);
        M2C_FIELD(temp_t0, s8 *, 6) = 1;
        M2C_FIELD(temp_t0, s8 *, 7) = 0;
        M2C_FIELD(temp_t0, u8 *, 9) = (u8) (M2C_FIELD(temp_t0, u8 *, 9) | 0x80);
        if (M2C_FIELD(temp_t0, s8 *, 0x17) == 0) {
            var_a2 = 3;
            var_v1 = 0x468;
            do {
                var_a2 += 1;
                temp_a1 = M2C_FIELD(arg0, s32 *, 0x234) + var_v1;
                M2C_FIELD(temp_a1, s16 *, 0x128) = 0xFFF;
                M2C_FIELD(temp_a1, s16 *, 0x126) = 0xFFF;
                M2C_FIELD(temp_a1, s16 *, 0x124) = 0xFFF;
                M2C_FIELD(temp_a1, s32 *, 0) = (s32) (M2C_FIELD(temp_a1, s32 *, 0) | 0x400);
                var_v1 += 0x178;
            } while (var_a2 < 7U);
            M2C_FIELD(temp_t0, s8 *, 0x18) = 0x20;
        }
        /* fallthrough */
    case 1:
        var_a2_2 = 3;
        var_a3 = 0x468;
        do {
            var_a2_2 += 1;
            temp_a1_2 = M2C_FIELD(arg0, s32 *, 0x234) + var_a3;
            M2C_FIELD(temp_a1_2, u16 *, 0x124) = (u16) (M2C_FIELD(temp_a1_2, u16 *, 0x124) - 0x80);
            M2C_FIELD(temp_a1_2, u16 *, 0x128) = (u16) (M2C_FIELD(temp_a1_2, u16 *, 0x128) - 0x80);
            M2C_FIELD(temp_a1_2, u16 *, 0x126) = (u16) (M2C_FIELD(temp_a1_2, u16 *, 0x126) - 0x80);
            var_a3 += 0x178;
        } while (var_a2_2 < 7U);
        if ((s16) M2C_FIELD(temp_a1_2, u16 *, 0x124) < 0x401) {
            M2C_FIELD(arg0, u8 *, 7) = 2U;
            return;
        }
        return;
    case 2:
        if (M2C_FIELD(arg0, s8 *, 0x2CB) == 0) {
            var_a2_3 = 0;
            temp_v0 = M2C_FIELD(arg0, s32 *, 0x234);
            var_a3_2 = temp_v0 + 0x468;
            var_a1 = temp_v0 + 0x4C8;
            var_v1_2 = temp_v0 + 0x1378;
            do {
                *var_a3_2 &= ~0x400;
                M2C_FIELD(var_a1, s32 *, 0x54) = (s32) M2C_FIELD(var_v1_2, s32 *, 0x54);
                M2C_FIELD(var_a1, s32 *, 0x5C) = (s32) M2C_FIELD(var_v1_2, s32 *, 0x5C);
                var_a2_3 += 1;
                M2C_FIELD(var_a1, s32 *, 0x58) = (s32) M2C_FIELD(var_v1_2, s32 *, 0x58);
                var_a3_2 += 0x178;
                M2C_FIELD(var_a1, s32 *, 0x60) = (s32) M2C_FIELD(var_v1_2, s32 *, 0x60);
                temp_v0_2 = M2C_FIELD(var_v1_2, s32 *, 0);
                var_v1_2 += 0x178;
                M2C_FIELD(var_a1, s32 *, 0) = temp_v0_2;
                var_a1 += 0x178;
            } while (var_a2_3 < 4U);
            M2C_FIELD(arg0, u8 *, 0x2BD) = 0U;
        } else {
            M2C_FIELD(arg0, s8 *, 0x2CC) = 0x10;
        }
        M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
        M2C_FIELD(arg0, u8 *, 0x2BD) = (u8) (M2C_FIELD(arg0, u8 *, 0x2BD) & 0x7F);
        M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) & 0x7F);
        M2C_FIELD(temp_t0, u8 *, 0xC) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(temp_t0, u8 *, 0xD) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(temp_t0, u8 *, 0xE) = (u8) M2C_FIELD(arg0, u8 *, 7);
        return;
    }
}
