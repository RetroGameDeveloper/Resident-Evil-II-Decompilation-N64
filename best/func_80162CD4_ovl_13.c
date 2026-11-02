void func_80162CD4_ovl_13(void *p,s32 a,s32 b) {
 u8 c;
 u8 state=*(u8*)((u8*)p+6);
 if(state==0) {
  if(func_80033634_ovl_01()&1) { *(s32*)((u8*)p+0x1e8)=0x03000700; c=2; }
  else {
   *(s32*)((u8*)p+0x1e8)=0x04000700;
   if(func_80033634_ovl_01()&7) c=3; else {func_80166158_ovl_13(p,1); c=3;}
  }
  *(u8*)((u8*)p+0x2b4)=c;
  c=func_80033634_ovl_01()&31; *(u8*)((u8*)p+0x2b5)=c;
  *(s16*)((u8*)p+0x1e2)=0; *(u8*)((u8*)p+6)=1;
  goto proc;
 }
 if(state!=1) return;
proc:
 func_80032DEC_ovl_01(p,*(s16*)((u8*)p+0x260),*(s16*)((u8*)p+0x262),32);
 func_80032C08_ovl_01(p,0,0);
 if(*(s16*)((u8*)p+0x1e0)<300) *(s16*)((u8*)p+0x1e0)=*(u16*)((u8*)p+0x1e0)+*(u8*)((u8*)p+0x2b4);
 func_80089D34_ovl_01(p,a,b,512);
 c=*(u8*)((u8*)p+0x2b5)-1; *(u8*)((u8*)p+0x2b5)=c;
 if(c==255) *(u8*)((u8*)p+6)=0;
}
