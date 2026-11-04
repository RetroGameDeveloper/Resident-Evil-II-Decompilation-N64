/* machine draft (m2c) for gcc-2.7.2-kmc -O2 -mips3 -G0 -mgp32 -mfp32 -mcpu=r4600, tried by autopilot */
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
M2C_UNK func_80032DEC_ovl_01(void *, s16, s16, M2C_UNK); /* extern */
s32 func_80032EA4_ovl_01(void *, s16, s16, M2C_UNK); /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80165BE8_ovl_13(void *, M2C_UNK);      /* extern */
M2C_UNK func_80166158_ovl_13(void *, M2C_UNK);      /* extern */

void func_80163488_ovl_13(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_s1;
    s8 temp_v0;
    s8 temp_v0_2;
    u8 temp_v1;
    void *var_s2;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    if (temp_v1 != 0) {
        var_s2 = arg0 + 0x2B4;
        if (temp_v1 != 1) {
            return;
        }
        goto block_6;
    }
    if (!(func_80033634_ovl_01() & 7)) {
        func_80166158_ovl_13(arg0, 1);
    }
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0x04000700;
    M2C_FIELD(arg0, u8 *, 0x2B5) = (u8) (func_80033634_ovl_01() & 0x3F);
    M2C_FIELD(arg0, u8 *, 0x2B6) = 0U;
    M2C_FIELD(arg0, s8 *, 0x2B9) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
    M2C_FIELD(arg0, u8 *, 6) = 1U;
    var_s2 = arg0 + 0x2B4;
block_6:
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x2B6) - 1;
    M2C_FIELD(var_s2, s8 *, 2) = temp_v0;
    if ((temp_v0 & 0xFF) == 0xFF) {
        M2C_FIELD(arg0, u8 *, 0x2B6) = 0xEU;
    }
    var_s1 = 0;
    func_80032DEC_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), 0x60);
    M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + (s8) M2C_FIELD(arg0, u8 *, 0x2B4));
    func_80032C08_ovl_01(arg0, 0, 0);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
    if ((func_80032EA4_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), 0x60) == 0) || (temp_v0_2 = M2C_FIELD(arg0, u8 *, 0x2B5) - 1, M2C_FIELD(var_s2, s8 *, 1) = temp_v0_2, ((temp_v0_2 & 0xFF) == 0xFF))) {
        var_s1 = 1;
    }
    if (var_s1 != 0) {
        func_80165BE8_ovl_13(arg0, 4);
    }
}
