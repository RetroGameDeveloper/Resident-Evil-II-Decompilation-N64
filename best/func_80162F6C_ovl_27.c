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

M2C_UNK D_80033678(void *);                         /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK); /* extern */
u8 func_801639B0_ovl_27(void *, M2C_UNK);           /* extern */

void func_80162F6C_ovl_27(void *arg0, M2C_UNK arg1) {
    s16 temp_v0;
    s16 temp_v1_2;
    s16 var_v0;
    s16 var_v1;
    s16 var_v1_2;
    s32 temp_s1;
    u16 temp_a0;
    u16 temp_a1;
    u8 temp_v1;
    u8 var_v0_2;

    temp_v1 = M2C_FIELD(arg0, u8 *, 7);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_a1 = (u16) M2C_FIELD(arg0, s16 *, 0x2C2);
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x04000700;
        M2C_FIELD(arg0, s8 *, 0x206) = 0;
        M2C_FIELD(arg0, s8 *, 0x207) = 0;
        M2C_FIELD(arg0, u8 *, 0x2C5) = 0U;
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) M2C_FIELD(arg0, u16 *, 0x2BC);
        M2C_FIELD(arg0, s16 *, 0x1F6) = (s16) temp_a1;
        M2C_FIELD(arg0, s16 *, 0x2C2) = (s16) (temp_a1 & 0xFFF);
        /* fallthrough */
    case 1:
        temp_a0 = (u16) M2C_FIELD(arg0, s16 *, 0x2C2);
        temp_v0 = 0x800 - temp_a0;
        var_v0 = temp_v0;
        if (temp_v0 < 0) {
            var_v0 = -temp_v0;
        }
        if (var_v0 >= 0x101) {
            if (temp_v0 > 0) {
                var_v1 = (s16) temp_a0 + 0x100;
            } else {
                var_v1 = (s16) temp_a0 - 0x100;
            }
            M2C_FIELD(arg0, s16 *, 0x2C2) = var_v1;
            M2C_FIELD(arg0, s8 *, 0x206) = (s8) ((u8) M2C_FIELD(arg0, s8 *, 0x206) + 1);
        }
        func_80089D34_ovl_01(arg0, arg1, 0x200);
        D_80033678(arg0);
        temp_s1 = *M2C_FIELD(arg0, s32 **, 0x214);
        if ((temp_s1 & 0x20000) && (M2C_FIELD(arg0, u8 *, 0x2C5) == 0)) {
            M2C_FIELD(arg0, u8 *, 0x2C5) = func_801639B0_ovl_27(arg0, 5);
        }
        if (temp_s1 & 0x10000) {
            M2C_FIELD(arg0, u8 *, 7) = 2U;
            return;
        }
        return;
    case 2:
        if ((M2C_FIELD(arg0, s8 *, 0x207) == 0) && (func_80089D34_ovl_01(arg0, arg1, 0x200) != 0)) {
            M2C_FIELD(arg0, s8 *, 0x207) = 1;
        }
        if (M2C_FIELD(arg0, s8 *, 0x206) != 0) {
            temp_v1_2 = M2C_FIELD(arg0, s16 *, 0x2C2);
            if (M2C_FIELD(arg0, s16 *, 0x1F6) <= 0) {
                var_v1_2 = temp_v1_2 + 0x100;
            } else {
                var_v1_2 = temp_v1_2 - 0x100;
            }
            M2C_FIELD(arg0, s16 *, 0x2C2) = var_v1_2;
            M2C_FIELD(arg0, s8 *, 0x206) = (s8) ((u8) M2C_FIELD(arg0, s8 *, 0x206) - 1);
            return;
        }
        M2C_FIELD(arg0, u8 *, 7) = 3U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x033C0700;
        M2C_FIELD(arg0, s16 *, 0x2C2) = (s16) (u16) M2C_FIELD(arg0, s16 *, 0x1F6);
        return;
    case 3:
        func_80089D34_ovl_01(arg0, arg1, 0x200);
        if (M2C_FIELD(arg0, u8 *, 0x1EA) == 0) {
            if (M2C_FIELD(arg0, u8 *, 0x2C5) != 0) {
                var_v0_2 = 0;
            } else {
                var_v0_2 = M2C_FIELD(arg0, u8 *, 0x2CB) - 1;
            }
            M2C_FIELD(arg0, u8 *, 0x2CB) = var_v0_2;
            if (var_v0_2 & 0xFF) {
                M2C_FIELD(arg0, s16 *, 6) = 0;
                M2C_FIELD(arg0, s8 *, 0x2BE) = 0x3C;
                return;
            }
            M2C_FIELD(arg0, s16 *, 6) = 0x200;
        }
        break;
    }
}
