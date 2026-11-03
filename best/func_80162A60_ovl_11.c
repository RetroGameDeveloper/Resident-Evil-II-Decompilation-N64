typedef struct { u8 pad[5]; u8 state; } Arg;
typedef void (*Fn0)(void);
typedef void (*Fn3)(Arg *,s32,s32);
extern Fn0 D_8016E1AC_ovl_11[];
extern Fn3 D_8016E1B8_ovl_11[];
void func_80162A60_ovl_11(Arg *p,s32 b,s32 c) {
 D_8016E1AC_ovl_11[p->state]();
 D_8016E1B8_ovl_11[p->state](p,b,c);
}
