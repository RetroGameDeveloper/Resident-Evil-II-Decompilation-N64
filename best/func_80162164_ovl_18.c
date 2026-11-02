typedef struct { u8 pad0[5]; s8 f5; s16 f6; u8 pad8[0x1ec]; u16 timer; u8 pad1f6[0x96]; u32 x28c; u32 x290; u8 pad294[0x20]; void *ptr; u8 pad2b8[5]; u8 f2bd; s8 f2bf; } Obj;
typedef struct { u8 pad[0x18000]; u8 sub[0x1D40]; } Big;
extern Big D_800C7650_ovl_01;
extern u8 D_800E10D0_ovl_01[];
s32 func_80033634_ovl_01(void);
s32 func_80162C10_ovl_18(Obj *, void *);
void func_80162164_ovl_18(Obj *arg0) {
    u8 mode;
    u8 random;
    u32 limit;
    u32 timerValue;
    s8 direction;
    u16 timer;
    void *selected;
    mode = ((u8 *)arg0)[7];
    if (mode == 0) {
        ((u8 *)arg0)[7] = 1;
        random = arg0->f2bd;
        timerValue = (func_80033634_ovl_01() & 0xFF) + 0x1E;
        arg0->f2bd = 0;
        limit = (random << 4) - random;
        limit = (limit << 1) + 0x3F;
        arg0->timer = timerValue & limit;
        direction = 0x40;
        if ((0x1111 >> (func_80033634_ovl_01() & 0xF)) & 1) direction = -0x40;
        arg0->f2bf = direction;
        if (*(u32 *)(D_800C7650_ovl_01.sub + 0x1A5C) & 0x10000000) {
            if (arg0->x28c < (arg0->x290 & 0x3FFFFFFF)) selected = D_800E10D0_ovl_01;
            else selected = *(void **)(D_800C7650_ovl_01.sub + 0x1D3C);
            arg0->ptr = selected;
        }
    } else if (mode == 1) {
        timer = arg0->timer - 1;
        arg0->timer = timer;
        if ((s16)timer == -1) arg0->f6 = 0x100;
    }
    if (func_80162C10_ovl_18(arg0, (void *)0) == 0) {
        arg0->f5 = 2;
        arg0->f6 = 0;
    }
}
