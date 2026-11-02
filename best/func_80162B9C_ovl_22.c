s32 func_80065400_ovl_01(void*,s32,s32,s32); s16 func_80040BE4_ovl_01(s32); s32 func_8004DB8C_ovl_01(void*); s32 func_8004DCE8_ovl_01(void*,s32); s32 func_80033678_ovl_01(void*); extern u8 D_800E10F8_ovl_01[]; extern u8 D_800C7650_ovl_01[]; extern u32 D_801667AC_ovl_22[];
void func_80162B9C_ovl_22(void *arg0){
 u8 *p=(u8*)arg0; u32 flags; s32 x,y; u32 fn;
 func_80065400_ovl_01(D_800E10F8_ovl_01,0,0,0);
 flags=*(u32*)(D_800C7650_ovl_01+0x19A60);
 if(!(flags&0x20000000)){
  if(p[0x26F]&0x7F)p[0x26F]--;
  fn=D_801667AC_ovl_22[p[4]];((void(*)(void*,s32,s32))fn)(arg0,*(s32*)(p+0x1A4),*(s32*)(p+0x218));
  if(p[0x2C6])p[0x2C6]--; if(p[0x2C7])p[0x2C7]--; if(p[0x2C8])p[0x2C8]--; if(p[0x2C9])p[0x2C9]--;
  fn=*(u32*)(p+0x2BC); if(fn)((void(*)(void*))fn)(arg0);
  if(!(*(u16*)(p+0x2C0)&0x80))func_80033678_ovl_01(arg0);
  func_8004DB8C_ovl_01(arg0); func_8004DCE8_ovl_01(arg0,0x400);
  x=*(s32*)(p+0x28)-*(s16*)(p+0x34); y=*(s32*)(p+0x30)-*(s16*)(p+0x38);
  *(s16*)(p+0x2C2)=func_80040BE4_ovl_01(x*x+y*y);
 }
}
