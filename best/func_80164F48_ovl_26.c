extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10D0_ovl_01[];
s32 func_80033174_ovl_01(void *, void *);
s32 func_800334F8_ovl_01(void *, s32, s32, s32);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_80033634_ovl_01(void *);
s32 func_80166B18_ovl_26(void *, s32, s32);
s32 func_80077D48_ovl_01(s32, void *);
s32 func_80032B8C_ovl_01(void *, s32);
s32 func_80164E08_ovl_26(void);
void func_80164F48_ovl_26(void *arg0,s32 arg1,s32 arg2) {
 u8 *p=arg0; s32 v; u32 rem;
 if(p[0x2D9]) {func_80164E08_ovl_26();return;}
 if(!p[6]) {
  *(u16*)(p+6)=0x100;
  *(u16*)((u8*)&D_800C7650_ovl_01+0x18000+0x1A78) &= 0xFFBF;
  v=func_80033174_ovl_01(arg0,&D_800E10D0_ovl_01)&255;
  *(s32*)(p+0x1E8)=(v+p[0x2CD]*13+3)<<24;
  func_800334F8_ovl_01(arg0,arg1,arg2,0);
  func_80089D34_ovl_01(arg0,arg1,arg2,0x400);
  *(s32*)(p+0x2A8)=0;*(s16*)(p+0x2AC)=0;
  if(!p[0x2D9]){p[0x2C1]=6;p[0x2C3]=3;}
  rem=p[0x26E]%3;
  if(rem) goto L;
  if(p[0x2D9]) goto L;
  v=func_80033634_ovl_01(arg0);
  func_80166B18_ovl_26(arg0,((v&1)<<2)|3,0);
  goto T;
L:func_80166B18_ovl_26(arg0,10,0);
T:func_80077D48_ovl_01(11,arg0);
  *(s32*)p &= -5;
 }else{
  func_800334F8_ovl_01(arg0,arg1,arg2,0);
  if(func_80089D34_ovl_01(arg0,arg1,arg2,0x400)) {
   *(s32*)(p+4)=p[0x2D9]?0x01090000:0x01010000;
   *(s16*)(p+0x130)=p[0x2CD]?-0x320:0x320;
  }else func_80032B8C_ovl_01(arg0,0);
 }
}
