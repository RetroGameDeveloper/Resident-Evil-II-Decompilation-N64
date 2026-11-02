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

M2C_UNK func_8004789C_ovl_01(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800478DC_ovl_01(s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800479EC_ovl_01(s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80047B34_ovl_01(s32, M2C_UNK);         /* extern */
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_8012F4D0_ovl_01;

void func_80097EF4_ovl_01(void) {
    s32 var_s0;
    s32 var_s2;
    void *var_s1;

    var_s2 = 0x23;
    var_s0 = D_800C527C_ovl_01 + 0x3BD48;
    var_s1 = var_s0 + 0xA;
    do {
        var_s2 -= 1;
        func_80047B34_ovl_01(var_s0, 0);
        func_8004789C_ovl_01(var_s0, 0x80, 0x80, 0x80);
        func_800478DC_ovl_01(var_s0, 0x50, 0x96);
        func_800479EC_ovl_01(var_s0, 0x30, 0x30);
        M2C_FIELD(var_s1, M2C_UNK **, 2) = &D_8012F4D0_ovl_01;
        M2C_FIELD(var_s1, s16 *, 0) = 0x200;
        var_s1 += 0x14;
        var_s0 += 0x14;
    } while (var_s2 != 0);
}
