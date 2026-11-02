extern s32 func_80033634_ovl_01(void);
extern void func_80077D48_ovl_01(s32, void *);
extern void func_80032DEC_ovl_01(void *, s32, s32, s32);
extern void func_80032C08_ovl_01(void *, s32, s32);
extern s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern void func_80165BE8_ovl_13(void *, s32);

typedef struct {
    u8 pad[0x1AA8];
    s32 f1;
    u8 pad2[4];
    s32 f2;
} Sub;

typedef struct {
    u8 pad[0x18000];
    Sub sub;
} Big;

extern Big D_800C7650_ovl_01;

void func_801629D0_ovl_13(u8 *arg0, s32 arg1, s32 arg2) {
    u8 t;

    switch (arg0[6]) {
    case 0:
        *(u16 *)(arg0 + 0x1AA) &= 0xFFBF;
        if (func_80033634_ovl_01() & 1) {
            func_80077D48_ovl_01(1, arg0);
        }
        *(s32 *)(arg0 + 0x1E8) = ((func_80033634_ovl_01() & 7) << 0x10) + 0x06000700;
        arg0[0x2B9] = 0;
        *(s16 *)(arg0 + 0x1E0) = (func_80033634_ovl_01() & 7) + 0x3C;
        arg0[0x2B5] = 0xC;
        *(s16 *)(arg0 + 0x1E2) = 0;
        arg0[0x2B6] = 0;
        arg0[0x2B4] = 1;
        arg0[6] = 2;
        *(u16 *)(arg0 + 0x2C6) |= 1;
        goto L2;
    case 1:
        *(s32 *)(arg0 + 0) = *(s32 *)(arg0 + 0) & ~8;
        arg0[0x26F] &= 0x7F;
        *(s16 *)(arg0 + 0x1E0) = (func_80033634_ovl_01() & 7) | 0x50;
        *(s16 *)(arg0 + 0x1E2) = 0x50;
        arg0[0x2B5] = 0xFF;
        arg0[0x2B6] = 0x20;
        arg0[6] = 2;
    L2:
    case 2:
        func_80032DEC_ovl_01(arg0, D_800C7650_ovl_01.sub.f1, D_800C7650_ovl_01.sub.f2, arg0[0x2B6]);
        func_80032C08_ovl_01(arg0, 0, 0);
        if (*(s16 *)(arg0 + 0x1E0) < 0x12C) {
            *(s16 *)(arg0 + 0x1E0) = *(u16 *)(arg0 + 0x1E0) + 1;
        }
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0) {
            arg0[6] = 3;
        }
        t = arg0[0x2B5] - 1;
        arg0[0x2B5] = t;
        if (t == 0xFF) {
            arg0[6] = arg0[0x2B4];
        }
        break;
    case 3:
        func_80165BE8_ovl_13(arg0, 4);
        break;
    }
}
