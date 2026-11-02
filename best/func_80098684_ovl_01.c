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

M2C_UNK func_80047884_ovl_01(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_8004789C_ovl_01(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800478DC_ovl_01(s32, u8, u8);          /* extern */
M2C_UNK func_800479EC_ovl_01(s32, u8, u8);          /* extern */
M2C_UNK func_80047B34_ovl_01(s32, M2C_UNK);         /* extern */
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_8012F4D0_ovl_01;
extern M2C_UNK D_8012F9D8_ovl_01;
extern s16 D_8012FDF4_ovl_01;
extern s16 D_8012FDF6_ovl_01;
extern s16 D_8012FDF8_ovl_01;
extern s16 D_8012FDFA_ovl_01;
extern s8 D_8012FE04_ovl_01;
extern M2C_UNK D_801313F8_ovl_01;

void func_80098684_ovl_01(s32 arg0) {
    s32 temp_a0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_s4_2;
    void *var_s0;
    void *var_s0_2;
    void *var_s0_3;
    void *var_s2_2;

    var_s4 = 2;
    var_s3 = 2;
    var_s1 = D_800C527C_ovl_01 + 0x3FB00;
    var_s2 = D_800C527C_ovl_01 + 0x3F800;
    var_s0 = var_s1 + 0xC;
    do {
        var_s3 -= 1;
        func_80047B34_ovl_01(var_s1, 0);
        func_8004789C_ovl_01(var_s1, 0x80, 0x80, 0x80);
        func_800478DC_ovl_01(var_s1, 0U, 0U);
        func_800479EC_ovl_01(var_s1, 0x70U, 0x48U);
        M2C_FIELD(var_s0, s16 *, -2) = 0;
        M2C_FIELD(var_s0, M2C_UNK **, 0) = &D_8012F9D8_ovl_01;
        var_s0 += 0x14;
        var_s1 += 0x14;
    } while (var_s3 != 0);
    if (arg0 != 0) {
        var_s0_2 = var_s2 + 0xC;
        do {
            func_80047B34_ovl_01(var_s2, 1);
            func_80047884_ovl_01(var_s2, 0, 0, 0x70, 0x48);
            func_8004789C_ovl_01(var_s2, 0x80, 0x80, 0x80);
            M2C_FIELD(var_s0_2, s16 *, -2) = 0;
            M2C_FIELD(var_s0_2, M2C_UNK **, 0) = &D_8012F9D8_ovl_01;
            var_s0_2 += 0x14;
            var_s4 -= 1;
            var_s2 += 0x14;
        } while (var_s4 != 0);
        var_s4_2 = 8;
        var_s0_3 = (&D_801313F8_ovl_01 + 0x20) - 4;
        do {
            var_s4_2 -= 1;
            var_s3_2 = 2;
            var_s2_2 = var_s1 + 0xA;
loop_7:
            func_80047B34_ovl_01(var_s1, 0);
            func_8004789C_ovl_01(var_s1, 0x80, 0x80, 0x80);
            var_s3_2 -= 1;
            func_800478DC_ovl_01(var_s1, M2C_FIELD(var_s0_3, u8 *, 0), M2C_FIELD(var_s0_3, u8 *, 1));
            temp_a0 = var_s1;
            var_s1 += 0x14;
            func_800479EC_ovl_01(temp_a0, M2C_FIELD(var_s0_3, u8 *, 2), M2C_FIELD(var_s0_3, u8 *, 3));
            M2C_FIELD(var_s2_2, M2C_UNK **, 2) = &D_8012F4D0_ovl_01;
            M2C_FIELD(var_s2_2, s16 *, 0) = 0;
            var_s2_2 += 0x14;
            if (var_s3_2 != 0) {
                goto loop_7;
            }
            var_s0_3 -= 4;
        } while (var_s4_2 != 0);
        D_8012FDF4_ovl_01 = 0x10;
        D_8012FDF6_ovl_01 = 0xA;
        D_8012FDF8_ovl_01 = 0x70;
        D_8012FDFA_ovl_01 = 0x48;
        D_8012FE04_ovl_01 = 0;
    }
}
