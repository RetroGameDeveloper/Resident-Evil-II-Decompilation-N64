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

extern M2C_UNK D_8011A800_ovl_01;
extern s32 D_801247D8_ovl_01;

void func_8007A814_ovl_01(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a1;
    s32 var_a2;
    void *temp_v1;

    var_a2 = 7;
    if (M2C_FIELD(arg0, u16 *, 0x1AA) & 0x200) {
        var_a1 = 0xC;
        do {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x234) + (*(var_a1 + &D_8011A800_ovl_01) * 0x178);
            if (M2C_FIELD(temp_v1, s16 *, 0x11C) == 0) {
                temp_v0 = M2C_FIELD(temp_v1, s32 *, 0x60) + 0x10101;
                M2C_FIELD(temp_v1, s32 *, 0x60) = temp_v0;
                if ((temp_v0 & 0xFFFFFF) == 0x404040) {
                    M2C_FIELD(temp_v1, s16 *, 0x11C) = 1;
                }
            }
            var_a2 -= 1;
            if (M2C_FIELD(temp_v1, s16 *, 0x11C) == 1) {
                temp_v0_2 = M2C_FIELD(temp_v1, s32 *, 0x60) + 0xFFFEFEFF;
                M2C_FIELD(temp_v1, s32 *, 0x60) = temp_v0_2;
                if (!(temp_v0_2 & 0xFFFFFF)) {
                    M2C_FIELD(temp_v1, s16 *, 0x11C) = 2;
                    M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFDFF);
                    M2C_FIELD(temp_v1, s32 *, 4) = (s32) (M2C_FIELD(temp_v1, s32 *, 4) & ~2);
                }
            }
            var_a1 -= 2;
        } while (var_a2 != 0);
        temp_v0_3 = D_801247D8_ovl_01 - 2;
        D_801247D8_ovl_01 = temp_v0_3;
        if (temp_v0_3 < 0) {
            D_801247D8_ovl_01 = 0;
        }
    }
}
