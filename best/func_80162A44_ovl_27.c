typedef void (*Fn)(void *);
extern volatile u32 D_80163D30_ovl_27[];
void func_80162A44_ovl_27(void *p) { u8 i=((u8 *)p)[5]; volatile u32 *base=D_80163D30_ovl_27; ((Fn)base[i])(p); }
