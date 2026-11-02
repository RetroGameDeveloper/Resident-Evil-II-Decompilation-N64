typedef struct S_dc_8016273C { u8 unk_00[0x1AA8]; s32 unk_1AA8; s32 unk_1AB0; u8 unk_1AB4[0x18000 - 0x1AB4]; } S_dc_8016273C;
typedef struct S_func_8016273C_ovl_13_arg0 {
    u8 unk_00[6]; u8 unk_06; u8 unk_07[0x21]; s32 unk_28; u8 unk_2C[4]; s32 unk_30;
    u8 unk_34[0x1AC]; s16 unk_1E0; s16 unk_1E2; u8 unk_1E4[4]; s32 unk_1E8;
    u8 unk_1EC[0xC8]; u8 unk_2B4; u8 unk_2B5; u8 unk_2B6[3]; s8 unk_2B9; u8 unk_2BA[0xC]; u16 unk_2C6;
} S_func_8016273C_ovl_13_arg0;
extern S_dc_8016273C D_800C7650_ovl_01[];
s32 func_80032C08_ovl_01(void *arg0, s32 arg1, s32 arg2);
s32 func_80032DEC_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_80033634_ovl_01(void);
void func_80077D48_ovl_01(s32 arg0, void *arg1);
s32 func_80089D34_ovl_01(void *arg0, void *arg1, void *arg2, s32 arg3);
void func_80165BE8_ovl_13(void *arg0, s32 arg1);
s32 func_80166158_ovl_13(void *arg0, s32 arg1);
void func_8016273C_ovl_13(S_func_8016273C_ovl_13_arg0 *arg0, void *arg1, void *arg2) {
    static void *const jtbl_801663C0_ovl_13[6] = { &&L0, &&L1, &&L2, &&L3, &&L4, &&L5 };
    s32 s1; s32 a1; s32 a2; u32 state; u32 base;
    state = arg0->unk_06;
    base = (u32)jtbl_801663C0_ovl_13;
    if (state < 6) { goto *((void *const *)base)[state]; }
    goto end;
L0:
    s1 = func_80033634_ovl_01() & 7;
    if (func_80033634_ovl_01() & 1) { func_80077D48_ovl_01(1, arg0); }
    if ((func_80033634_ovl_01() & 7) == 0) { func_80166158_ovl_13(arg0, 1); }
    arg0->unk_1E8 = (s1 << 16) + 0x07000700;
    arg0->unk_2B9 = 0;
    arg0->unk_1E0 = (func_80033634_ovl_01() & 0x1F) + 0x64;
    arg0->unk_1E2 = -0xA;
    arg0->unk_2B5 = 9 - s1;
    arg0->unk_2B4 = 1;
    arg0->unk_2C6 |= 1;
    arg0->unk_06 = 5;
    goto countdown;
L1:
    arg0->unk_1E2 = -0x50; arg0->unk_2B5 = 6; arg0->unk_2B4 = 2; arg0->unk_06 = 5;
    goto countdown;
L2:
    if (func_80033634_ovl_01() & 1) { func_80077D48_ovl_01(1, arg0); }
    arg0->unk_1E2 = -0x3C; arg0->unk_2B5 = 4; arg0->unk_2B4 = 3; arg0->unk_06 = 5;
    goto countdown;
L3:
    arg0->unk_1E2 = -0x64; arg0->unk_2B5 = 9; arg0->unk_2B4 = 4; arg0->unk_06 = 5;
    goto countdown;
L4:
    if ((func_80033634_ovl_01() & 7) == 0) { func_80166158_ovl_13(arg0, 1); }
    arg0->unk_1E2 = -0x50; arg0->unk_2B5 = 0xFF; arg0->unk_06 = 5;
    goto countdown;
L5:
countdown:
    arg0->unk_2B5 = arg0->unk_2B5 - 1;
    if (arg0->unk_2B5 == 0) { arg0->unk_06 = arg0->unk_2B4; }
    if (func_80033634_ovl_01() & 1) {
        a1 = D_800C7650_ovl_01[1].unk_1AA8 - arg0->unk_28;
        a2 = D_800C7650_ovl_01[1].unk_1AB0 - arg0->unk_30;
    } else {
        a1 = D_800C7650_ovl_01[1].unk_1AA8;
        a2 = D_800C7650_ovl_01[1].unk_1AB0;
    }
    func_80032DEC_ovl_01(arg0, a1, a2, 0x20);
    func_80032C08_ovl_01(arg0, 0, 0);
    if ((s16)arg0->unk_1E0 < 0x12C) { arg0->unk_1E0 = (u16)arg0->unk_1E0 + 1; }
    if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200)) { func_80165BE8_ovl_13(arg0, 4); }
end:
    ;
}
