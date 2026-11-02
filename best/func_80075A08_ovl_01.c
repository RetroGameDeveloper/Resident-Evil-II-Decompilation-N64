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

s32 func_80004930(M2C_UNK);                         /* extern */
s32 func_80004C9C(M2C_UNK);                         /* extern */
s32 func_80004CFC(M2C_UNK, s32, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_80075CA8_ovl_01();                     /* extern */
s32 func_8008AF60_ovl_01(s32);                      /* extern */
M2C_UNK func_800AA498_ovl_01(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, f32, f32, f32, s32, s32); /* extern */
s32 func_800AB520_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_800B2634_ovl_01(M2C_UNK *);            /* extern */
M2C_UNK func_800B3EF4_ovl_01(s32, M2C_UNK);         /* extern */
M2C_UNK func_800B4064_ovl_01(M2C_UNK);              /* extern */
extern M2C_UNK D_800B99A0_ovl_01;
extern M2C_UNK D_800B99AC_ovl_01;
extern M2C_UNK D_800B99B8_ovl_01;
extern f32 D_800B99C4_ovl_01;
extern f32 D_800B99C8_ovl_01;
extern M2C_UNK D_80119D28_ovl_01;
extern M2C_UNK D_80119D34_ovl_01;
extern M2C_UNK D_80119D40_ovl_01;
extern M2C_UNK D_80119D4C_ovl_01;
extern M2C_UNK D_80119D58_ovl_01;
extern s32 D_8011A310_ovl_01;
extern s32 D_8011A314_ovl_01;
extern M2C_UNK D_8011A31C_ovl_01;
extern s32 D_8011A6A0_ovl_01;
extern s32 D_8011A6A4_ovl_01;
extern s32 D_8011A6A8_ovl_01;
extern s32 D_8011A6AC_ovl_01;
extern s32 D_8011A6B4_ovl_01;
extern s16 D_8013A108;
extern M2C_UNK D_8013A110;

void func_80075A08_ovl_01(void) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a0;
    void *var_v1;

    var_a0 = 0xE;
    var_v1 = &D_8011A31C_ovl_01 + 0x348;
    D_8011A310_ovl_01 = 0;
    D_8011A314_ovl_01 = 0;
    D_8013A108 = 0;
    do {
        M2C_FIELD(var_v1, s8 *, 0x28) = 0;
        var_a0 -= 1;
        var_v1 -= 0x3C;
    } while (var_a0 >= 0);
    if (func_800AB520_ovl_01(0x5622, 0x20, 0x18, 0xE, 0x3E8, 0x180000) != 0) {
loop_3:
        goto loop_3;
    }
    func_800B4064_ovl_01(1);
    M2C_FIELD(&D_80119D58_ovl_01, s16 *, 0) = 0xA0;
    M2C_FIELD(&D_80119D58_ovl_01, s8 *, 0x1A) = 2;
    M2C_FIELD(&D_80119D58_ovl_01, s8 *, 0x1C) = 1;
    M2C_FIELD(&D_80119D58_ovl_01, s16 *, 0x1E) = 0xF5C;
    M2C_FIELD(&D_80119D58_ovl_01, s16 *, 0x20) = 0x1999;
    M2C_FIELD(&D_80119D58_ovl_01, s16 *, 0x22) = 0x800;
    M2C_FIELD(&D_80119D58_ovl_01, s16 *, 0x24) = 0x68;
    M2C_FIELD(&D_80119D58_ovl_01, s16 *, 2) = 0x65;
    M2C_FIELD(&D_80119D58_ovl_01, s8 *, 0x1B) = 0x64;
    M2C_FIELD(&D_80119D58_ovl_01, s16 *, 4) = 0x9D;
    M2C_FIELD(&D_80119D58_ovl_01, s8 *, 0x12) = 0x64;
    M2C_FIELD(&D_80119D58_ovl_01, s8 *, 0x13) = 0x64;
    func_800B2634_ovl_01(&D_80119D58_ovl_01);
    temp_s0 = func_80004C9C(0x7BC);
    temp_s1 = func_80004C9C(0x7BD);
    temp_v0 = func_8008AF60_ovl_01(temp_s0 + temp_s1 + func_80004C9C(0x7BE) + 0x30);
    D_8011A6B4_ovl_01 = temp_v0;
    if (temp_v0 & 0xF) {
        D_8011A6B4_ovl_01 = (temp_v0 + 0xF) & ~0xF;
    }
    D_8011A6A0_ovl_01 = D_8011A6B4_ovl_01;
    temp_v1 = D_8011A6B4_ovl_01 + func_80004CFC(0x7BC, D_8011A6B4_ovl_01, 0, &D_800B99A0_ovl_01);
    D_8011A6B4_ovl_01 = temp_v1;
    if (temp_v1 & 0xF) {
        D_8011A6B4_ovl_01 = (temp_v1 + 0xF) & ~0xF;
    }
    D_8011A6AC_ovl_01 = D_8011A6B4_ovl_01;
    temp_v1_2 = D_8011A6B4_ovl_01 + func_80004CFC(0x7BD, D_8011A6B4_ovl_01, 0, &D_800B99AC_ovl_01);
    D_8011A6B4_ovl_01 = temp_v1_2;
    if (temp_v1_2 & 0xF) {
        D_8011A6B4_ovl_01 = (temp_v1_2 + 0xF) & ~0xF;
    }
    D_8011A6A8_ovl_01 = D_8011A6B4_ovl_01;
    temp_v1_3 = D_8011A6B4_ovl_01 + func_80004CFC(0x7BE, D_8011A6B4_ovl_01, 0, &D_800B99B8_ovl_01);
    D_8011A6B4_ovl_01 = temp_v1_3;
    if (temp_v1_3 & 0xF) {
        D_8011A6B4_ovl_01 = (temp_v1_3 + 0xF) & ~0xF;
    }
    D_8011A6A4_ovl_01 = func_80004930(0x7BF);
    func_800B3EF4_ovl_01(func_80004930(0x7BB), 0);
    func_800AA498_ovl_01(&D_8013A110, &D_80119D28_ovl_01, &D_80119D34_ovl_01, &D_80119D40_ovl_01, &D_80119D4C_ovl_01, D_800B99C4_ovl_01, D_800B99C8_ovl_01, D_800B99C8_ovl_01, 0, 0x7F);
    func_80075CA8_ovl_01();
}
