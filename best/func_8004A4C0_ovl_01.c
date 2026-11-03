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

s32 func_8004A358_ovl_01(s32, s32, void *);         /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_8004A4C0_ovl_01(void *arg0) {
    s32 *var_s0;
    s32 temp_s2;
    s32 temp_v1;
    u8 temp_s3;
    u8 var_s1;

    var_s0 = M2C_FIELD(arg0, s32 **, 0x234);
    var_s1 = M2C_FIELD(arg0, u8 *, 0x1A3);
    temp_s3 = M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A41);
    temp_s2 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 *, 0x24) + (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FC) << 5);
    do {
        temp_v1 = *var_s0;
        if (temp_v1 & 0x8000) {
            *var_s0 = temp_v1 & ~0x4000;
            if (!(func_8004A358_ovl_01(temp_s2, temp_s3 & 0xFF, var_s0 + 0x4C) & 0xFF)) {
                *var_s0 |= 0x4000;
            }
        }
        var_s1 -= 1;
        var_s0 += 0x178;
    } while (var_s1 != 0);
}
