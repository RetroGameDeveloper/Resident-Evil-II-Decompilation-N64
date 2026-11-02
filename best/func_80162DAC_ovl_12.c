extern u8 D_800C7650_ovl_01[];
void func_80162DAC_ovl_12(void *arg0,s32 arg1,s32 arg2) {
 u16 x; u8 v;
 if(!*(u8*)((u8*)arg0+7)) {
  *(u8*)((u8*)arg0+7)=1;
  func_80162ED4_ovl_12(0x41,-0x118);
  v=*(u8*)((u8*)arg0+0x25C); *(u8*)((u8*)arg0+0x25C)=v|2;
  v=*(u8*)((u8*)arg0+0x1E8);
  if(v==12) *(u16*)((u8*)arg0+0x66)-=0x20;
  else if(v==13) *(u16*)((u8*)arg0+0x66)+=0x20;
 }
 func_80032B8C_ovl_01(arg0,0);
 func_80089D34_ovl_01(arg0,arg1,arg2,0x200);
 x=*(u16*)((u8*)arg0+0x1F4)-1; *(u16*)((u8*)arg0+0x1F4)=x;
 if(x==0) {
  *(u16*)((u8*)arg0+6)=0x100; *(u16*)((u8*)arg0+0x1E0)=0x118;
  *(u8*)((u8*)arg0+0x2B5)=1; *(u8*)((u8*)arg0+0x2BE)=1;
  *(u32*)arg0=(*(u32*)arg0|0x10000000)&0xFBFFFFFF;
  func_80077D48_ovl_01(3,arg0);
  *(u16*)(D_800C7650_ovl_01+0x19A78)|=0x20;
 }
}
