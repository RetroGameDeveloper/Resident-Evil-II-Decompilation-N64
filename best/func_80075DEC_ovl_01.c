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

extern s32 D_800C527C_ovl_01;
extern s8 D_80119E10_ovl_01;
extern s8 D_80119E11_ovl_01;
extern s32 D_80119E1C_ovl_01;
extern s32 D_80119E20_ovl_01;
extern s32 D_80119E24_ovl_01;
extern s32 D_80119E28_ovl_01;
extern M2C_UNK D_80119E48_ovl_01;
extern M2C_UNK D_80119E6C_ovl_01;
extern M2C_UNK D_80119E9C_ovl_01;
extern M2C_UNK D_80119ECC_ovl_01;
extern M2C_UNK D_8011A250_ovl_01;

void func_80075DEC_ovl_01(void) {
    s32 *var_a2;
    s32 *var_a3;
    s32 *var_t0;
    s32 *var_t1;
    s32 *var_t2;
    s32 *var_t3;
    s32 *var_t4;
    s32 *var_t5;
    s32 *var_t6;
    s32 var_t7;
    void *var_a1;

    var_t7 = 0x18;
    var_t6 = &D_80119ECC_ovl_01 + 0x37C;
    var_t5 = &D_80119ECC_ovl_01 + 0x378;
    var_t4 = &D_80119ECC_ovl_01 + 0x374;
    var_t3 = &D_80119ECC_ovl_01 + 0x370;
    var_t2 = &D_80119ECC_ovl_01 + 0x36C;
    var_t1 = &D_80119ECC_ovl_01 + 0x368;
    var_t0 = &D_80119ECC_ovl_01 + 0x364;
    var_a3 = &D_80119ECC_ovl_01 + 0x360;
    var_a2 = &D_8011A250_ovl_01 + 0x60;
    var_a1 = &D_80119E9C_ovl_01 + 0x30;
    D_80119E10_ovl_01 = 0;
    D_80119E11_ovl_01 = 0;
    D_80119E1C_ovl_01 = 0x7F007F;
    D_80119E20_ovl_01 = 0x400040;
    D_80119E24_ovl_01 = 0x400040;
    D_80119E28_ovl_01 = 0x7F007F;
    M2C_FIELD(&D_80119E48_ovl_01, s8 *, 7) = -1;
    M2C_FIELD(&D_80119E48_ovl_01, s8 *, 6) = -1;
    M2C_FIELD(&D_80119E48_ovl_01, s8 *, 5) = -1;
    M2C_FIELD(&D_80119E48_ovl_01, s8 *, 4) = -1;
    M2C_FIELD(&D_80119E48_ovl_01, s8 *, 3) = -1;
    M2C_FIELD(&D_80119E48_ovl_01, s8 *, 2) = -1;
    M2C_FIELD(&D_80119E48_ovl_01, s8 *, 1) = -1;
    M2C_FIELD(&D_80119E48_ovl_01, s8 *, 0) = -1;
    do {
        var_t6 -= 0x24;
        var_t5 -= 0x24;
        var_t4 -= 0x24;
        var_t3 -= 0x24;
        var_t2 -= 0x24;
        var_t1 -= 0x24;
        var_t0 -= 0x24;
        var_a3 -= 0x24;
        var_a2 -= 4;
        var_a1 -= 2;
        var_t7 -= 1;
        M2C_FIELD(var_a1, s8 *, 0) = 0;
        M2C_FIELD(var_a1, s8 *, 1) = 0;
        *var_a2 = 0;
        *var_a3 = 0;
        *var_t0 = 0;
        *var_t1 = 0;
        *var_t2 = 0;
        *var_t3 = 0;
        *var_t4 = 0;
        *var_t5 = 0;
        *var_t6 = 0;
    } while (var_t7 != 0);
    M2C_FIELD(&D_80119E6C_ovl_01, s32 *, 0x14) = 0;
    M2C_FIELD(&D_80119E6C_ovl_01, s32 *, 0xC) = 0;
    M2C_FIELD(&D_80119E6C_ovl_01, s32 *, 8) = 0;
    M2C_FIELD(&D_80119E6C_ovl_01, s32 *, 0) = (s32) (D_800C527C_ovl_01 + 0x3000);
    M2C_FIELD(&D_80119E6C_ovl_01, s32 *, 4) = (s32) (D_800C527C_ovl_01 + 0x3100);
}
