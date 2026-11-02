typedef struct { s32 f0; u32 f4; u8 pad8[0x20]; s32 x28; s32 x2c; s32 x30; u8 pad34[0x100]; s16 x134; u8 pad136[0x6e]; s32 x1a4; u8 pad1a8[0x70]; s32 x218; u8 pad21c[0x53]; u8 x26f; u8 pad270[0x1c]; u32 x28c; u8 pad290[0x36]; u16 x2c6; } Obj;
extern u8 D_800C7650_ovl_01[];
extern u32 D_801664F0_ovl_13[];
s32 func_8006AB70_ovl_01(s32 *, s32 *, s32, s32);
void func_80161D94_ovl_13(Obj *);
void func_80165F9C_ovl_13(Obj *);
void func_8004DB8C_ovl_01(Obj *);
void func_8004DCE8_ovl_01(Obj *, s32);
void func_80161C70_ovl_13(Obj *arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    u16 flags;
    u8 temp;
    if ((*(u32 *)(D_800C7650_ovl_01 + 0x19A60) & 0x20000000) == 0) {
        temp = arg0->x26f;
        if (temp & 0x7F) arg0->x26f = temp - 1;
        sp10 = arg0->x28;
        sp14 = arg0->x2c;
        sp18 = arg0->x30;
        sp20 = *(s32 *)(D_800C7650_ovl_01 + 0x19AA8);
        sp24 = *(s32 *)(D_800C7650_ovl_01 + 0x19AAC);
        sp28 = *(s32 *)(D_800C7650_ovl_01 + 0x19AB0);
        if (func_8006AB70_ovl_01(&sp10, &sp20, 0x8400, 0) != 0) {
            flags = arg0->x2c6 & 0xFFFD;
        } else {
            flags = arg0->x2c6 | 2;
        }
        arg0->x2c6 = flags;
        if (arg0->x28c < 0x384) arg0->x134 = -0x15E;
        else arg0->x134 = 0;
        ((void (*)(Obj *, s32, s32))D_801664F0_ovl_13[arg0->f4])(arg0, arg0->x1a4, arg0->x218);
        func_80161D94_ovl_13(arg0);
        func_80165F9C_ovl_13(arg0);
        func_8004DB8C_ovl_01(arg0);
        func_8004DCE8_ovl_01(arg0, 0x400);
    }
}
