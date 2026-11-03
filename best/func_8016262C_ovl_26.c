extern u8 D_800C7650_ovl_01[]; extern u8 D_800E10D0_ovl_01[];
void func_8016262C_ovl_26(void *arg0,s32 arg1,s32 arg2) {
 s32 *a1; u8 *s1; u32 v; u32 n;
 if (*(u8*)((u8*)arg0+0x2B4)) { a1=(s32*)(D_800C7650_ovl_01+0x18000+0x1D3C); s1=(u8*)arg0+0x2B4; } else { a1=(s32*)D_800E10D0_ovl_01; s1=(u8*)arg0+0x2B4; }
 switch(*(u8*)((u8*)arg0+6)) {
 case 0:
  v=*(u16*)((u8*)arg0+0x1AA);
  if(v==0x6002 && *(s16*)((u8*)arg0+0x270)==0) return;
  if(v==0x6002) *(u16*)((u8*)arg0+0x1AA)=v&0xFFF;
  *(u8*)((u8*)arg0+6)=1;
  n=*(u8*)((u8*)arg0+0x2CD); *(s32*)((u8*)arg0+0x1E8)=((n*3*4+n)*4+n+1)*0x1000000+0x3F00;
  func_800334F8_ovl_01(arg0,arg1,arg2,0); func_80089D34_ovl_01(arg0,arg1,arg2,0x40);
  *(u8*)((u8*)arg0+0x25C)&=0xFD; s1[0xD]=3; s1[0xF]=3;
  *(u16*)(D_800C7650_ovl_01+0x18000+0x1A78)&=0xFFBF;
  *(s32*)arg0 &= ~4; s1[2]=0; goto clear;
 case 1:
  func_80065400_ovl_01(arg0,(u8*)a1+0x28,0,0);
  *(u16*)((u8*)arg0+0x66)+=func_80166CE4_ovl_26(arg0,*(s16*)((u8*)arg0+0x260),*(s16*)((u8*)arg0+0x262),6);
  func_800334F8_ovl_01(arg0,arg1,arg2,0); func_80089D34_ovl_01(arg0,arg1,arg2,0x40); func_80032B8C_ovl_01(arg0,0);
  if(!s1[0xB]) *(u8*)((u8*)arg0+6)=2;
  if(s1[0x15]>=0x79) { *(u8*)((u8*)arg0+5)=3; *(u8*)((u8*)arg0+6)=0; }
  goto done;
 case 2: *(u8*)((u8*)arg0+6)=3; *(u16*)((u8*)arg0+0x1F4)=0x5A;
 case 3:
  func_80065400_ovl_01(arg0,(u8*)a1+0x28,0,0);
  *(u16*)((u8*)arg0+0x66)+=func_80166CE4_ovl_26(arg0,*(s16*)((u8*)arg0+0x260),*(s16*)((u8*)arg0+0x262),6);
  s1[8]=0; func_800334F8_ovl_01(arg0,arg1,arg2,0); func_80089D34_ovl_01(arg0,arg1,arg2,0x40);
  v=*(u16*)((u8*)arg0+0x1F4)-1; *(u16*)((u8*)arg0+0x1F4)=v;
  if((s16)v==0) { *(u8*)((u8*)arg0+6)=1; goto clear; } goto done;
 default: goto done;
 }
clear: *(u8*)((u8*)arg0+0x2C9)=0;
done: func_801628C8_ovl_26(arg0);
}
