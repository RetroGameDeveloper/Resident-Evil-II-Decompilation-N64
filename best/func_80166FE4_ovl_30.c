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

s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_8016714C_ovl_30(s16);                  /* extern */
M2C_UNK func_8016719C_ovl_30(s16);                  /* extern */

void func_80166FE4_ovl_30(void *arg1) {
    s16 temp_s1;
    s32 temp_s0;
    s32 var_v0;
    u8 temp_v0;

    temp_v0 = M2C_FIELD(arg1, u8 *, 0x12);
    if (temp_v0 == 0) {
        temp_s1 = (func_80033634_ovl_01() & 7) - 3;
        temp_s0 = func_80033634_ovl_01() & 3 & 0xFF;
        var_v0 = temp_s0 & 2;
        if (temp_s0 & 1) {
            func_8016714C_ovl_30(temp_s1);
            var_v0 = temp_s0 & 2;
        }
        if (var_v0 != 0) {
            func_8016719C_ovl_30(temp_s1);
        }
        M2C_FIELD(arg1, u8 *, 0x12) = (u8) (M2C_FIELD(arg1, u8 *, 0x11) * (func_80033634_ovl_01() & 7));
        return;
    }
    M2C_FIELD(arg1, u8 *, 0x12) = (u8) (temp_v0 - 1);
}
