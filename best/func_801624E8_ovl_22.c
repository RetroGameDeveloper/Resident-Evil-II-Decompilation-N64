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

s32 func_80033174_ovl_01(M2C_UNK *);                /* extern */
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_800377B0_ovl_01(s32, s16, s32, void *); /* extern */
extern M2C_UNK D_800E10D0_ovl_01;
extern M2C_UNK D_801661A0_ovl_22;

void func_801624E8_ovl_22(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_s5;
    s32 var_s0;
    s32 var_s2;
    u32 var_s1;
    void *temp_a3;

    var_s2 = 0;
    temp_s5 = M2C_FIELD(arg0, s32 *, 0x234);
    var_s1 = 0x24;
    if (arg5 & 2) {
        if (func_80033174_ovl_01(&D_800E10D0_ovl_01) & 0xFF) {
            var_s2 = 0x12;
        }
        var_s1 = 0x12;
    }
    if (arg5 & 1) {
        var_s1 = 6;
        var_s2 += ((M2C_FIELD(arg0, u8 *, 0x26E) % 3) & 0xFF) * 6;
    }
    var_s0 = arg1 - 1;
    if (arg1 != 0) {
        do {
            temp_a3 = ((var_s2 + ((u32) (func_80033634_ovl_01() & 0xFF) % var_s1)) * 0xC) + &D_801661A0_ovl_22;
            func_800377B0_ovl_01((arg2 << 0x18) | (arg3 << 0x10) | arg4, (s16) (M2C_FIELD(arg0, u16 *, 0x66) + M2C_FIELD(temp_a3, u16 *, 6)), temp_s5 + (M2C_FIELD(temp_a3, s32 *, 8) * 0x178) + 0x38, temp_a3);
            var_s0 -= 1;
        } while (var_s0 != 0);
    }
}
