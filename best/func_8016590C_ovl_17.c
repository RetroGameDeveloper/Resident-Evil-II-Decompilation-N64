extern s32 func_80089D34_ovl_01(void *,s32,s32,s32); extern s32 func_80032C08_ovl_01(void *,s32,s32); extern s32 func_80167974_ovl_17(void *,s32,s32,s32); extern s32 func_80077D48_ovl_01(s32,void *); extern s32 func_80165A08_ovl_17(void *); extern s32 func_80166FBC_ovl_17(void *,s32,s32);
void func_8016590C_ovl_17(void *p) {
 u8 *tail=(u8*)p+0x2b4; s32 a1; s32 v;
 func_80089D34_ovl_01(p,0,0,0x200);
 func_80032C08_ovl_01(p,0,0);
 *(u16*)((u8*)p+0x1e2)=*(u16*)((u8*)p+0x1e2)+0x28;
 if(func_80167974_ovl_17(p,0,0,0)) {
  a1=5;
  *((u8*)p+6)=2;
  *(u32*)p=(*(u32*)p&0xe7ffffff)|0x04000000;
  tail[0xa]=0;
  *(u32*)p=*(u32*)p|0x42;
  if(*(s8*)((u8*)p+0x2d6)<0) a1=6;
  func_80077D48_ovl_01(a1,p);
  func_80165A08_ovl_17(p);
  if(*(s8*)(tail+0x22)<0) {
   v=tail[0x24];
   if(v<9) goto out;
   if(v<11) { func_80166FBC_ovl_17(p,0,7); } else if(v==16) func_80166FBC_ovl_17(p,0,7);
  }
 }
 out:;
}
