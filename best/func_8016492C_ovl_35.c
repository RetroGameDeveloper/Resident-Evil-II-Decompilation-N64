typedef struct { u8 x[0x2D8]; } Obj;
typedef void (*Fn)(Obj *, s32, s32);
extern volatile Fn D_80166738_ovl_35[];
extern void func_80089D34_ovl_01(Obj *, s32, s32, s32);
void func_8016492C_ovl_35(Obj *a, s32 b, s32 c) {
    D_80166738_ovl_35[a->x[6]](a, b, c);
    if (a->x[6] != 3)
        func_80089D34_ovl_01(a, b, c, 0x100);
    *(u16 *)(a->x + 0x2D0) = *(u16 *)(a->x + 0x1E0);
    *(u16 *)(a->x + 0x2D2) = *(u16 *)(a->x + 0x1E2);
    *(u16 *)(a->x + 0x2D4) = *(u16 *)(a->x + 0x1E4);
}
