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

M2C_UNK func_80032B8C_ovl_01(void *, M2C_UNK);      /* extern */
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_801628EC_ovl_36(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 var_v0;
    u16 temp_v0;
    u16 temp_v1;
    u16 var_v1;
    void *temp_s1;

    temp_s1 = arg0 + 0x2B4;
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s16 *, 0x1E0) = 2;
        M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
        M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
        var_v1 = -2U;
        if (func_80033634_ovl_01() & 1) {
            var_v1 = 2;
        }
        M2C_FIELD(temp_s1, u16 *, 6) = var_v1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0x1000U;
    }
    M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + M2C_FIELD(temp_s1, u16 *, 6));
    func_80032B8C_ovl_01(arg0, 0);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x80);
    temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 2;
    M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
    if (temp_v0 & 0x8000) {
        M2C_FIELD(temp_s1, u16 *, 6) = (u16) -(s16) M2C_FIELD(temp_s1, u16 *, 6);
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0x1000U;
    }
    if (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19C2A) == 0x11) {
        temp_v1 = M2C_FIELD(arg0, u16 *, 0x2E);
        var_v0 = -(s16) temp_v1;
        M2C_FIELD(arg0, u16 *, 0x134) = temp_v1;
    } else {
        M2C_FIELD(arg0, u16 *, 0x134) = -0xC8U;
        var_v0 = 0xC8;
    }
    M2C_FIELD(arg0, s16 *, 0x13A) = var_v0;
}
