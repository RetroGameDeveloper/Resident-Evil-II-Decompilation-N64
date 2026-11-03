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

M2C_UNK func_800AC5B4_ovl_01(M2C_UNK, u8, u8, s32); /* extern */
extern M2C_UNK D_80143BF0;
extern void *D_80143BF8;

void func_800A04B8_ovl_01(void) {
    s32 var_a2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s4;
    s32 var_v0;
    u16 temp_v1_3;
    u32 temp_a0_2;
    u8 temp_a2;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_a0;
    void *temp_a1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *var_v0_2;

    var_s4 = 0;
    var_s2 = 0;
    do {
        if (M2C_FIELD((D_80143BF8 + var_s2), s32 *, 0x578) != 0) {
            var_s1 = 0;
            do {
                temp_a0 = D_80143BF8 + var_s2;
                temp_v0 = M2C_FIELD(temp_a0, void **, 0x578);
                temp_v1 = M2C_FIELD(temp_v0, u8 *, 0);
                temp_a2 = M2C_FIELD(temp_v0, u8 *, 1);
                if ((temp_v1 == 0x80) && (temp_a2 == 0)) {
                    M2C_FIELD(temp_a0, void **, 0x578) = NULL;
                    goto block_14;
                }
                if (temp_v1 & 0x80) {
                    var_a2 = temp_a2 | ((temp_v1 & 0x7F) << 8);
                    var_a3 = 2;
                } else {
                    var_a2 = temp_v1 & 0xFF;
                    var_a3 = 1;
                }
                temp_a1 = D_80143BF8 + var_s2;
                temp_a0_2 = var_a2 + M2C_FIELD(temp_a1, u32 *, 0x584);
                if ((u32) (M2C_FIELD(temp_a1, s32 *, 0x56C) + M2C_FIELD(D_80143BF8, s32 *, 0x120)) >= temp_a0_2) {
                    M2C_FIELD(temp_a1, u32 *, 0x584) = temp_a0_2;
                    temp_v0_2 = M2C_FIELD(temp_a1, void **, 0x578) + var_a3;
                    M2C_FIELD(temp_a1, void **, 0x578) = temp_v0_2;
                    temp_v1_2 = M2C_FIELD(temp_v0_2, u8 *, 0);
                    if (temp_v1_2 & 0x80) {
                        var_a3_2 = (s32) ((M2C_FIELD(temp_v0_2, u8 *, 1) | ((temp_v1_2 & 0x7F) << 8)) << 0x11) >> 0x11;
                        var_v0_2 = temp_v0_2 + 2;
                    } else {
                        var_a3_2 = (s32) (temp_v1_2 << 0x19) >> 0x19;
                        var_v0_2 = temp_v0_2 + 1;
                    }
                    M2C_FIELD(temp_a1, void **, 0x578) = var_v0_2;
                    temp_v0_3 = D_80143BF8 + var_s2;
                    temp_v1_3 = M2C_FIELD(temp_v0_3, u16 *, 0x580) + var_a3_2;
                    M2C_FIELD(temp_v0_3, u16 *, 0x580) = temp_v1_3;
                    func_800AC5B4_ovl_01(0x80, M2C_FIELD(temp_v0_3, u8 *, 0x58C), M2C_FIELD(&D_80143BF0, u8 *, 3), (temp_v1_3 >> 7) & 0xFF);
                    temp_v0_4 = D_80143BF8 + var_s2;
                    func_800AC5B4_ovl_01(0x81, M2C_FIELD(temp_v0_4, u8 *, 0x58C), M2C_FIELD(&D_80143BF0, u8 *, 3), M2C_FIELD(temp_v0_4, u8 *, 0x581) & 0x7F);
                    var_v0 = var_s1 & 0xFF;
                } else {
block_14:
                    var_s1 = 1;
                    var_v0 = 1 & 0xFF;
                }
            } while (var_v0 == 0);
        }
        var_s4 += 1;
        var_s2 += 0x28;
    } while (var_s4 < 0x40);
}
