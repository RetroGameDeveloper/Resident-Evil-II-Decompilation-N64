typedef struct {
    u8 pad0[4];
    s32 f4;
    u8 pad8[0x1E8 - 8];
    s32 f1E8;
    u8 pad1EC[0x2C8 - 0x1EC];
    u16 f2C8;
    u8 pad2CA[0x2CE - 0x2CA];
    u8 f2CE;
} S;

s32 func_8008A974_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);

void func_80163480_ovl_14(S *arg0, s32 arg1, s32 arg2) {
    u16 a;
    u8 b;

    switch (arg0->pad0[6]) {
    case 0:
        *(volatile s32 *)&arg0->f1E8 = 0x05000F00;
        *(volatile u8 *)&arg0->f2CE = 4;
        a = *(volatile u16 *)&arg0->f2C8;
        b = *(volatile u8 *)&arg0->pad0[6];
        *(volatile u16 *)&arg0->f2C8 = a | 2;
        *(volatile u8 *)&arg0->pad0[6] = b + 1;
    case 1:
        if (func_8008A974_ovl_01(arg0, arg1, arg2, 0x100) != 0) {
            arg0->f4 = 0x01000000;
        }
        break;
    }
}
