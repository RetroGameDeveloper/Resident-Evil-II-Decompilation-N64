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

s32 func_800479F8_ovl_01(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8008C950_ovl_01(s32, s32);             /* extern */
M2C_UNK func_8008D2C4_ovl_01(s32);                  /* extern */
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E8E68_ovl_01;
extern s32 D_8010B688_ovl_01;
extern M2C_UNK D_8012F4D0_ovl_01;
extern s32 D_8012F4E8_ovl_01;
extern M2C_UNK D_8012F4EC_ovl_01;
extern M2C_UNK D_8012F508_ovl_01;
extern M2C_UNK D_8012F524_ovl_01;

void func_8008B110_ovl_01(void) {
    M2C_UNK var_a2;
    s32 temp_a0;
    s32 var_a0;
    u32 var_s1;
    u8 var_v1;
    void *var_s0;

    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) >= 0) {
        var_a2 = 0x14D0;
    } else {
        var_a2 = 0x14D1;
    }
    temp_a0 = func_800479F8_ovl_01(func_800479F8_ovl_01(D_8010B688_ovl_01, &D_8012F4D0_ovl_01, var_a2, 1), &D_8012F4EC_ovl_01, 0x14D5, 1);
    var_s1 = 0xA;
    M2C_FIELD(&D_8012F508_ovl_01, s32 *, 0) = (s32) M2C_FIELD(&D_8012F4EC_ovl_01, s32 *, 0);
    M2C_FIELD(&D_8012F508_ovl_01, s32 *, 4) = (s32) M2C_FIELD(&D_8012F4EC_ovl_01, s32 *, 4);
    M2C_FIELD(&D_8012F508_ovl_01, s32 *, 8) = (s32) M2C_FIELD(&D_8012F4EC_ovl_01, s32 *, 8);
    M2C_FIELD(&D_8012F508_ovl_01, s32 *, 0xC) = (s32) M2C_FIELD(&D_8012F4EC_ovl_01, s32 *, 0xC);
    M2C_FIELD(&D_8012F508_ovl_01, s32 *, 0x10) = (s32) M2C_FIELD(&D_8012F4EC_ovl_01, s32 *, 0x10);
    M2C_FIELD(&D_8012F508_ovl_01, s32 *, 0x14) = (s32) M2C_FIELD(&D_8012F4EC_ovl_01, s32 *, 0x14);
    M2C_FIELD(&D_8012F508_ovl_01, s32 *, 0x18) = (s32) M2C_FIELD(&D_8012F4EC_ovl_01, s32 *, 0x18);
    M2C_FIELD(&D_8012F508_ovl_01, s32 *, 0x18) = (s32) D_8012F4E8_ovl_01;
    M2C_FIELD(&D_8012F508_ovl_01, s32 *, 0x14) = (s32) (M2C_FIELD(&D_8012F508_ovl_01, s32 *, 0x14) + (M2C_FIELD(&D_8012F508_ovl_01, s32 *, 4) * 0x3C));
    func_800479F8_ovl_01(temp_a0, &D_8012F524_ovl_01, 0x14D2, 0);
    func_8008D2C4_ovl_01(D_800C527C_ovl_01 + 0x3B800);
    var_s0 = (&D_800E8E68_ovl_01 + 0x28) - 4;
    do {
        var_s1 -= 1;
        if (M2C_FIELD(var_s0, u8 *, 2) == 2) {
            var_a0 = (var_s1 >> 1) + var_s1;
            var_v1 = M2C_FIELD(var_s0, u8 *, 0) + 0x56;
        } else {
            var_v1 = M2C_FIELD(var_s0, u8 *, 0);
            var_a0 = (var_s1 >> 1) + var_s1;
        }
        func_8008C950_ovl_01(var_a0, D_800C527C_ovl_01 + ((var_v1 * 0x4B0) + 0x3B800));
        var_s0 -= 4;
    } while (var_s1 != 0);
}
