extern u8 D_800C7650_ovl_01[];
extern s16 D_80168E70_ovl_28[], D_80168E78_ovl_28[], D_80168E84_ovl_28[], D_80168E94_ovl_28[];
extern u16 D_80168F58_ovl_28[], D_80168F5C_ovl_28[];
void func_801642DC_ovl_28(u8 *p, s32 x, s32 y) {
 s32 state=p[6], i, best, d;
 if(state>=6) return;
 if(state==0) {
  *(u32*)(p+0x1e8)=0x0e001f00; p[6]=1;
  if(*(s16*)(D_800C7650_ovl_01+0x215fa)==3) {
   best=0x7fffffff;
   for(i=4;i>=0;i--) { s32 dx=*(s32*)(p+0x28)-D_80168E78_ovl_28[2*i]; s32 dz=*(s32*)(p+0x30)-D_80168E78_ovl_28[2*i+1]; d=func_80040BE4_ovl_01(dx*dx+dz*dz); if(d<best){best=d;p[0x2b7]=i;} }
  } else {
   best=0x7fffffff;
   for(i=1;i>=0;i--) { s32 dx=*(s32*)(p+0x28)-D_80168E70_ovl_28[2*i]; s32 dz=*(s32*)(p+0x30)-D_80168E70_ovl_28[2*i+1]; d=func_80040BE4_ovl_01(dx*dx+dz*dz); if(d<best){best=d;p[0x2b7]=i;} }
  }
  *(u16*)(p+0x2b8)|=8;
  if(*(s16*)(D_800C7650_ovl_01+0x215fa)==3) {
   for(i=2;i;i--) if(func_80032B40_ovl_01(p+0x28,D_80168E84_ovl_28+0x10+(i-1)*-8)){p[6]=2;*(u16*)(p+0x1f6)=D_80168F58_ovl_28[(i-1)];}
  } else {
   for(i=2;i;i--) if(func_80032B40_ovl_01(p+0x28,(s16*)((u8*)D_80168E84_ovl_28+0x10+(i-1)*-8))){p[6]=2;*(u16*)(p+0x1f6)=*(u16*)((u8*)D_80168F58_ovl_28+(i-1)*-2);}
  }
  func_80032DEC_ovl_01(p,*(s16*)(p+0x260),*(s16*)(p+0x262),0x10);
  func_80032F24_ovl_01(p,*(s16*)(p+0x1f6),0x20);
  if(*(s16*)(D_800C7650_ovl_01+0x215fa)==3) {
   if(!func_80032F94_ovl_01_48(p,*(s16*)(p+0x1f6),0x10) && (*(s32*)(p+0x1ac)&1)==0) goto common;
   if(!func_80032F94_ovl_01_48(p,*(s16*)(p+0x1f6),0x10) && (*(s32*)(p+0x1ac)&1)) {p[6]=3;*(u32*)p|=8;}
  } else {
   if(!func_80032F94_ovl_01_48(p,*(s16*)(p+0x1f6),0x10) && (*(s32*)(p+0x1ac)&1)==0) goto common;
   if(!func_80032F94_ovl_01_48(p,*(s16*)(p+0x1f6),0x10) && (*(s32*)(p+0x1ac)&1) && *(s32*)(p+0x28)>=-0x2133) {p[6]=3;*(u32*)p|=8;}
  }
  func_800334F8_ovl_01(p,x,y,0); func_80089D34_ovl_01(p,x,y,0x80); func_80032B8C_ovl_01(p,0); *(u16*)(p+0x1f2)=0;
  return;
 } else if(state==1) {
  *(u32*)(p+0x1e8)=0x10001f00;p[6]=4;*(s16*)(p+0x1f2)=-1;
  func_800334F8_ovl_01(p,x,y,0); if(func_80089D34_ovl_01(p,x,y,0x80))p[6]=5;func_80032B8C_ovl_01(p,0);
 } else if(state==2) {
 common:
  func_800334F8_ovl_01(p,x,y,0);func_80089D34_ovl_01(p,x,y,0x80);func_80032B8C_ovl_01(p,0);*(u16*)(p+0x1f2)=0;
 } else if(state==3) {
  func_80032F24_ovl_01(p,*(s16*)(p+0x1f6),0x20);func_800334F8_ovl_01(p,x,y,0);func_80089D34_ovl_01(p,x,y,0x80);func_80032B8C_ovl_01(p,0);*(u16*)(p+0x1f2)=0;
 } else if(state==4) {
  *(u32*)(p+0x1e8)=0x10001f00;p[6]=4;*(s16*)(p+0x1f2)=-1;func_800334F8_ovl_01(p,x,y,0);if(func_80089D34_ovl_01(p,x,y,0x80))p[6]=5;func_80032B8C_ovl_01(p,0);
 }
}
