void func_80047B34_ovl_01(s32, s32);
void func_8004789C_ovl_01(s32, s32, s32, s32);
void func_800478DC_ovl_01(s32, u8, u8);
void func_800479EC_ovl_01(s32, u8, u8);

extern s32 D_800C527C_ovl_01;
extern u8 D_8012BF38_ovl_01[];
extern u8 D_8012F524_ovl_01[];
extern u8 D_8013109C_ovl_01[];

void func_800961BC_ovl_01(void) {
    u32 temp_a0;
    s32 var_v1;
    u8 *s1;
    u8 *s4;
    s32 s3;
    u8 *s6;
    s32 s5;
    u8 *s2;
    u8 *s0;

    temp_a0 = D_800C527C_ovl_01 + 0x3C004;
    var_v1 = D_800C527C_ovl_01 + 0x3BB64;
    if ((u32)var_v1 < temp_a0) {
        var_v1 = temp_a0;
    }
    s1 = (u8 *)var_v1 + 0xA00;
    s4 = D_8012BF38_ovl_01;
    s3 = 3;
    s6 = D_8012F524_ovl_01;
    s5 = 0x20;
    s2 = (u8 *)var_v1 + 0xA0A;
    s0 = D_8013109C_ovl_01 + 0xC;
    do {
        s32 c80 = 0x80;
        s0 -= 4;
        s3 -= 1;
        func_80047B34_ovl_01((s32)s1, 0);
        func_8004789C_ovl_01((s32)s1, c80, c80, c80);
        func_800478DC_ovl_01((s32)s1, s0[0], s0[1]);
        func_800479EC_ovl_01((s32)s1, s0[2], s0[3]);
        s1 += 0x14;
        *(u32 *)(s2 + 2) = (u32)s6;
        *(u16 *)(s2 + 0) = s5;
        s2 += 0x14;
    } while (s3 != 0);
    s4[0xE] = 0;
    s4[0x29] = 0;
    s4[0x28] = 0x32;
    s4[0x1D] = 0;
    s4[0x1C] = 0;
    s4[0x1F] = 0;
    s4[0x1E] = 0;
}
