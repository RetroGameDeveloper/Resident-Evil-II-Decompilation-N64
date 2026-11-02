extern s32 func_80033634_ovl_01();
extern void func_80089D34_ovl_01();
extern s16 D_80169814_ovl_29[];
void func_80164E14_ovl_29(void *arg0) {
 u8 state=*((u8*)arg0+6); s32 one=1;
 *((u8*)arg0+0x26f)|=0x80;
 switch(state) {
 case 0:
  *(s32*)((u8*)arg0+0x1e8)=0x10000000;
  func_80089D34_ovl_01(arg0,0,0,0x100);
  *(s16*)((u8*)arg0+0x1f6)=5;
  *((u8*)arg0+6)=one;
  *(u16*)((u8*)arg0+0x2b8)|=1;
  *(u16*)((u8*)arg0+0x1aa)&=0xbfff;
 case 1:
  if(--*(s16*)((u8*)arg0+0x1f6)==-1) {
   u32 r=func_80033634_ovl_01()&255; u32 rem=(r-(r/3)*3)&255;
   *(s32*)((u8*)arg0+0x28)=D_80169814_ovl_29[rem*2];
   *(s32*)((u8*)arg0+0x30)=D_80169814_ovl_29[rem*2+1];
   *(s16*)((u8*)arg0+0x1f6)=(func_80033634_ovl_01()&15)+15;
   *(s16*)((u8*)arg0+0x66)=(func_80033634_ovl_01()&255)<<4;
  }
  break;
 case 2:
  *(s16*)((u8*)arg0+0x1f2)=-1; *(u16*)((u8*)arg0+0x1aa)|=0x4000; break;
 case 3:
  *(s16*)((u8*)arg0+0x1f4)=10;
 }
}
