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

M2C_UNK func_80032C08_ovl_01(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800334F8_ovl_01(void *, M2C_UNK, M2C_UNK, u32); /* extern */
M2C_UNK func_80077F60_ovl_01(M2C_UNK, s32, void *); /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80082040_ovl_01(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v1_2;
    u16 temp_a3;
    u16 temp_a3_2;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s8 *, 0x1EA) = 7;
        if (M2C_FIELD(arg0, u16 *, 0x268) & 0x40) {
            M2C_FIELD(arg0, s8 *, 0x1EA) = 0;
        }
        temp_a3 = M2C_FIELD(arg0, u16 *, 0x268);
        if (temp_a3 & 0x100) {
            func_800334F8_ovl_01(arg0, arg1, arg2, (temp_a3 & 0x80) != 0);
        }
        /* fallthrough */
    case 1:
        temp_v1_2 = *M2C_FIELD(arg0, s32 **, 0x214);
        if (temp_v1_2 & 0x4000) {
            func_80077F60_ovl_01(0, (((u32) (temp_v1_2 & 0x2000) >> 0xD) * 3) + 4, arg0);
            M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A7A) = (u16) (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A7A) | 2);
        }
        func_800334F8_ovl_01(arg0, arg1, arg2, (u8) M2C_FIELD(arg0, u8 *, 0x269) >> 7);
        if (func_80089D34_ovl_01(arg0, arg1, arg2, (((u8) M2C_FIELD(arg0, u8 *, 0x269) >> 7) << 0x10) | 0x200) != 0) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            if (M2C_FIELD(arg0, u16 *, 0x268) & 4) {
                M2C_FIELD(arg0, u8 *, 6) = 1U;
            }
            M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + M2C_FIELD(arg0, u16 *, 0x272));
            func_80032C08_ovl_01(arg0, 0, 0);
            return;
        }
        func_80032C08_ovl_01(arg0, 0, 0);
        temp_a3_2 = M2C_FIELD(arg0, u16 *, 0x268);
        if (temp_a3_2 & 8) {
            if (func_80089D34_ovl_01(arg0, arg1, arg2, (((temp_a3_2 & 0x80) != 0) << 0x10) | 0x200) != 0) {
                M2C_FIELD(arg0, u8 *, 6) = 2U;
                if (M2C_FIELD(arg0, u16 *, 0x268) & 4) {
                    M2C_FIELD(arg0, u8 *, 6) = 1U;
                }
                M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + M2C_FIELD(arg0, u16 *, 0x272));
            }
            func_80032C08_ovl_01(arg0, 0, 0);
        }
        M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + M2C_FIELD(arg0, u16 *, 0x270));
        return;
    }
}
