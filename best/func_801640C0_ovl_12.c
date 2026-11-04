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

M2C_UNK func_80032B8C_ovl_01(void *, M2C_UNK);      /* extern */
M2C_UNK func_800334F8_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;
extern M2C_UNK D_80166C10_ovl_12;

void func_801640C0_ovl_12(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s1;
    u16 temp_v0;
    u32 var_a0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 7);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, s8 *, 0x2B5) = 0;
        M2C_FIELD(arg0, s8 *, 0x2C9) = 0;
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (((func_80033634_ovl_01() & 0x3F) << 0x10) + 0x0E001F00);
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x80);
        break;
    case 1:
        if (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C72) >= 0) {
            var_a0 = 0xDAC;
            if ((M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 4) & 0xFFFF0000) == 0x01020000) {
                var_a0 = 0x1388;
            }
            if (var_a0 < (u32) M2C_FIELD(arg0, u32 *, 0x28C)) {
                if (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A7A) & 1) {
                    if (!(M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) & 0x80)) {
                        M2C_FIELD(arg0, s16 *, 6) = 0x100;
                        M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) = (u16) (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) | 0x80);
                    } else {
                        M2C_FIELD(arg0, u8 *, 7) = 2U;
                        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) *((func_80033634_ovl_01() & 7) + &D_80166C10_ovl_12);
                    }
                }
            } else {
block_18:
                M2C_FIELD(arg0, s16 *, 6) = 0x100;
            }
        }
        break;
    case 2:
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
        if ((temp_v0 << 0x10) == 0) {
            goto block_18;
        }
        break;
    }
    temp_s1 = *M2C_FIELD(arg0, s32 **, 0x214);
    if (temp_s1 & 0x30000) {
        M2C_FIELD(arg0, s8 *, 0x2BB) = 1;
        func_80166900_ovl_12(arg0, 4, 0);
        if ((temp_s1 & 0x20000) && !(func_80033634_ovl_01() & 3)) {
            M2C_FIELD(arg0, s8 *, 0x2BB) = 1;
            func_80166900_ovl_12(arg0, 4, (func_80033634_ovl_01() & 1) + 1);
        }
    }
    D_80033678(arg0);
    func_800334F8_ovl_01(arg0, arg1, arg2, 0);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x80);
    func_80032B8C_ovl_01(arg0, 0);
}
