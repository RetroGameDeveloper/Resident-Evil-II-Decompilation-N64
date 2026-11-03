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

M2C_UNK func_8004789C_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800479EC_ovl_01(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80047B34_ovl_01(void *, M2C_UNK);      /* extern */
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_8012F524_ovl_01;

void func_80095B70_ovl_01(void) {
    s32 var_s1;
    u32 temp_v1;
    u32 var_s0;

    var_s0 = D_800C527C_ovl_01 + 0x3BB64;
    temp_v1 = D_800C527C_ovl_01 + 0x3C004;
    if (var_s0 < temp_v1) {
        var_s0 = temp_v1;
    }
    var_s1 = 0x50;
    do {
        var_s1 -= 1;
        func_80047B34_ovl_01((void *) var_s0, 0);
        func_8004789C_ovl_01((void *) var_s0, 0x80, 0x80, 0x80);
        func_800479EC_ovl_01((void *) var_s0, 8, 9);
        M2C_FIELD(var_s0, M2C_UNK **, 0xC) = &D_8012F524_ovl_01;
        var_s0 += 0x14;
    } while (var_s1 != 0);
}
