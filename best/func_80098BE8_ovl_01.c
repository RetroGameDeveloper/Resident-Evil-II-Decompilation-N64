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
M2C_UNK func_800478DC_ovl_01(s32, s32, s32);        /* extern */
M2C_UNK func_800479EC_ovl_01(s32, M2C_UNK, s32);    /* extern */
M2C_UNK func_800479F8_ovl_01(s32, M2C_UNK *, u16, M2C_UNK); /* extern */
M2C_UNK func_80047B34_ovl_01(s32, M2C_UNK);         /* extern */
M2C_UNK func_8006C0A0_ovl_01(M2C_UNK);              /* extern */
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_8012BF38_ovl_01;
extern u8 D_8012BF4A_ovl_01;
extern M2C_UNK D_8012F524_ovl_01;
extern M2C_UNK D_8012F55C_ovl_01;
extern u8 D_8012FDA4_ovl_01;
extern M2C_UNK D_80130270_ovl_01;
extern M2C_UNK D_801302D4_ovl_01;
extern M2C_UNK D_80131020_ovl_01;

void func_80098BE8_ovl_01(s32 arg0) {
    s32 temp_v0;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s4_3;
    u16 var_s3;
    u8 var_s1;
    void *var_s0;
    void *var_s0_2;
    void *var_s0_3;

    func_8006C0A0_ovl_01(0);
    var_s4 = 2;
    var_s2 = D_800C527C_ovl_01 + 0x3F900;
    if (D_8012FDA4_ovl_01 == 0) {
        var_s1 = M2C_FIELD(((M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x11) * 8) + M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x12) + &D_800C7650_ovl_01), u8 *, 0x21944);
        var_s3 = M2C_FIELD(((var_s1 * 4) + &D_80130270_ovl_01), u16 *, 2);
    } else {
        temp_v0 = (s32) ((s8) D_8012BF4A_ovl_01 + ((u32) (D_8012BF4A_ovl_01 << 0x18) >> 0x1F)) >> 1;
        if (!(((s8) D_8012BF4A_ovl_01 - (temp_v0 * 2)) & 0xFF)) {
            var_s1 = (u8) ((u8) M2C_FIELD(((temp_v0 & 0xFF) + &D_800C7650_ovl_01), u8 *, 0x21963) >> 4);
        } else {
            var_s1 = M2C_FIELD(((temp_v0 & 0xFF) + &D_800C7650_ovl_01), u8 *, 0x21963) & 0xF;
        }
        var_s3 = M2C_FIELD(((var_s1 * 4) + &D_801302D4_ovl_01), u16 *, 2);
        if ((u32) (var_s1 - 0xB) < 3U) {
            var_s1 = 1;
        }
    }
    var_s0 = var_s2 + 0xC;
    func_800479F8_ovl_01((arg0 + 7) & ~7, &D_8012F55C_ovl_01, *((var_s1 * 2) + &D_80131020_ovl_01), 1);
    do {
        func_80047B34_ovl_01(var_s2, 1);
        func_8004789C_ovl_01(var_s2, 0x80, 0x80, 0x80);
        func_800478DC_ovl_01(var_s2, 0, 0);
        func_800479EC_ovl_01(var_s2, 0x100, (0x100 - var_s3) & 0xFFFF);
        M2C_FIELD(var_s0, s16 *, -2) = 0;
        M2C_FIELD(var_s0, M2C_UNK **, 0) = &D_8012F55C_ovl_01;
        var_s0 += 0x14;
        var_s4 -= 1;
        var_s2 += 0x14;
    } while (var_s4 != 0);
    var_s4_2 = 2;
    var_s0_2 = var_s2 + 0xC;
    do {
        func_80047B34_ovl_01(var_s2, 1);
        func_8004789C_ovl_01(var_s2, 0x80, 0x80, 0x80);
        func_800478DC_ovl_01(var_s2, 0, (0x100 - var_s3) & 0xFFFF);
        func_800479EC_ovl_01(var_s2, 0x80, var_s3 & 0xFFFF);
        M2C_FIELD(var_s0_2, s16 *, -2) = 0;
        M2C_FIELD(var_s0_2, M2C_UNK **, 0) = &D_8012F55C_ovl_01;
        var_s0_2 += 0x14;
        var_s4_2 -= 1;
        var_s2 += 0x14;
    } while (var_s4_2 != 0);
    var_s4_3 = 2;
    var_s3_2 = 0x2A;
    do {
        var_s4_3 -= 1;
        var_s1_2 = 2;
        var_s0_3 = var_s2 + 0xA;
loop_14:
        func_80047B34_ovl_01(var_s2, 1);
        func_8004789C_ovl_01(var_s2, 0x80, 0x80, 0x80);
        func_800478DC_ovl_01(var_s2, var_s3_2 & 0xFFFF, 0xC);
        func_800479EC_ovl_01(var_s2, 0xC, 0xD);
        M2C_FIELD(var_s0_3, M2C_UNK **, 2) = &D_8012F524_ovl_01;
        M2C_FIELD(var_s0_3, s16 *, 0) = 0x40;
        var_s0_3 += 0x14;
        var_s1_2 -= 1;
        var_s2 += 0x14;
        if (var_s1_2 != 0) {
            goto loop_14;
        }
        var_s3_2 -= 0xE;
    } while (var_s4_3 != 0);
    M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x5C) = 0x19;
    M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x5E) = 0x1E;
}
