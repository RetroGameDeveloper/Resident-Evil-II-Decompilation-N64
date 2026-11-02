s32 func_80033634_ovl_01(void); void func_801672F4_ovl_30(void*,s32,s32); extern volatile u8 D_80167D30_ovl_30[];
void func_80165608_ovl_30(void *arg0) {
 u8 *p=arg0;
 register void *state=arg0;
 register volatile u8 *base=D_80167D30_ovl_30;
 s32 r; u8 x;
 if (p[4]==2) {
   p[0x2b5]=15;
   r=func_80033634_ovl_01(); x=base[(r&3)+8]; func_801672F4_ovl_30(state,x,4);
   r=func_80033634_ovl_01(); x=base[(r&3)+8]; func_801672F4_ovl_30(state,x,4);
 } else {
   p[0x2b5]=0x2d;
   r=func_80033634_ovl_01(); x=base[(r&3)+8]; func_801672F4_ovl_30(state,x,4);
   r=func_80033634_ovl_01(); x=base[(r&3)+8]; func_801672F4_ovl_30(state,x,4);
   r=func_80033634_ovl_01(); x=base[(r&3)+8]; func_801672F4_ovl_30(state,x,8);
 }
}
