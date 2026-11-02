s32 func_801630BC_ovl_12(void *);
extern u8 D_800C7650_ovl_01[];
void func_80164BFC_ovl_12(void *arg0) {
 s32 start=*(s32*)((u8*)arg0+0x2C);
 s32 finish=start+*(s16*)((u8*)arg0+0x134);
 if(start >= finish) *(s32*)arg0 &= -9;
 if(func_801630BC_ovl_12(arg0)) {
  ((u8*)arg0)[5]=2;
  *(s16*)((u8*)arg0+6)=0;
  ((u8*)arg0)[0x2B9]=0;
  ((u8*)arg0)[0x2C8]=0;
  ((u8*)arg0)[0x26F]&=0x7f;
  ((u8*)arg0)[0x1A2]=*(volatile u8 *)(D_800C7650_ovl_01 + 0x1C22);
 }
}
