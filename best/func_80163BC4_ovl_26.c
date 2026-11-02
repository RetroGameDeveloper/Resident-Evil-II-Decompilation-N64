extern s32 D_800C7650_ovl_01[]; extern s32 D_800E10D0_ovl_01[];
void func_80052C00_ovl_01(s32,s32);void func_80052C9C_ovl_01(s32,s32,s32);void func_80052D40_ovl_01(s32,s32,s32,s32);
s32 func_80089D34_ovl_01(void*,s32,s32,s32);s32 func_800331E8_ovl_01(void*,s32,s32,s32,s32);
void func_80163BC4_ovl_26(void *p,s32 x,s32 y) {
 s32 v; u8 st=((u8*)p)[7]; s32 one=1;
 if(st==0) {
  *(u32*)((u8*)p+0x1E8)=0x08003F00;
  ((u8*)p)[7]=one;((u8*)p)[0x2B8]=0;
  *(u16*)((u8*)p+0x66)+=((u8*)p)[0x2CD]<<11;
  func_800331E8_ovl_01(&D_800E10D0_ovl_01[0],x,y,0,0);
  *(u32*)((u8*)D_800C7650_ovl_01+0x18000+0x1A3C)|=0x04000100;
  func_80052C00_ovl_01(3,0);func_80052C00_ovl_01(4,8);func_80052C00_ovl_01(3,0x14);
  func_80052C9C_ovl_01(0x14,0xC8,0);func_80052D40_ovl_01(0x1E,0xC8,0x32,0x14);
 }
 if(st==1){v=func_80089D34_ovl_01(p,x,y,0x40);if(v){((u8*)p)[7]=2;*(u32*)((u8*)p+0x1E8)=0x09003F00;}}
 else if(st==2){v=func_80089D34_ovl_01(p,x,y,0x40);if(v)*(u16*)((u8*)p+6)=0x200;}
}
