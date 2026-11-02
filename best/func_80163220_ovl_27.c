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

s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801636DC_ovl_27(void *, M2C_UNK);      /* extern */
M2C_UNK func_80163B38_ovl_27(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_80163220_ovl_27(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_a1;
    s32 var_a1_2;
    u16 temp_v0;
    u32 var_a0;
    u32 var_a0_2;
    u8 temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        var_a0 = 0;
        var_a1 = 0;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u16 *, 0x212) = 0x1000U;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x800);
        do {
            var_a0 += 1;
            temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x234) + var_a1;
            var_a1 += 0x178;
            M2C_FIELD(temp_v1_2, s32 *, 0x60) = 0x3F2F5F;
        } while (var_a0 < 3U);
        func_80163B38_ovl_27(arg0, 0, 2, 1);
        if (M2C_FIELD(arg0, u8 *, 0x2C7) == 0) {
            M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (((func_80033634_ovl_01() & 7) << 0x10) + 0x05000700);
        }
        /* fallthrough */
    case 1:
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x212) - 0x20;
        M2C_FIELD(arg0, u16 *, 0x212) = temp_v0;
        var_a0_2 = 0;
        if ((s16) temp_v0 < 0xA00) {
            var_a1_2 = 0;
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            M2C_FIELD(arg0, u16 *, 0x212) = 0xA00U;
            do {
                var_a0_2 += 1;
                temp_v1_3 = M2C_FIELD(arg0, s32 *, 0x234) + var_a1_2;
                M2C_FIELD(temp_v1_3, s16 *, 0x130) = 0;
                M2C_FIELD(temp_v1_3, s16 *, 0x132) = 0;
                M2C_FIELD(temp_v1_3, s16 *, 0x136) = 0x1E;
                M2C_FIELD(temp_v1_3, s8 *, 0x134) = 0x14;
                M2C_FIELD(temp_v1_3, s8 *, 0x135) = 0x14;
                M2C_FIELD(temp_v1_3, s32 *, 0) = (s32) (M2C_FIELD(temp_v1_3, s32 *, 0) | 0x10);
                var_a1_2 += 0x178;
            } while (var_a0_2 < 3U);
        }
        if (M2C_FIELD(arg0, u8 *, 0x2C7) == 0) {
            func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        }
        break;
    }
    func_801636DC_ovl_27(arg0, 0);
}
