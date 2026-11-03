extern s32 D_800C527C_ovl_01;
extern u8 D_8012F940_ovl_01[];
extern u8 D_8012F9F4_ovl_01[];

s32 func_800479F8_ovl_01(s32 arg0, void *arg1, s32 arg2, s32 arg3);
s32 func_80047B34_ovl_01(s32 arg0, s32 arg1);
s32 func_8004789C_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_800478DC_ovl_01(s32 arg0, s32 arg1, s32 arg2);
s32 func_800478E8_ovl_01(s32 arg0, s32 arg1, s32 arg2);
s32 func_800479EC_ovl_01(s32 arg0, s32 arg1, s32 arg2);

void func_80090B1C_ovl_01(void) {
    s32 *pc;
    s32 var_a1;
    s32 var_s0;
    s32 var_s3;
    s32 var_s4;
    u32 temp_a0;
    u32 var_v1;
    u8 *var_s1;
    u8 *var_s2;
    u8 *var_s5;

    pc = &D_800C527C_ovl_01;
    var_s1 = D_8012F9F4_ovl_01;
    func_800479F8_ovl_01((*pc + 0x4D007) & ~7, var_s1, 0x15C3, 1);
    temp_a0 = *pc + 0x3C004;
    var_v1 = *pc + 0x3BB64;
    if (var_v1 < temp_a0) {
        var_v1 = temp_a0;
    }
    var_s0 = var_v1 + 0xA64;
    var_s4 = 0xE;
    var_s5 = var_s1;
    var_s1 = D_8012F940_ovl_01 + 0x70;
    var_s1 -= 8;
    do {
        var_s4 -= 1;
        var_s3 = 2;
        var_s2 = (u8 *)(var_s0 + 3);
loop_4:
        func_80047B34_ovl_01(var_s0, 0);
        func_8004789C_ovl_01(var_s0, 0x80, 0x80, 0x80);
        if (var_s1[3] != 0) {
            var_a1 = (var_s1[2] & 3) * 8;
        } else {
            var_a1 = ((var_s1[2] & 3) * 8) | 0x20;
        }
        var_s3 -= 1;
        func_800478DC_ovl_01(var_s0, var_a1, 0);
        func_800478E8_ovl_01(var_s0, *(u16 *)(var_s1 + 4), *(u16 *)(var_s1 + 6));
        func_800479EC_ovl_01(var_s0, 8, 8);
        *(s32 *)(var_s2 + 9) = (s32)var_s5;
        *(u16 *)(var_s2 + 7) = 0;
        var_s2[0] = 0;
        var_s2 += 0x14;
        var_s0 += 0x14;
        if (var_s3 != 0) {
            goto loop_4;
        }
        var_s1 -= 8;
    } while (var_s4 != 0);
}
