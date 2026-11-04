s32 func_80162CE0_ovl_15(void*); s32 func_80036764_ovl_01(void*,void*); extern s16 D_800C7650_ovl_01[];
void func_80162C18_ovl_15(void *arg0) {
 u8 state; u16 temp; s32 v0;
 state=*(u8*)((char*)arg0+6);
 switch(state) {
 case 0:
  func_80162CE0_ovl_15(arg0);
  *(u8*)((char*)arg0+0x2ca)=0xff;
  func_80036764_ovl_01(arg0,(char*)arg0); 
  temp=*(u16*)((char*)arg0+0x2b4)|0x10;
  *(u16*)((char*)arg0+0x2b4)=temp;
  if(*(u8*)((char*)arg0+0x1e9)>=0x43) *(u8*)((char*)arg0+6)=state+1;
  break;
 case 1:
  temp=*(u16*)((char*)arg0+0x2b4)|2;
  temp&=0xffef;
  *(u16*)((char*)arg0+0x2b4)=temp;
  if(*(s16*)((char*)D_800C7650_ovl_01+0x1c72+0x18000)<0) v0=0x01060000;
  else {*(u16*)((char*)arg0+0x2b4)=temp|4;v0=0x01040000;}
  *(s32*)((char*)arg0+4)=v0;
 }
}
