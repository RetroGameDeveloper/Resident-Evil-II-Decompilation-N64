typedef void (*Fn)(void *);
extern volatile u32 D_80167310_ovl_26[];
void func_80165DA8_ovl_26(void *p) { u8 i=((u8 *)p)[5]; volatile u32 *base=D_80167310_ovl_26; ((Fn)base[i])(p); }
