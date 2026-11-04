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

s32 func_80033634_ovl_01(s32, s32);                 /* extern */
M2C_UNK func_80040D24_ovl_01(void *, void *);       /* extern */
M2C_UNK func_80040E88_ovl_01(void *, void *);       /* extern */
M2C_UNK func_80077B0C_ovl_01(s32, void *);          /* extern */
extern M2C_UNK D_80110EB4_ovl_01;
extern M2C_UNK D_80110ECC_ovl_01;

void func_8005C06C_ovl_01(void *arg0) {
    s16 temp_a0_3;
    s32 temp_a0_2;
    s32 temp_a0_4;
    s32 temp_a1;
    
    s32 temp_v1;
    u16 temp_v0;
    u8 temp_a0;
    u8 temp_a1_2;
    void *temp_s0;
    void *temp_s0_2;
    void *var_a0;
    void *var_s1;

    temp_a1 = M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFFF;
    if (temp_a1 != 0) {
        temp_a1_2 = M2C_FIELD((temp_a1 + &D_80110EB4_ovl_01), u8 *, -1);
        temp_a1 = temp_a1_2 - 1;
        if (temp_a1_2 != 0) {
            temp_a0 = M2C_FIELD(arg0, u8 *, 8);
            var_s1 = M2C_FIELD(arg0, s32 *, 0x234) + (*((temp_a1 * 6) + &D_80110ECC_ovl_01) * 0x178);
            if (temp_a0 & 1) {
                var_s1 += 0x5E0;
            }
            temp_a0_2 = temp_a0 & 0xFF;
            if ((temp_a0_2 == 0xE) || (temp_a0_2 == 0x41)) {
                var_s1 += 0x178;
            }
            if (M2C_FIELD(var_s1, s32 *, 0) & 1) {
                temp_a0_3 = M2C_FIELD(var_s1, s16 *, 0x28);
                temp_v0 = M2C_FIELD(var_s1, u16 *, 0x11C) + 0x14;
                M2C_FIELD(var_s1, u16 *, 0x11C) = temp_v0;
                temp_v1 = M2C_FIELD(var_s1, s32 *, 0x50) + (s16) temp_v0;
                M2C_FIELD(var_s1, s32 *, 0x50) = temp_v1;
                if (temp_a0_3 < temp_v1) {
                    if (M2C_FIELD(var_s1, s8 *, 0x111) != 0) {
                        M2C_FIELD(var_s1, s32 *, 0x50) = (s32) temp_a0_3;
                        temp_a0_4 = M2C_FIELD(var_s1, u16 *, 0x11E) & 2;
                        M2C_FIELD(var_s1, u16 *, 0x11C) = (u16) -((s16) M2C_FIELD(var_s1, u16 *, 0x11C) / 2);
                        M2C_FIELD(var_s1, s8 *, 0x111) = (s8) ((u8) M2C_FIELD(var_s1, s8 *, 0x111) - 1);
                        if (temp_a0_4 != 0) {
                            if (func_80033634_ovl_01(temp_a0_4, temp_a1) & 1) {
                                M2C_FIELD(var_s1, s16 *, 0x2A) = (s16) -M2C_FIELD(var_s1, s16 *, 0x2A);
                                M2C_FIELD(var_s1, s16 *, 0x2C) = (s16) -M2C_FIELD(var_s1, s16 *, 0x2C);
                            }
                        }
                        func_80077B0C_ovl_01(0x010E0001, var_s1 + 0x4C);
                    } else {
                        M2C_FIELD(var_s1, s32 *, 0) = (s32) (M2C_FIELD(var_s1, s32 *, 0) & ~1);
                    }
                }
                var_a0 = var_s1 + 0x58;
                if (M2C_FIELD(var_s1, s8 *, 0x111) != 0) {
                    temp_s0 = var_s1 + 8;
                    if (M2C_FIELD(var_s1, u16 *, 0x11E) & 1) {
                        M2C_FIELD(var_s1, s16 *, 0x58) = 0x100;
                        func_80040E88_ovl_01(var_a0, temp_s0);
                        func_80040D24_ovl_01(temp_s0, var_s1 + 0x38);
                        M2C_FIELD(var_s1, s32 *, 0x4C) = (s32) (M2C_FIELD(var_s1, s32 *, 0x4C) + M2C_FIELD(var_s1, s16 *, 0x2A));
                        M2C_FIELD(var_s1, s32 *, 0x54) = (s32) (M2C_FIELD(var_s1, s32 *, 0x54) + M2C_FIELD(var_s1, s16 *, 0x2C));
                    }
                    var_a0 = var_s1 + 0x58;
                    if (M2C_FIELD(var_s1, s8 *, 0x111) == 0) {
                        goto block_20;
                    }
                } else {
block_20:
                    temp_s0_2 = var_s1 + 8;
                    M2C_FIELD(var_s1, s16 *, 0x58) = 0x100;
                    func_80040E88_ovl_01(var_a0, temp_s0_2);
                    func_80040D24_ovl_01(temp_s0_2, var_s1 + 0x38);
                    M2C_FIELD(var_s1, s32 *, 0x4C) = (s32) (M2C_FIELD(var_s1, s32 *, 0x4C) + M2C_FIELD(var_s1, s16 *, 0x2A));
                    M2C_FIELD(var_s1, s32 *, 0x54) = (s32) (M2C_FIELD(var_s1, s32 *, 0x54) + M2C_FIELD(var_s1, s16 *, 0x2C));
                }
            }
        }
    }
}
