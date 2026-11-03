void func_80166470_ovl_30(void *p) {
 u8 x; s32 y;
 if (*(u8*)((u8*)p+6)==0) {
  *(u8*)((u8*)p+6)=1; *(u8*)((u8*)p+0x2c4)=1; *(u8*)((u8*)p+0x2c5)=1;
  y=*(s32*)p; *(u32*)((u8*)p+0x1e8)=0x10130f00;
  *(s16*)((u8*)p+0x272)=0; y|=0x400; x=*(u8*)((u8*)p+0x25c); *(s32*)p=y; x|=1; *(u8*)((u8*)p+0x25c)=x;
 }
 if (*(s16*)((u8*)p+0x270)==1) { *(u8*)((u8*)p+5)=1; *(s16*)((u8*)p+6)=0; }
}
s32 func_80166FE4_ovl_30(void *a0, void *p) {
 s32 v, d; u8 x;
 x=*(u8*)((u8*)p+0x12);
 if(x) { *(u8*)((u8*)p+0x12)=x-1; }
 else {
  d=(func_80033634_ovl_01()&7)-3;
  v=func_80033634_ovl_01()&3;
  if(v&1) func_8016714C_ovl_30(d);
  if(v&2) func_8016719C_ovl_30(d);
  *(u8*)((u8*)p+0x12)=*(u8*)((u8*)p+0x11)*(func_80033634_ovl_01()&7);
 }
 return 0;
}
extern u8 D_800E10D0_ovl_01[];
extern s16 D_80167CEC_ovl_30[];
s32 func_80032F94_ovl_01_48(void*,void*,s32);
s32 func_8016758C_ovl_30(void *p, s32 i) {
 s32 n, d; u8 *g=D_800E10D0_ovl_01; s16 *t=D_80167CEC_ovl_30; void *base,*e;
 n=t[i]; base=*(void**)((u8*)p+0x234); e=(u8*)base+n*0x178;
 if ((g[0x26f]&0x80) || *(s16*)(g+0x1f2)<0) return 0;
 if (!func_80032F94_ovl_01_48(g+0x28,(u8*)e+0x4c,t[i+1])) return 0;
 d=*(s32*)((u8*)p+0x2c)-*(s32*)((u8*)e+0x50);
 if(d<0)d=-d;
 return d<0xce4;
}
s32 func_80165D94_ovl_30(void *p,s16 a) {
 u16 t; s32 d, absd, turn;
 t=*(u16*)((u8*)p+0x66); d=*(u16*)((u8*)p+0x2b6)-(t&0xfff); turn=d;
 absd=d; if(absd<0) absd=-absd;
 if(absd<a) return 1;
 if(d<0) absd=-d; else absd=d;
 if(absd>=0x800) turn=-d;
 if((s16)turn<=0) *(s16*)((u8*)p+0x66)=(s16)t-a;
 else *(s16*)((u8*)p+0x66)=(s16)t+a;
 return 0;
}
