typedef struct { u8 pad[5]; u8 state; } Arg;
typedef void (*Fn0)(void);
typedef void (*Fn3)(Arg *,s32,s32);
extern Fn0 D_80165440_ovl_19[];
extern Fn3 D_80165460_ovl_19[];
void func_80162144_overlay_019(Arg *p,s32 b,s32 c) {
 D_80165440_ovl_19[p->state]();
 D_80165460_ovl_19[p->state](p,b,c);
}
