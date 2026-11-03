typedef void (*Fn)(void *);
extern volatile u32 D_80167268_ovl_26[];
void func_80164BE4_ovl_26(void *p) { u8 i=((u8 *)p)[6]; volatile u32 *base=D_80167268_ovl_26; ((Fn)base[i])(p); }
