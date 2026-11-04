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

M2C_UNK D_800324AC(void *, M2C_UNK);                /* extern */
M2C_UNK func_8004A5E4_ovl_01(s32, M2C_UNK);         /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK);      /* extern */

void func_80164E04_ovl_19(void *arg0) {
    s32 *var_a0;
    s32 *var_a0_2;
    s32 temp_v1_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    u16 temp_v0;
    u8 temp_v1;
    void *temp_s2;
    void *temp_s5;
    void *var_s0;
    void *var_s2;

    temp_v1 = M2C_FIELD(arg0, u8 *, 5);
    temp_s5 = M2C_FIELD(arg0, void **, 0x208);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s16 *, 0x1F2) = -1;
        M2C_FIELD(arg0, u8 *, 5) = 1U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x09000000;
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0U;
        func_80089D34_ovl_01(arg0, 0x100);
        /* fallthrough */
    case 1:
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) + 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
        if ((s16) temp_v0 == 0x1F) {
            var_s1 = 0xA;
            var_s2 = M2C_FIELD(arg0, void **, 0x234);
            var_s0 = var_s2 + 0x60;
            do {
                func_8004A5E4_ovl_01(var_s2 + 4, 1);
                var_s2 += 0x178;
                var_s1 -= 1;
                M2C_FIELD(var_s0, s32 *, -0x5C) = (s32) (M2C_FIELD(var_s0, s32 *, -0x5C) | 2);
                M2C_FIELD(var_s0, s32 *, 0) = (s32) (M2C_FIELD(var_s0, s32 *, 0) + 0xFFEFCFF0);
                var_s0 += 0x178;
            } while (var_s1 != 0);
        }
        if ((s16) M2C_FIELD(arg0, u16 *, 0x1F4) >= 0x1F) {
            temp_s2 = M2C_FIELD(arg0, void **, 0x234);
            var_s1_2 = 0xA;
            if (M2C_FIELD(temp_s2, u8 *, 0x63) != 0) {
                var_a0 = temp_s2 + 0x60;
                do {
                    var_s1_2 -= 1;
                    *var_a0 += 0xFFFEFFFF;
                    var_a0 += 0x178;
                } while (var_s1_2 != 0);
            }
            var_s1_3 = 0xA;
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x60) & 0xFF00) {
                var_a0_2 = M2C_FIELD(arg0, void **, 0x234) + 0x60;
                do {
                    var_s1_3 -= 1;
                    *var_a0_2 -= 0x100;
                    var_a0_2 += 0x178;
                } while (var_s1_3 != 0);
            }
        }
        if (!(M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x60) & 0xFFFFFF)) {
            M2C_FIELD(arg0, u8 *, 5) = 2U;
        }
        temp_v1_2 = M2C_FIELD(temp_s5, s32 *, 0x18);
        if (temp_v1_2 & 0xFF0000) {
            M2C_FIELD(temp_s5, s32 *, 0x18) = (s32) (temp_v1_2 + 0xFFFF0000);
        }
        if (M2C_FIELD(temp_s5, s32 *, 0x18) & 0xFF000000) {
            M2C_FIELD(temp_s5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_s5, s32 *, 0x18) + 0xFDFFFE00);
        }
        M2C_FIELD(temp_s5, s8 *, 0x1B) = 1;
        return;
    case 2:
        D_800324AC(arg0, 1);
        M2C_FIELD(temp_s5, s8 *, 0xE) = 0;
        return;
    }
}
