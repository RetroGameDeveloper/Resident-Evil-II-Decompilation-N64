s32 func_80033634_ovl_01(void); s32 func_80165AB8_ovl_12(void*); s32 func_80165D54_ovl_12(void*); s32 func_80166900_ovl_12(void*,s32,s32);
void func_80165F98_ovl_12(void *arg0) {
 s32 temp_a1; u32 *base; s32 offset;
 if(*(u8*)((char*)arg0+5)==9 && *(u8*)((char*)arg0+0x26e)>=3) {func_80165AB8_ovl_12(arg0);}
 else {
  *(u8*)((char*)arg0+0x2cd)=1;func_80165AB8_ovl_12(arg0);func_80165D54_ovl_12(arg0);
  if(*(u8*)((char*)arg0+5)==9) {
   *(u8*)((char*)arg0+0x2bb)=1;
   temp_a1=func_80033634_ovl_01()&15;
   offset=temp_a1*0x178;
   base=*(u32**)((char*)arg0+0x234);
   if((*(u32*)((char*)base+offset)&0x4a)==0) func_80166900_ovl_12(arg0,temp_a1,7);
  }
  *(u8*)((char*)arg0+0x2bb)=0x12;
 }
}
