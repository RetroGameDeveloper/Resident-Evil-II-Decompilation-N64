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

s32 func_80032EA4_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;

void func_80162218_ovl_27(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK *var_s1;
    u16 temp_v0;
    u16 temp_v1;
    u16 var_v0;
    u8 temp_a0_2;
    void *temp_a0;

    temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
    M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x04000700;
        temp_a0 = M2C_FIELD(arg0, void **, 0x250);
        M2C_FIELD(arg0, s8 *, 0x2C5) = 0;
        M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
        if (M2C_FIELD(temp_a0, u8 *, 0x2B4) != 0) {
            var_s1 = M2C_FIELD(&D_800C7650_ovl_01, M2C_UNK **, 0x19D3C);
        } else {
            var_s1 = &D_800E10D0_ovl_01;
        }
        temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x66);
        temp_a0_2 = M2C_FIELD(arg0, u8 *, 0x2B5);
        M2C_FIELD(arg0, u16 *, 0x1F6) = temp_v1;
        if (temp_a0_2 == 3) {
            M2C_FIELD(arg0, u16 *, 0x1F6) = (u16) (M2C_FIELD(arg0, u16 *, 0x1F6) + 0x400 + ((func_80033634_ovl_01() & 1) << 0xB));
        } else {
            var_v0 = (s16) temp_v1 + 0x400;
            if (!(temp_a0_2 & 2)) {
                var_v0 = (s16) temp_v1 - 0x400;
            }
            M2C_FIELD(arg0, u16 *, 0x1F6) = var_v0;
        }
        M2C_FIELD(arg0, u16 *, 0x1F6) = (u16) (M2C_FIELD(arg0, u16 *, 0x1F6) + func_80032EA4_ovl_01(arg0, M2C_FIELD(var_s1, s32 *, 0x28), M2C_FIELD(var_s1, s32 *, 0x30), 0x100));
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
}
