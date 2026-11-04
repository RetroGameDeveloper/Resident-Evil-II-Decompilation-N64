typedef struct {
    u8 pad0[4];
    s32 f4;
    u8 pad8[0x1E8 - 8];
    s32 f1E8;
    u8 pad1EC[0x26F - 0x1EC];
    u8 f26F;
    u8 pad270[0x2B6 - 0x270];
    u16 f2B6;
} S;

s32 func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);

void func_80168758_ovl_31(S *arg0, s32 arg1, s32 arg2) {
    u16 a;
    u8 b;
    u16 c;

    switch (arg0->pad0[6]) {
    case 0:
        *(volatile s32 *)&arg0->f1E8 = 0x08050700;
        a = *(volatile u16 *)&arg0->f2B6;
        *(volatile u8 *)&arg0->pad0[6] = 1;
        *(volatile u16 *)&arg0->f2B6 = a | 0x400;
    case 1:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0) {
            *(volatile s32 *)&arg0->f4 = 0x01010000;
            b = *(volatile u8 *)&arg0->f26F;
            c = *(volatile u16 *)&arg0->f2B6;
            b &= 0x7F;
            c &= 0xFBFF;
            *(volatile u8 *)&arg0->f26F = b;
            *(volatile u16 *)&arg0->f2B6 = c;
        }
        break;
    }
}
