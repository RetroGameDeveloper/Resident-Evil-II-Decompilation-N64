extern s32 func_800334F8_ovl_01(void*,s32,s32,s32);
extern s32 func_80089D34_ovl_01(void*,s32,s32,s32);
extern s32 func_80032B8C_ovl_01(void*,s32);
extern void D_80033678(void*);

void func_80165640_ovl_26(void*p,s32 a,s32 b){
  func_800334F8_ovl_01(p,a,b,0);
  if(func_80089D34_ovl_01(p,a,b,0x40)) *(u32*)((u8*)p+4)=0x07000000;
  func_80032B8C_ovl_01(p,0);
  D_80033678(p);
  if(!((u8*)p)[0x2d9]){ ((u8*)p)[0x2c1]=6; ((u8*)p)[0x2c3]=3; }
  if((*(u32*)*(u32**)((u8*)p+0x214))&0x10000){ ((u8*)p)[0x2c1]=0x41; ((u8*)p)[0x2c3]=3; }
}
