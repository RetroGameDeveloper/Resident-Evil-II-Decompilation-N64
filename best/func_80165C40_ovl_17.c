extern s32 func_80077D48_ovl_01(s32, void *);
extern s32 func_80089D34_ovl_01(void *,  s32);
extern s32 func_80165A08_ovl_17(void *);
extern s32 func_80166C3C_ovl_17(void *, s16, s16, s32);
extern s32 func_80166FBC_ovl_17(void *, s32, s32);
extern s32 func_80167974_ovl_17(void *, s32, s32, s32);
extern s32 D_80167C90_ovl_17[];
void func_80165C40_ovl_17(void *arg0, s32 arg1, s32 arg2) {
 void *var_s1=(u8*)arg0+0x2B4; s32 a=arg1,b=arg2; s32 v,t,q;
 v=0; func_80166C3C_ovl_17(arg0,*(s16*)((u8*)arg0+0x1F4),*(s16*)((u8*)arg0+0x1F6),v);
 *(u16*)((u8*)arg0+0x1E0)+=0x28;
 if(func_80167974_ovl_17(arg0,0x190,0,0)) {
  v=*(u8*)((u8*)arg0+0x2CC);
  *(s16*)((u8*)arg0+0x64)=0;
  t=v<<10; v&=1; q=t*v;
  *(s16*)((u8*)arg0+0x68)=0;
  v=2; *(u8*)((u8*)arg0+6)=v;
  t=*(u16*)((u8*)arg0+0x2C2); v=q; t=t+v; v=-t;
  *(s16*)((u8*)arg0+0x66)=v;
  *(s8*)((u8*)var_s1+0xA)=0;
  v=*(s32*)arg0; t=0x0C090000;
  *(s32*)((u8*)arg0+0x1E8)=t;
  v|=0x42;
  func_80089D34_ovl_01(arg0, a);
  *(s32*)arg0=v;
  v=(s32)D_80167C90_ovl_17;
  t=*(s32*)(v+0); q=*(s32*)(v+4); *(s32*)((u8*)arg0+0x120)=t; *(s32*)((u8*)arg0+0x124)=q;
  t=*(s32*)(v+8); q=*(s32*)(v+12); *(s32*)((u8*)arg0+0x128)=t; *(s32*)((u8*)arg0+0x12C)=q;
  t=*(s32*)(v+16); q=*(s32*)(v+20); *(s32*)((u8*)arg0+0x130)=t; *(s32*)((u8*)arg0+0x134)=q;
  t=*(s32*)(v+24); q=*(s32*)(v+28); *(s32*)((u8*)arg0+0x138)=t; *(s32*)((u8*)arg0+0x13C)=q;
  *(s8*)((u8*)var_s1+0xD)=0;
  v=*(s8*)((u8*)arg0+0x2D6); if(v<0) v=6; else v=5;
  func_80077D48_ovl_01(v,arg0); func_80165A08_ovl_17(arg0);
  if(*(s8*)((u8*)var_s1+0x22)<0) { v=*(u8*)((u8*)var_s1+0x24); if(v>=9 && v<0xB) { func_80166FBC_ovl_17(arg0,0,7); } else if(v==0x10) { func_80166FBC_ovl_17(arg0,0,7); } }
 }
}
