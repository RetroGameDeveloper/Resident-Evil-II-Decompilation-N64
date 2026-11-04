void func_801650D8_ovl_31(void *p,s32 a,s32 b) {
 u8 state=*(u8*)((u8*)p+6);
 switch(state) {
 case 0: {
  u16 flags=*(u16*)((u8*)p+0x2b6)&0xff43;
  *(s32*)((u8*)p+0x1e8)=0x0f020300; *(u8*)((u8*)p+6)=1; *(u16*)((u8*)p+0x2b6)=flags;
  if(*(s16*)((u8*)p+0x25e)==-0xe10) {
   *(u16*)((u8*)p+0x2b6)=flags|0x20;
   *(s16*)((u8*)p+0x136)=500; *(s16*)((u8*)p+0x138)=500; *(s16*)((u8*)p+0x12c)=500; *(s16*)((u8*)p+0x12e)=500;
   func_80077D48_ovl_01(4,p,flags|0x20);
  } else func_80077D48_ovl_01(3,p,flags);
  func_80052C9C_ovl_01(8,100,0);
 }
 case 1:
  if(func_80089D34_ovl_01(p,a,b,0x400)) *(u8*)((u8*)p+6)=2;
  break;
 case 2:
  *(s32*)((u8*)p+4)=0x01030000; *(u8*)((u8*)p+0x2ce)=90;
  if((*(u16*)((u8*)p+0x2b6)&2) && !(func_80033634_ovl_01(0)&3)) *(s32*)((u8*)p+4)=0x010a0000;
 }
}
