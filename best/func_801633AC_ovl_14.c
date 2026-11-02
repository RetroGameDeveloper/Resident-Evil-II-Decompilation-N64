typedef struct { u8 x[0x2D0]; } Obj;
extern s32 func_80032DEC_ovl_01(Obj *, s32, s32, s32);
extern s32 func_8008A974_ovl_01(Obj *, s32, s32, s32);

void func_801633AC_ovl_14(Obj *a, s32 b, s32 c) {
    switch (a->x[6]) {
    case 0:
        {
            u16 t;
            u8 s;
            *(volatile s32 *)(a->x + 0x1E8) = 0x06000F00;
            *(volatile u8 *)(a->x + 0x2CE) = 4;
            t = *(volatile u16 *)(a->x + 0x2C8);
            s = *(volatile u8 *)(a->x + 6);
            *(volatile u16 *)(a->x + 0x2C8) = t | 2;
            *(volatile u8 *)(a->x + 6) = s + 1;
        }
    case 1:
        {
            Obj *p = *(Obj **)(a->x + 0x2C4);
            if (p != 0)
                func_80032DEC_ovl_01(a, *(s32 *)(p->x + 0x28), *(s32 *)(p->x + 0x30), 0x20);
        }
        if (func_8008A974_ovl_01(a, b, c, 0x10100) != 0) {
            u16 t2;
            *(volatile u8 *)(a->x + 0x2CE) = 3;
            t2 = *(volatile u16 *)(a->x + 0x2C8);
            *(volatile s32 *)(a->x + 4) = 0x01050000;
            *(volatile u16 *)(a->x + 0x2C8) = t2 & 0xFFFD;
        }
        break;
    }
}
