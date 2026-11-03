typedef struct { u8 x[0x2D0]; } Obj;
extern u8 D_800E10D0_ovl_01[];
extern void func_80035AAC_ovl_01_108(Obj *);
extern void func_8016303C_ovl_16(Obj *);
extern void func_80166964_ovl_16(Obj *);
typedef void (*Fn)(Obj *, s32, s32);
extern volatile Fn D_80167494_ovl_16[];
void func_801669D4_ovl_16(Obj *a, s32 b, s32 c) {
    s32 ff = 0xFF;
    s32 v = a->x[5];
    if (v != ff) {
        a->x[0x2CB] = v;
        a->x[5] = ff;
        *(s32 *)(a->x + 0x2C4) = (s32)D_800E10D0_ovl_01;
        func_80035AAC_ovl_01_108(a);
        func_8016303C_ovl_16(a);
        func_80166964_ovl_16(a);
    }
    ff = a->x[0x26E];
    D_80167494_ovl_16[ff](a, b, c);
}
