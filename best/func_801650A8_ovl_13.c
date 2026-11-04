typedef struct { u8 pad[5]; u8 state; } Arg;
extern u8 D_800E10F8_ovl_01;
extern u32 D_8016664C_ovl_13[];
void func_80065400_ovl_01(void *, s32);
void func_801650A8_ovl_13(Arg *p, s32 b, s32 c) {
 func_80065400_ovl_01(&D_800E10F8_ovl_01, 0);
 ((void (*)(Arg *,s32,s32))D_8016664C_ovl_13[p->state])(p,b,c);
}
