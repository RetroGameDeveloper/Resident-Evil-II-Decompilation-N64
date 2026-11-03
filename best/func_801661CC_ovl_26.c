typedef void (*Fn)(void *);
extern volatile u32 D_8016731C_ovl_26[];
void func_801661CC_ovl_26(void *p) { u8 i=((u8 *)p)[5]; volatile u32 *base=D_8016731C_ovl_26; ((Fn)base[i])(p); }
