extern u8 D_800C7650_ovl_01[];
void func_8016B5B0_ovl_11(void *p, s32 x, s32 y) {
 u8 *b=p; u8 *base=D_800C7650_ovl_01;
 s32 i=*(s16 *)(b+0x276); u8 st=b[6]; u8 *n;
 base += 0x18000; n=*(u8 **)(base+i*4+0x1D38);
 if(st>=5) {*(s32 *)(b+4)=0x08030200; return;}
 switch(st) {
 case 0:
  *(s32 *)(b+0x1E8)=0x0A000F00; b[6]=1;
  func_80032DEC_ovl_01(b,*(s32 *)(n+0x28),*(s32 *)(n+0x30),0x400);
  func_80077D48_ovl_01(10,b); *(u16 *)(b+0x1F4)=0; b[0x26F]|=0x80;
  /* fallthrough */
 case 1:
  *(u16 *)(b+0x1F4)=*(u16 *)(b+0x1F4)+1;
  if(*(u16 *)(b+0x1F4)&1) func_800334F8_ovl_01(b,x,y,0);
  else *(s16 *)(b+0x1E0)=(*(u16 *)(b+0x1E0)<<16)>>18;
  {s32 r=func_80089D34_ovl_01(b,x,y,0x100); b[6]+=r;}
  func_80032B8C_ovl_01(b,0);
  if(b[0x1E9]==0x11)b[6]=2;
  break;
 case 2:
  *(s32 *)(b+0x1E8)=0x18000F00; b[6]=3;
  func_800331E8_ovl_01(n,x,y,0);
  *(s32 *)(n+4)=0x04200000; *(void **)(n+0x250)=b;
  *(s32 *)(n+0x224)=*(s32 *)(b+0x224); *(s32 *)(n+0x228)=*(s32 *)(b+0x228);
  *(s32 *)b|=0x1000; *(s32 *)n|=0x1000;
  func_8003334C_ovl_01(b,x,y,0);
  {s32 r=func_80089D34_ovl_01(b,x,y,0x100); b[6]+=r;}
  break;
 case 3: *(s32 *)(b+4)=0x08030200; break;
 }
}
