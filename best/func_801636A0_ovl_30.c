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

s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80163154_ovl_30(void *);               /* extern */
M2C_UNK func_801672F4_ovl_30(void *, s32, M2C_UNK); /* extern */
extern M2C_UNK D_80167CEC_ovl_30;

void func_801636A0_ovl_30(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 temp_a1;
    s16 temp_s0;
    s32 var_v0;
    void *temp_s2;

    temp_s2 = arg0 + 0x2B4;
    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        temp_a1 = M2C_FIELD(temp_s2, s16 *, 2);
        var_v0 = 0x08260000;
        if (temp_a1 == 0) {
            var_v0 = 0x072E0000;
        }
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (var_v0 | 0xF00);
        temp_s0 = *((temp_a1 * 4) + &D_80167CEC_ovl_30);
        func_801672F4_ovl_30(arg0, (temp_s0 + 1) & 0xFF, 6);
        func_801672F4_ovl_30(arg0, (temp_s0 + 2) & 0xFF, 6);
        func_801672F4_ovl_30(arg0, (temp_s0 + 3) & 0xFF, 6);
    }
    if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0) {
        M2C_FIELD(arg0, s8 *, 5) = 2;
        M2C_FIELD(arg0, s16 *, 6) = 0;
        M2C_FIELD((temp_s2 + M2C_FIELD(temp_s2, s16 *, 2)), s8 *, 4) = 0x1E;
        func_80163154_ovl_30(arg0);
        M2C_FIELD(temp_s2, s8 *, 0xC) = 0;
    }
}
