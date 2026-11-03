typedef struct {
    s32 unk00;
    s32 unk04;
    u8 pad08[0x24];
    s32 unk2C;
    u8 pad30[0x178];
    s16 unk1A8;
    u8 pad1AA[0x3E];
    s32 unk1E8;
    u8 pad1EC[0xEA];
    s8 unk2D6;
} S_func_80165DC0_ovl_17_arg0;

s32 func_80033634_ovl_01(void);
void func_80167608_ovl_17(S_func_80165DC0_ovl_17_arg0 *, s32, s32);
void func_80166FBC_ovl_17(S_func_80165DC0_ovl_17_arg0 *, s32, s32);
void func_80089D34_ovl_01(S_func_80165DC0_ovl_17_arg0 *, s32, s32, s32);

void func_80165DC0_ovl_17(S_func_80165DC0_ovl_17_arg0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk1E8 = 0x0D000700;
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
    func_80167608_ovl_17(arg0, 0x2002, (func_80033634_ovl_01() & 3) + 1);
    func_80166FBC_ovl_17(arg0, 0, 0);
    arg0->unk04 = 0x07000000;
    arg0->unk00 |= 0x42;
    if (arg0->unk2D6 < 0) {
        arg0->unk2C = arg0->unk1A8 + 0x46;
    }
}
