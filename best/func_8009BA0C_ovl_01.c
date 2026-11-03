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

M2C_UNK func_80040E88_ovl_01(s32 *, s32 *);         /* extern */
M2C_UNK func_800411E8_ovl_01(s32 *, s32 *);         /* extern */
M2C_UNK func_8004251C_ovl_01(s32, s32 *, s32 *);    /* extern */
M2C_UNK func_8004A7D0_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, u8 *); /* extern */
M2C_UNK func_80085608_ovl_01(s32 *);                /* extern */
extern u8 D_800BA3CC_ovl_01;
extern s32 D_800C4E4C_ovl_01;
extern M2C_UNK D_801124DC_ovl_01;
extern s32 D_801247DC_ovl_01;
extern s32 D_8012BA9C_ovl_01;
extern s32 D_8013209C_ovl_01;
extern s32 D_801320B4_ovl_01;
extern s32 *D_801320B8_ovl_01;
extern s32 func_80132098_ovl_01;

void func_8009BA0C_ovl_01(void) {
    u8 sp48;
    s32 *temp_s0;
    s32 *temp_s0_2;
    s32 *var_s1;
    s32 *var_s2;
    s32 temp_a0;
    s32 var_s3;

    var_s2 = D_801320B8_ovl_01;
    temp_a0 = D_8013209C_ovl_01 - func_80132098_ovl_01;
    if (D_801320B4_ovl_01 < temp_a0) {
        D_801320B4_ovl_01 = temp_a0;
    }
    if (D_800C4E4C_ovl_01 != 0) {
        func_8000D3D0(&sp48, &D_800BA3CC_ovl_01, D_8012BA9C_ovl_01, M2C_FIELD(&D_801124DC_ovl_01, u8 *, 0), (s32) M2C_FIELD(&D_801124DC_ovl_01, u8 *, 1), (s32) M2C_FIELD(&D_801124DC_ovl_01, u8 *, 2), (s32) M2C_FIELD(&D_801124DC_ovl_01, u8 *, 3), (s32) M2C_FIELD(&D_801124DC_ovl_01, u8 *, 4));
        func_8004A7D0_ovl_01(0x32, 0x23, 0, 0, &sp48);
    }
    D_801247DC_ovl_01 = 6;
    var_s3 = 0;
    var_s1 = var_s2 + 0x78;
    do {
        temp_s0 = var_s2 + 0x14;
        if (*var_s2 != 0) {
            func_80040E88_ovl_01(var_s2 + 0x64, temp_s0);
            temp_s0_2 = var_s2 + 0x44;
            func_8004251C_ovl_01(M2C_FIELD(var_s1, s32 *, -8), temp_s0, temp_s0_2);
            func_800411E8_ovl_01(temp_s0_2, var_s2 + 0xE0);
            func_80085608_ovl_01(var_s1);
        }
        var_s3 += 1;
        var_s1 += 0x1E8;
        var_s2 += 0x1E8;
    } while (var_s3 < 0xA);
}
