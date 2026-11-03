extern s32 func_80033634_ovl_01(void *); extern s32 func_80089D34_ovl_01(void *,s32,s32,s32); extern s32 func_801678B8_ovl_17(void *);
void func_80162580_ovl_17(void *p,s32 a1,s32 a2) {
 u8 st=*((u8*)p+6);
 switch(st) {
 case 0:
  *(s32*)((u8*)p+0x1e8)=0x03000300;
  *((u8*)p+6)=1;
  *(u16*)((u8*)p+0x1f4)=((func_80033634_ovl_01(p)&0xff)+10)&0x3f;
  *(s16*)((u8*)p+0x1f6)=24;
  if(func_80033634_ovl_01(p)&1) *(s16*)((u8*)p+0x1f6)=-24;
  if(*((u8*)p+0x2be)) { *(s16*)((u8*)p+0x1f6)=-*(s16*)((u8*)p+0x1f6); }
 case 1:
  *(u16*)((u8*)p+0x66)+=*(u16*)((u8*)p+0x1f6);
  func_80089D34_ovl_01(p,a1,a2,0x400);
  func_801678B8_ovl_17(p);
  *(u16*)((u8*)p+0x1f4)=*(u16*)((u8*)p+0x1f4)-1;
  if(*(s16*)((u8*)p+0x1f4)==-1) *(s32*)((u8*)p+4)=0x01000000;
 }
}
