extern s32 func_80032F24_ovl_01(void *,s32,s32);
extern s32 func_80033174_ovl_01(void *,void *);
extern void func_80165184_ovl_15(s32);
extern void func_8016560C_ovl_15(void *);
extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10D0_ovl_01[];
extern s32 D_800E10D4_ovl_01;
void func_80162F38_ovl_15(void *arg0) {
 s32 a0,a1;
 u8 *g=D_800C7650_ovl_01+0x18000;
 if(*(u16*)(g+0x1a8e)!=0 && *(u8*)(g+0x1cef)==0) {
  *(void**)(g+0x1cd0)=arg0;
  D_800E10D4_ovl_01=0x05020000;
  if(func_80033174_ovl_01(arg0,D_800E10D0_ovl_01)&0xff)
   *(u8*)(g+0x1a85)=*(u8*)(g+0x1a85)+1;
  if(*(s32*)((u8*)arg0+0x30)>=-0x2327) {
   a1=0;
   if(!(func_80033174_ovl_01(arg0,D_800E10D0_ovl_01)&0xff)) a1=0x800;
  } else if(*(s32*)((u8*)arg0+0x28)>=-0x3cef) {
   a1=0x800;
   if(!(func_80033174_ovl_01(arg0,D_800E10D0_ovl_01)&0xff)) a1=0;
  } else {
   a1=0xc00;
   if(!(func_80033174_ovl_01(arg0,D_800E10D0_ovl_01)&0xff)) a1=0x400;
  }
  func_80032F24_ovl_01(D_800E10D0_ovl_01,a1,0x600);
  a0=0x3c; if(*(u16*)((u8*)arg0+0x2b4)&0x20)a0=0x1e;
  func_80165184_ovl_15(a0);
  *(u8*)((u8*)arg0+0x2d4)=0x46; *(u8*)((u8*)arg0+0x2cd)=0;
  func_8016560C_ovl_15(arg0);
 }
}
