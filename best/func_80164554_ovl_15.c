typedef struct { u8 x[0x300]; } Obj;
extern void func_8016454C_ovl_15(Obj *);
typedef void (*Fn)(Obj *, s32, s32);
extern volatile Fn D_80166044_ovl_15[];
void func_80164554_ovl_15(Obj *a, s32 b, s32 c) {
    s32 ff = 0xFF;
    if (a->x[5] != ff) {
        a->x[5] = ff;
        func_8016454C_ovl_15(a);
    }
    D_80166044_ovl_15[a->x[0x26E]](a, b, c);
}
