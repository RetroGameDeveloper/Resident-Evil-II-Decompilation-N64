extern u32 D_80167E0C_ovl_17[];
void func_80089D34_ovl_01(void);
s32 func_80166D98_ovl_17(void *,s32,u8);
s16 func_80074D94_ovl_01(s32,s32);
s32 func_801620C8_ovl_17(void*,s32,s32);
s32 func_8016477C_ovl_17(void*,s32,s32);
s32 func_80166FBC_ovl_17(void*,s32,s32);
void func_80164600_ovl_17(void *a) {
 u8 *p=a; u32 t; func_80089D34_ovl_01();
 if(p[0x2d3]) t=*(u32*)(p+0x290)&0x3fffffff; else t=*(u32*)(p+0x28c);
 if(t<0x1c20 || func_80166D98_ovl_17(a,*(s32*)(p+0x2c4),p[0x2cc])) {
  if(p[0x2d3]) {t=*(u32*)(p+0x290)&0x3fffffff; if(t<0xbb8)p[5]=7;else p[5]=3;}
  else {t=*(u32*)(p+0x28c); if(t<0xbb8)p[5]=7;else p[5]=3;}
  *(u16*)(p+6)=0;
 }
}
void func_801646B4_ovl_17(void *a,s32 b,s32 c) {
 u8 *p=a;
 if(p[6]==0)p[0x2d8]=p[5];
 if(*(s16*)(p+0x1a8)==0)*(s16*)(p+0x1a8)=func_80074D94_ovl_01(*(s32*)(p+0x28),*(s32*)(p+0x30));
 ((void(*)(void*,s32,s32))D_80167E0C_ovl_17[p[5]-1])(a,b,c);
}
void func_80164890_ovl_17(void *a,s32 b,s32 c) {
 u8 *p=a; u8 *q=p+0x2b4;
 if(q[0x1e]) {*(u32*)(p+4)=((u32)q[0x1b]<<16)+((u32)q[0x1c]<<8)+q[0x1d]+0x1000000;
 if(p[0x2d8]!=1)func_80166FBC_ovl_17(a,0,0); func_801620C8_ovl_17(a,b,c);}
 else func_8016477C_ovl_17(a,b,c);
}
s32 func_80164568_ovl_17(void *a) {
 u8 *p=a; u32 x; s32 y;
 x=p[0x2cc]; y=*(u16*)(p+0x2c2);
 if(x==0)y=-y;
 return ((x<<10)+((s16)y-((s32)(y<<16)>>18)))&0xfff;
}
