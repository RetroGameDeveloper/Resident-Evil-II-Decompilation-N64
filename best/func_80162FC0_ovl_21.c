typedef struct { u8 x[0x300]; } Obj;
typedef void (*Fn)(Obj *, s32, s32);
extern volatile Fn D_801638B4_ovl_21[];
extern s32 func_801635B8_ovl_21(void *, s32);
extern void func_80162FA0_ovl_21(void *, s32);

void func_80162FC0_ovl_21(Obj *a, s32 b, s32 c) {
    s32 ff = 0xFF;
    if (a->x[5] != ff) {
        func_80162FA0_ovl_21(a, func_801635B8_ovl_21(a, b));
        a->x[5] = ff;
    }
    ff = a->x[0x26E];
    D_801638B4_ovl_21[ff](a, b, c);
}
