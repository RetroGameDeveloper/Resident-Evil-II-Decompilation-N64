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

M2C_UNK func_8002751C_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80027530_ovl_01(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_800276B4_ovl_01(u8, M2C_UNK, void *, u8 *); /* extern */
M2C_UNK func_8009E86C_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
extern M2C_UNK D_800E9118_ovl_01;
extern u8 D_801326C8_ovl_01;
extern s8 D_801326CA_ovl_01;
extern u8 D_801326CB_ovl_01;
extern s32 D_801326E0_ovl_01;

void func_8009CE94_ovl_01(void) {
    u8 temp_v1;
    void *temp_a2;

    temp_a2 = (D_801326CB_ovl_01 * 0x2C) + &D_800E9118_ovl_01;
    if ((M2C_FIELD(temp_a2, s16 *, 0x10) != 0x7FFF) && ((u16) M2C_FIELD(temp_a2, s16 *, 0x10) != 0x8000) && (M2C_FIELD(temp_a2, s16 *, 0x12) != 0x100)) {
        if (D_801326C8_ovl_01 & 2) {
            if (func_800276B4_ovl_01(D_801326CB_ovl_01, 0x100, temp_a2, &D_801326CB_ovl_01) != 0) {
                temp_v1 = D_801326C8_ovl_01;
                D_801326C8_ovl_01 = temp_v1 & 0xFD;
                if (temp_v1 & 4) {
                    D_801326CA_ovl_01 = 3;
                    D_801326E0_ovl_01 = 0;
                    func_8009E86C_ovl_01(0, 1);
                } else {
                    if (temp_v1 & 8) {
                        D_801326CA_ovl_01 = 1;
                    } else {
                        D_801326CA_ovl_01 = 0;
                    }
                    D_801326C8_ovl_01 &= 0xF7;
                }
                func_8002751C_ovl_01(5, 0);
            }
        } else {
            func_80027530_ovl_01(D_801326CB_ovl_01 | 0x200, 0x100, 7, 1);
            D_801326CA_ovl_01 = 2;
            D_801326C8_ovl_01 |= 2;
        }
    }
}
