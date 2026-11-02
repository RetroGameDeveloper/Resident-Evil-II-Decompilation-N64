typedef struct { u8 pad[0x2D6]; } Obj;
extern s32 func_801656FC_ovl_17(void*,s32,s32);
extern s32 func_80166FBC_ovl_17(void*,s32,s32);
extern s32 func_80167948_ovl_17(s32);
void func_801664E4_ovl_17(Obj *p,s32 a1,s32 a2) {
 u8 state=*((u8*)p+6);
 if(state==0 && *((u8*)p+0x2C0)==0) {
  u8 *base=*(u8**)((u8*)p+0x234);
  u32 x=*(u32*)(base+0x1BE8);
  *(u32*)(base+0x1BE8)=x|16;
  base+=0x1BE8;
  *(s16*)(base+0x136)=90; *(s16*)(base+0x130)=0; *(s16*)(base+0x132)=0;
  *(u8*)(base+0x134)=100; *(u8*)(base+0x135)=100;
  func_80167948_ovl_17(0x101F3F);
  func_80166FBC_ovl_17(p,19,7); func_80166FBC_ovl_17(p,0,6); func_80166FBC_ovl_17(p,1,6);
  *((u8*)p+0x2D5)=1;
 }
 func_801656FC_ovl_17(p,a1,a2);
}
