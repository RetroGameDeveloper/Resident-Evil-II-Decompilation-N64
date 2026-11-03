typedef struct { u8 pad[5]; u8 state; } Arg;
typedef void (*Fn0)(void);
typedef void (*Fn3)(Arg *,s32,s32);
extern Fn0 D_80167F54_ovl_20[];
extern Fn3 D_80167F7C_ovl_20[];
void func_801626AC_ovl_20(Arg *p,s32 b,s32 c) {
 D_80167F54_ovl_20[p->state]();
 D_80167F7C_ovl_20[p->state](p,b,c);
}
