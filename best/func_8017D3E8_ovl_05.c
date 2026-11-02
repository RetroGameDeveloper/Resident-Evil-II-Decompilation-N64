extern s32 func_8017D920_ovl_05(s32 *);
extern u8 D_800C7650_ovl_01[];
extern u8 D_8017DDA2_ovl_05;
extern u8 D_8017DECC_ovl_05[];
extern u32 D_8017E4A4_ovl_05[];
extern u8 D_8017E53D_ovl_05;
extern u8 D_8017E544_ovl_05[];
extern u8 D_8017E54C_ovl_05;
void func_8017D3E8_ovl_05(void) {
 s32 i; s8 *p;
 switch(D_8017E54C_ovl_05) {
 case 0:
  D_8017DECC_ovl_05[0x28]=0x40; D_8017DECC_ovl_05[0x30]=0x40;
  D_8017DECC_ovl_05[0x38]=0x40; D_8017DECC_ovl_05[0x40]=0x40;
  p=(s8*)D_8017DECC_ovl_05+((D_800C7650_ovl_01[0x2148e]+5)*8); *p=0x41;
  D_8017DECC_ovl_05[0x48]=0x40; D_8017DECC_ovl_05[0x50]=0x40;
  p=(s8*)D_8017DECC_ovl_05+((D_800C7650_ovl_01[0x18539]+9)*8); *p=0x41;
  break;
 case 1:
  i=0x12;
  do {
   i--;
   p=(s8*)D_8017DECC_ovl_05+((D_8017DDA2_ovl_05+8+i)*8);
   *p=0;
   *p=(D_8017E4A4_ovl_05[D_8017E53D_ovl_05]>>i)&1;
  } while(i!=0);
  break;
 case 2:
  if(D_8017E544_ovl_05[2]==0) {
   if(D_800C7650_ovl_01[0x18539]!=0) D_8017E544_ovl_05[2]=4;
   else D_8017E544_ovl_05[2]=0;
  }
  func_8017D920_ovl_05((s32*)D_8017E544_ovl_05);
 }
}
