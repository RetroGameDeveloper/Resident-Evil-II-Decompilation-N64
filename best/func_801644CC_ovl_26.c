s32 func_80089D34_ovl_01(void *,s32); s32 func_801625F8_ovl_26(void *);
void func_801644CC_ovl_26(void *arg0) {
 u8 *p=(u8*)arg0+0x2B4; u8 state=*((u8*)arg0+6); u16 v;
 switch(state) {
 case 0:
  *((u8*)arg0+0x25C)|=2; *((u8*)arg0+6)=1; *(u32*)arg0|=0x804;
  *(u32*)((u8*)arg0+0x1E8)=((((u8*)arg0)[0x2CD]*13+12)<<24)+0x760000;
  func_80089D34_ovl_01(arg0,0x100);
  p[0xD]=9;p[0xF]=3;*(u16*)(p+6)=0x60;
  p[4]=1;p[0x25]=1;
  *(u16*)((u8*)arg0+0x212)=0x1000;
  break;
 case 1:
  v=*(u16*)((u8*)arg0+0x212)+4; *(u16*)((u8*)arg0+0x212)=v;
  if((s16)v>=0x1101){*((u8*)arg0+6)=2;*(u16*)((u8*)arg0+0x212)=0x1100;}
  break;
 case 2:
  v=*(u16*)((u8*)arg0+0x212)-4;*(u16*)((u8*)arg0+0x212)=v;
  if((s16)v<0x1001){*((u8*)arg0+6)=1;*(u16*)((u8*)arg0+0x212)=0x1000;}
  break;
 }
 p[0x22]=1;p[0x23]=1;func_801625F8_ovl_26(arg0);
}
