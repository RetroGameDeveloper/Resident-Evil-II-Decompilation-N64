typedef struct { u8 x[0x2D0]; } Obj;
extern u8 D_800E10F8_ovl_01[];
extern void func_80065400_ovl_01(Obj *, u8 *, s32, s32);
typedef void (*Fn)(Obj *, s32, s32);
extern volatile Fn D_80166600_ovl_13[];
void func_80164410_ovl_13(Obj *a, s32 b, s32 c) {
    func_80065400_ovl_01(a, D_800E10F8_ovl_01, 0, 0);
    D_80166600_ovl_13[a->x[5]](a, b, c);
}
