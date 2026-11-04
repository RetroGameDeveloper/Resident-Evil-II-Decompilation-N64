typedef struct {
    u8 pad00[4];
    union { s32 w; struct { u16 h; u8 b6; u8 b7; } b; } u04;
    u8 pad08[0x1E0];
    s32 unk1E8;
} S_arg;

s32 func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_801674BC_ovl_17(void *arg0);

void func_80164A2C_ovl_17(S_arg *arg0, s32 arg1, s32 arg2) {
    switch (arg0->u04.b.b6) {
    case 0:
        arg0->u04.b.b6 = 1;
        arg0->unk1E8 = 0x1000300;
        func_801674BC_ovl_17(arg0);
        /* fallthrough */
    case 1:
        arg0->u04.b.b6 = arg0->u04.b.b6 + func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
        break;
    case 2:
        arg0->u04.w = 0x1090000;
        break;
    }
}
