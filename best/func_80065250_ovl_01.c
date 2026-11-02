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

extern M2C_UNK D_800C7650_ovl_01;
extern void *D_800E138C_ovl_01;

void func_80065250_ovl_01(void) {
    s16 temp_s1;
    s32 var_s7;
    u16 temp_a1;
    u16 temp_v1;
    void **var_s2;
    void *temp_s0;

    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A60) & 0x20000000) {
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A60) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A60) & 0xDFFFFFFF);
        var_s7 = 1;
    } else {
        var_s7 = 0;
    }
    var_s2 = &D_800E138C_ovl_01;
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1828C) != &D_800E138C_ovl_01) {
        do {
            temp_s0 = *var_s2;
            M2C_FIELD(&D_800C7650_ovl_01, void **, 0x18288) = temp_s0;
            if (M2C_FIELD(temp_s0, s32 *, 0) & 1) {
                temp_v1 = M2C_FIELD(temp_s0, u16 *, 0x1AA);
                temp_s1 = M2C_FIELD(temp_s0, s16 *, 0x1F4);
                M2C_FIELD(temp_s0, u16 *, 0x1AA) = (u16) (temp_v1 & 0x7FFF);
                M2C_FIELD((((M2C_FIELD(temp_s0, u8 *, 8) - 0x10) * 4) + &D_800C7650_ovl_01), M2C_UNK (**)(void *), 0x19DC0)(temp_s0);
                if (temp_s1 != 0) {
                    temp_a1 = M2C_FIELD(temp_s0, u16 *, 0x1F6);
                    M2C_FIELD(temp_s0, s32 *, 4) = (s32) ((((temp_s1 & 0xFF00) - 0x100) << 8) | 0x04000000);
                    M2C_FIELD(temp_s0, s8 *, 0x1E8) = (s8) temp_s1;
                    M2C_FIELD(temp_s0, u16 *, 0x268) = temp_a1;
                    M2C_FIELD((((M2C_FIELD(temp_s0, u8 *, 8) - 0x10) * 4) + &D_800C7650_ovl_01), M2C_UNK (**)(void *, u16), 0x19DC0)(temp_s0, temp_a1);
                }
                M2C_FIELD(temp_s0, u16 *, 0x1AA) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x1AA) | (temp_v1 & 0x8000 & 0xFFFF));
            }
            var_s2 += 4;
        } while (var_s2 != M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1828C));
    }
    if (var_s7 != 0) {
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A60) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A60) | 0x20000000);
    }
}
