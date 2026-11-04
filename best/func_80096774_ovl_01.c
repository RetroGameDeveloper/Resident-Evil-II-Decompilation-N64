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

M2C_UNK func_8004789C_ovl_01(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800478DC_ovl_01(s32, u8, u8);          /* extern */
M2C_UNK func_800479EC_ovl_01(s32, u8, u8);          /* extern */
M2C_UNK func_80047B34_ovl_01(s32, M2C_UNK);         /* extern */
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_8012F4D0_ovl_01;
extern s8 D_801310FC_ovl_01;
extern M2C_UNK D_80131130_ovl_01;

void func_80096774_ovl_01(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s3;
    s32 var_s3_2;
    s8 var_v0;
    void *var_s0;
    void *var_s0_2;
    
    void *var_s2_2;

    var_s3 = 0xD;
    var_s1 = D_800C527C_ovl_01 + 0x3BA28;
    if (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A88) == 0xD) {
        M2C_FIELD(&D_801310FC_ovl_01, s8 *, 0) = 0x2A;
        M2C_FIELD(&D_801310FC_ovl_01, s8 *, 8) = 0;
        M2C_FIELD(&D_801310FC_ovl_01, s8 *, 4) = 0;
        M2C_FIELD(&D_801310FC_ovl_01, s8 *, 9) = 0xB4;
        M2C_FIELD(&D_801310FC_ovl_01, s8 *, 5) = 0xB4;
        M2C_FIELD(&D_801310FC_ovl_01, s8 *, 1) = 0xB4;
    } else {
        if ((u8) M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A88) >= 0xEU) {
            var_v0 = 0x2C;
            goto block_6;
        }
        if (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A88) == 0xC) {
            var_v0 = 0x58;
block_6:
            M2C_FIELD(&D_801310FC_ovl_01, s8 *, 8) = var_v0;
            M2C_FIELD(&D_801310FC_ovl_01, s8 *, 4) = var_v0;
            M2C_FIELD(&D_801310FC_ovl_01, s8 *, 0) = var_v0;
        } else {
            M2C_FIELD(&D_801310FC_ovl_01, s8 *, 8) = 0;
            M2C_FIELD(&D_801310FC_ovl_01, s8 *, 4) = 0;
            M2C_FIELD(&D_801310FC_ovl_01, s8 *, 0) = 0;
        }
        M2C_FIELD(&D_801310FC_ovl_01, s8 *, 1) = 0xC8;
        M2C_FIELD(&D_801310FC_ovl_01, s8 *, 5) = 0xD6;
        M2C_FIELD(&D_801310FC_ovl_01, s8 *, 9) = 0xEB;
    }
    var_s0_2 = var_s1 + 0xA;
    var_s0 = (char *)((0xD * 4)); var_s0 += (s32)(&D_801310FC_ovl_01);
    do {
        var_s0 -= 4;
        var_s3 -= 1;
        func_80047B34_ovl_01(var_s1, 0);
        func_8004789C_ovl_01(var_s1, 0x80, 0x80, 0x80);
        func_800478DC_ovl_01(var_s1, M2C_FIELD(var_s0, u8 *, 0), M2C_FIELD(var_s0, u8 *, 1));
        temp_a0 = var_s1;
        var_s1 += 0x14;
        func_800479EC_ovl_01(temp_a0, M2C_FIELD(var_s0, u8 *, 2), M2C_FIELD(var_s0, u8 *, 3));
        M2C_FIELD(var_s0_2, M2C_UNK **, 2) = &D_8012F4D0_ovl_01;
        M2C_FIELD(var_s0_2, s16 *, 0) = 0;
        var_s0_2 += 0x14;
    } while (var_s3 != 0);
    var_s3_2 = 0xA;
    var_s0_2 = &D_80131130_ovl_01 + 0x28;
    var_s1_2 = D_800C527C_ovl_01 + 0x3BB2C;
    var_s2_2 = var_s1_2 + 0xA;
    do {
        var_s0_2 -= 4;
        var_s3_2 -= 1;
        func_80047B34_ovl_01(var_s1_2, 0);
        func_8004789C_ovl_01(var_s1_2, 0x80, 0x80, 0x80);
        func_800478DC_ovl_01(var_s1_2, M2C_FIELD(var_s0_2, u8 *, 0), M2C_FIELD(var_s0_2, u8 *, 1));
        temp_a0_2 = var_s1_2;
        var_s1_2 += 0x14;
        func_800479EC_ovl_01(temp_a0_2, M2C_FIELD(var_s0_2, u8 *, 2), M2C_FIELD(var_s0_2, u8 *, 3));
        M2C_FIELD(var_s2_2, M2C_UNK **, 2) = &D_8012F4D0_ovl_01;
        M2C_FIELD(var_s2_2, s16 *, 0) = 0;
        var_s2_2 += 0x14;
    } while (var_s3_2 != 0);
}
