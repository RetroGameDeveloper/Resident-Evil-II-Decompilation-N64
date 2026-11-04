typedef struct { u8 x[0x2D0]; } Obj;
extern s32 func_80089D34_ovl_01(Obj *, s32, s32, s32);

void func_80168758_ovl_31(Obj *a, s32 b, s32 c) {
    switch (a->x[6]) {
    case 0:
        *(s32 *)(a->x + 0x1E8) = 0x08050700;
        a->x[6] = 1;
        *(u16 *)(a->x + 0x2B6) |= 0x400;
    case 1:
        if (func_80089D34_ovl_01(a, b, c, 0x200) != 0) {
            *(s32 *)(a->x + 4) = 0x01010000;
            a->x[0x26F] &= 0x7F;
            *(u16 *)(a->x + 0x2B6) &= ~0x400;
        }
        break;
    }
}
