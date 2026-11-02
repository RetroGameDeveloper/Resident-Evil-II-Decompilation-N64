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
M2C_UNK func_800478DC_ovl_01(s32, u8, u8);          /* extern */
M2C_UNK func_800479EC_ovl_01(s32, u8, u8);          /* extern */
M2C_UNK func_80047B34_ovl_01(s32, M2C_UNK);         /* extern */
M2C_UNK func_80090B1C_ovl_01();                     /* extern */
extern s32 D_800C527C_ovl_01;
extern u8 D_8012BF52_ovl_01;
extern M2C_UNK D_8012F524_ovl_01;
extern M2C_UNK D_8012F540_ovl_01;
extern M2C_UNK D_8012F9B0_ovl_01;
extern M2C_UNK D_80130C54_ovl_01;

void func_80090DF0_ovl_01(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s0;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_s3;
    s32 var_s4;
    s32 var_s4_2;
    u8 temp_s7;
    u8 var_s4_3;
    void *temp_v0;
    void *var_s1;
    void *var_s1_2;
    void *var_s1_3;
    void *var_s1_4;
    void *var_s3_2;
    void *var_s3_3;

    temp_s7 = D_8012BF52_ovl_01;
    var_s2 = 2;
    var_s0 = D_800C527C_ovl_01 + 0x40800;
    var_s1 = var_s0 + 0xA;
    do {
        func_80047B34_ovl_01(var_s0, 0);
        func_8004789C_ovl_01(var_s0, 0x80, 0x80, 0x80);
        func_800478DC_ovl_01(var_s0, 0U, 0U);
        func_800479EC_ovl_01(var_s0, 0xCU, 0xCU);
        M2C_FIELD(var_s1, M2C_UNK **, 2) = &D_8012F524_ovl_01;
        M2C_FIELD(var_s1, s16 *, 0) = 0x20;
        var_s1 += 0x14;
        var_s2 -= 1;
        var_s0 += 0x14;
    } while (var_s2 != 0);
    var_s4 = 2;
    var_s3 = 0x1C;
    do {
        var_s3 -= 0xE;
        var_s4 -= 1;
        var_s2_2 = 2;
        var_s1_2 = var_s0 + 0xA;
loop_4:
        func_80047B34_ovl_01(var_s0, 1);
        func_8004789C_ovl_01(var_s0, 0x80, 0x80, 0x80);
        func_800478DC_ovl_01(var_s0, var_s3 & 0xFFFF, 0xCU);
        func_800479EC_ovl_01(var_s0, 0xEU, 0xCU);
        M2C_FIELD(var_s1_2, M2C_UNK **, 2) = &D_8012F524_ovl_01;
        M2C_FIELD(var_s1_2, s16 *, 0) = 0x40;
        var_s1_2 += 0x14;
        var_s2_2 -= 1;
        var_s0 += 0x14;
        if (var_s2_2 != 0) {
            goto loop_4;
        }
    } while (var_s4 != 0);
    var_s4_2 = 2;
    var_s1_3 = (&D_8012F9B0_ovl_01 + 8) - 4;
    do {
        var_s4_2 -= 1;
        var_s2_3 = 2;
        var_s3_2 = var_s0 + 0xA;
loop_8:
        func_80047B34_ovl_01(var_s0, 1);
        func_8004789C_ovl_01(var_s0, 0x80, 0x80, 0x80);
        var_s2_3 -= 1;
        func_800478DC_ovl_01(var_s0, M2C_FIELD(var_s1_3, u8 *, 0), M2C_FIELD(var_s1_3, u8 *, 1));
        temp_a0 = var_s0;
        var_s0 += 0x14;
        func_800479EC_ovl_01(temp_a0, M2C_FIELD(var_s1_3, u8 *, 2), M2C_FIELD(var_s1_3, u8 *, 3));
        M2C_FIELD(var_s3_2, M2C_UNK **, 2) = &D_8012F540_ovl_01;
        M2C_FIELD(var_s3_2, s16 *, 0) = 0;
        var_s3_2 += 0x14;
        if (var_s2_3 != 0) {
            goto loop_8;
        }
        var_s1_3 -= 4;
    } while (var_s4_2 != 0);
    temp_v0 = (temp_s7 * 8) + &D_80130C54_ovl_01;
    var_s4_3 = M2C_FIELD(temp_v0, u8 *, 4);
    var_s1_4 = ((var_s4_3 * 0x10) + M2C_FIELD(temp_v0, s32 *, 0)) - 0x10;
    do {
        var_s4_3 -= 1;
        var_s2_4 = 2;
        var_s3_3 = var_s0 + 0xA;
loop_12:
        func_80047B34_ovl_01(var_s0, 1);
        func_8004789C_ovl_01(var_s0, 0x80, 0x80, 0x80);
        var_s2_4 -= 1;
        func_800478DC_ovl_01(var_s0, M2C_FIELD(var_s1_4, u8 *, 0), M2C_FIELD(var_s1_4, u8 *, 1));
        temp_a0_2 = var_s0;
        var_s0 += 0x14;
        func_800479EC_ovl_01(temp_a0_2, M2C_FIELD(var_s1_4, u8 *, 2), M2C_FIELD(var_s1_4, u8 *, 3));
        M2C_FIELD(var_s3_3, M2C_UNK **, 2) = &D_8012F540_ovl_01;
        M2C_FIELD(var_s3_3, s16 *, 0) = 0x20;
        var_s3_3 += 0x14;
        if (var_s2_4 != 0) {
            goto loop_12;
        }
        var_s1_4 -= 0x10;
    } while (var_s4_3 != 0);
    func_80090B1C_ovl_01();
}
