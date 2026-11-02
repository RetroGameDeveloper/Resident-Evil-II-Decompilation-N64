typedef struct { u8 x[0x2B8]; } Obj;
typedef void (*Fn)(Obj *, s32, s32);
extern volatile Fn D_801667CC_ovl_22[];
extern volatile Fn D_80166814_ovl_22[];
extern s32 func_80036764_ovl_01_510(void *, s32);
void func_801632AC_ovl_22(Obj *a, s32 b, s32 c) {
    D_801667CC_ovl_22[a->x[5]](a, b, c);
    D_80166814_ovl_22[a->x[5]](a, b, c);
    func_80036764_ovl_01_510(a, *(s32 *)(a->x + 0x2B4));
    *(s32 *)(a->x + 0x2B4) = *(s32 *)(a->x + 4);
}
