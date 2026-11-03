typedef struct { u8 x[0x300]; } Obj;
extern void func_80162348_ovl_22(Obj *);
extern void func_801658AC_ovl_22(Obj *);
typedef void (*Fn)(Obj *, s32, s32);
extern volatile Fn D_8016685C_ovl_22[];

void func_80165918_overlay_022(Obj *a, s32 b, s32 c) {
    s32 ff = 0xFF;
    u8 v = a->x[5];

    if (v != ff) {
        a->x[0x2C5] = v;
        func_80162348_ovl_22(a);
        a->x[5] = ff;
        func_801658AC_ovl_22(a);
    }
    ff = a->x[0x26E];
    D_8016685C_ovl_22[ff](a, b, c);
}
