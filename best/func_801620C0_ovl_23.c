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

s32 func_80033634_ovl_01(s16);                      /* extern */
M2C_UNK func_800377B0_ovl_01(M2C_UNK, s32, s32, s16 *); /* extern */
extern M2C_UNK D_80166260_ovl_23;

void func_801620C0_ovl_23(void *arg0) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    M2C_UNK *var_s0;
    s16 temp_a0;
    s32 temp_s1;
    u32 var_s2;

    var_s2 = 0;
    var_s0 = &D_80166260_ovl_23;
    do {
        temp_a0 = M2C_FIELD(var_s0, s16 *, 0x12);
        temp_s1 = M2C_FIELD(arg0, s32 *, 0x234) + (M2C_FIELD(var_s0, u16 *, 0) * 0x178);
        if (temp_a0 != 0) {
            sp14 = 0;
            sp12 = 0;
            sp10 = 0;
            func_800377B0_ovl_01(0x040E2000, (func_80033634_ovl_01(temp_a0) & 0xFF) * 0x10, temp_s1 + 0x38, &sp10);
        }
        var_s2 += 1;
        var_s0 += 0x14;
    } while (var_s2 < 0xFU);
}
