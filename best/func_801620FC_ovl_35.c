typedef struct S_actor_35 {
    u8 pad0[5];
    u8 f5;
    u8 f6;
    u8 pad7[0x1E8 - 0x7];
    s32 f1E8;
    u8 pad1EC[0x1F4 - 0x1EC];
    u16 f1F4;
    u8 pad1F6[0x2DF - 0x1F6];
    u8 f2DF;
} S_actor_35;

void func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);

void func_801620FC_ovl_35(S_actor_35 *arg0, s32 arg1, s32 arg2) {
    u32 var_v0;
    u32 temp_v0;

    if (arg0->f6 == 0) {
        arg0->f6 = 1;
        if (arg0->f2DF == 0) {
            var_v0 = (func_80033634_ovl_01() & 0x1F) + 0x1E;
        } else {
            var_v0 = 0x14;
        }
        arg0->f1F4 = var_v0;
        arg0->f2DF = 0;
        arg0->f1E8 = 0xF00;
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    temp_v0 = arg0->f1F4 - 1;
    arg0->f1F4 = temp_v0;
    if ((temp_v0 << 16) == 0) {
        arg0->f5 = 1;
        *(u16 *)&arg0->f6 = 0;
    }
}
