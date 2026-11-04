extern s32 D_800C7650_ovl_01;
s32 func_80052C9C_ovl_01(s32,s32,s32,void*);
s32 func_80052D40_ovl_01(s32,s32,s32,s32);
void func_80166D80_ovl_33(void *arg0) {
 void *p; u8 idx,n;
 p=(void*)((u8*)&D_800C7650_ovl_01+0x18000);
 p=*(void**)((u8*)p+0x1D40);
 idx=*((u8*)arg0+0x2B4);
 *((u8*)p+0x2BF)=*((u8*)p+0x2BF)&~(2<<idx);
 n=*((u8*)arg0+0x2BE);
 if(n) {
  *((u8*)arg0+0x2BE)=n-1;
  p=(void*)((u8*)&D_800C7650_ovl_01+0x18000);
  p=*(void**)((u8*)p+0x1D40);
  idx=*((u8*)arg0+0x2B4);
  *((u8*)p+0x2BF)=*((u8*)p+0x2BF)|(2<<idx);
  func_80052C9C_ovl_01(3,0x82,0,p);
  func_80052D40_ovl_01(0x19,0x82,0,3);
 }
}
void func_80166E18_ovl_33(void *arg0) {
 u8 state; void *p; u16 timer;
 state=*((u8*)arg0+0x2BF);
 if(state==1) goto state1;
 if(state<2) return;
 if(state==2) goto state2;
 if(state==3) goto state3;
 return;
state1:
 p=*(void**)((u8*)arg0+0x234);
 *(s32*)((u8*)p+0x5E0)=(*(s32*)((u8*)p+0x5E0)&~0x4000)|0x40;
 *((u8*)arg0+0x2BF)=2;
 *(u16*)((u8*)arg0+0x2C0)=0x96;
state2:
 timer=*(u16*)((u8*)arg0+0x2C0);
 timer--;
 *(u16*)((u8*)arg0+0x2C0)=timer;
 if(timer!=0xFFFF) return;
 *((u8*)arg0+0x2BF)=3; return;
state3:
 p=*(void**)((u8*)arg0+0x234);
 *(s32*)((u8*)p+0x5E0)=(*(s32*)((u8*)p+0x5E0)|0x4000)&~0x40;
 *((u8*)arg0+0x2BF)=0;
}
