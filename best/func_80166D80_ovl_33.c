extern s32 D_800C7650_ovl_01[];
s32 func_80052C9C_ovl_01(s32,s32,s32,void*);
s32 func_80052D40_ovl_01(s32,s32,s32,s32);
void func_80166D80_ovl_33(void *arg0) {
 u8 x;
 void *p;
 p=*(void **)((u8 *)D_800C7650_ovl_01+0x18000+0x1D40);
 *(u8 *)((u8 *)p+0x2BF) &= ~(2 << *((u8*)arg0+0x2B4));
 x=*((u8*)arg0+0x2BE);
 if (x != 0) {
  *((u8*)arg0+0x2BE)=x-1;
  p=*(void **)((u8 *)D_800C7650_ovl_01+0x18000+0x1D40);
  *((u8 *)p+0x2BF) |= 2 << *((u8*)arg0+0x2B4);
  func_80052C9C_ovl_01(3,0x82,0,p);
  func_80052D40_ovl_01(0x19,0x82,0,3);
 }
}
void func_80166E18_ovl_33(void *arg0) {
 u8 state=*((u8*)arg0+0x2BF); void *p; u16 timer;
 if(state==1) {
  p=*(void **)((u8*)arg0+0x234);
  *(s32*)((u8*)p+0x5E0)=(*(s32*)((u8*)p+0x5E0)&~0x4000)|0x40;
  *((u8*)arg0+0x2BF)=2;
  *((u16*)((u8*)arg0+0x2C0))=0x96;
 }
 if(state==1 || state==2) {
  timer=*((u16*)((u8*)arg0+0x2C0))-1;
  *((u16*)((u8*)arg0+0x2C0))=timer;
  if(timer==0xFFFF) *((u8*)arg0+0x2BF)=3;
  return;
 }
 if(state==3) {
  p=*(void **)((u8*)arg0+0x234);
  *(s32*)((u8*)p+0x5E0)=(*(s32*)((u8*)p+0x5E0)|0x4000)&~0x40;
  *((u8*)arg0+0x2BF)=0;
 }
}
