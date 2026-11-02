typedef struct { u8 x[0x2D0]; } Obj;
extern u8 D_800E10D0_ovl_01[];
extern void func_80035AAC_ovl_01_108(Obj *);
extern void func_8016303C_ovl_14(Obj *);
extern void func_80167E30_ovl_14(Obj *);
typedef void (*Fn)(Obj *, s32, s32);
extern volatile Fn D_80168CB4_ovl_14[];
void func_80167EE0_ovl_14(Obj *a, s32 b, s32 c) {
    s32 ff = 0xFF;
    s32 v = a->x[5];
    if (v != ff) {
        a->x[0x2CB] = v;
        a->x[5] = ff;
        *(s32 *)(a->x + 0x2C4) = (s32)D_800E10D0_ovl_01;
        func_80035AAC_ovl_01_108(a);
        func_8016303C_ovl_14(a);
        func_80167E30_ovl_14(a);
    }
    D_80168CB4_ovl_14[a->x[0x26E]](a, b, c);
}
