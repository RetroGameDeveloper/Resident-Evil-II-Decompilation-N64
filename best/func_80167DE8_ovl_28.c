typedef void (*Fn)(void *);
extern volatile u32 D_80168FE0_ovl_28[];
void func_80167DE8_ovl_28(void *p) { u8 i=((u8 *)p)[5]; volatile u32 *base=D_80168FE0_ovl_28; ((Fn)base[i])(p); }
