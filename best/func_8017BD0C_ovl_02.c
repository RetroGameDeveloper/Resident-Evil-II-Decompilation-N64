typedef struct { u32 f0,f4,pos,bits,count; u8 pad[8]; u32 end; } S; extern S *D_80186C14_ovl_02; extern s32 D_8018579C_ovl_02; extern void func_8017B768_ovl_02(void*,s32); extern s32 func_8017B874_ovl_02(void); extern void func_8017B96C_ovl_02(void*,s32);
void func_8017BD0C_ovl_02(s32 arg1) {
 S *p=D_80186C14_ovl_02; s32 b=p->count-0x20; p->bits=0;
 if(D_8018579C_ovl_02 && p->pos >= p->end-4) {
  if(b<25) { s32 lim=24; do {
   if(p->pos>=p->end) func_8017B96C_ovl_02(&D_80186C14_ovl_02,arg1);
   p->bits |= func_8017B874_ovl_02() << (lim-b); b+=8;
  } while(b<25); }
 } else if(b<25) { s32 lim=24; do {
  if(p->pos>=p->f0+0x800) func_8017B768_ovl_02(&D_80186C14_ovl_02,arg1);
  p->bits |= (*(u8*)p->pos++) << (lim-b); b+=8;
 } while(b<25); }
 p->count=b;
}
