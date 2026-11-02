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

M2C_UNK func_80027530_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800275F8_ovl_01(s32 *, s32 *, M2C_UNK, s32 *); /* extern */
M2C_UNK func_8006C0A0_ovl_01(M2C_UNK);              /* extern */
extern u8 D_8017E53F_ovl_05;
extern u8 D_8017E542_ovl_05;
extern s8 D_8017E549_ovl_05;
extern u8 D_8017E54C_ovl_05;
extern u8 D_8017E54D_ovl_05;

void func_8017B54C_ovl_05(void) {
    s32 sp10;
    s32 sp14;
    s32 *var_a1;
    s32 *var_a3;

    func_8006C0A0_ovl_01(0);
    if (D_8017E53F_ovl_05 & 8) {
        func_80027530_ovl_01(0x200, 0xC00, 7, 1);
        if ((D_8017E54D_ovl_05 != 3) && (D_8017E54C_ovl_05 != 3)) {
            if ((D_8017E54D_ovl_05 != 1) && (D_8017E54C_ovl_05 != 1)) {
                var_a1 = NULL;
                var_a3 = &sp10;
                sp10 = 0x3000;
                sp14 = 0x40018F00;
            } else {
                goto block_8;
            }
        } else {
            goto block_7;
        }
    } else {
        func_80027530_ovl_01(0x200, 0x1800, 7, 1);
block_7:
block_8:
        var_a1 = NULL;
        var_a3 = NULL;
    }
    func_800275F8_ovl_01(NULL, var_a1, 0xFFFF, var_a3);
    if (D_8017E542_ovl_05 != 0) {
        D_8017E549_ovl_05 = 3;
        D_8017E542_ovl_05 = 0;
        return;
    }
    D_8017E542_ovl_05 = 1;
}
