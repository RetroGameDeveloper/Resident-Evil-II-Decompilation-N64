extern s32 func_80027530_ovl_01(s32,s32,s32,s32);
extern s32 func_800276B4_ovl_01(s32);
extern s32 func_8006C0A0_ovl_01(s32,s8*,u8*);
extern u8 D_8017E53F_ovl_05; extern s8 D_8017E549_ovl_05;
void func_8017B4F4_ovl_05(void) {
 if (func_800276B4_ovl_01(0)) {
  func_80027530_ovl_01(0x200,0,7,1);
  D_8017E549_ovl_05=1; D_8017E53F_ovl_05 &= 0xF7;
  func_8006C0A0_ovl_01(1,&D_8017E549_ovl_05,&D_8017E53F_ovl_05);
 }
}
extern u8 D_8017E54C_ovl_05; extern u8 D_8017E544_ovl_05[];
extern s16 D_8017E274_ovl_05[];
void func_8017B390_ovl_05(void) {
 s16 *p=D_8017E274_ovl_05;
 p[0x212/2]=0;p[0x186/2]=0;p[0xFA/2]=0;p[0x6E/2]=0;
 p[0x226/2]=0;p[0x19A/2]=0;p[0x10E/2]=0;p[0x82/2]=0;
 if (D_8017E544_ovl_05[D_8017E54C_ovl_05] == 4) {
 p[0x1AE/2]=0;p[0x122/2]=0;p[0x96/2]=0;p[0xA/2]=0;
 p[0x1FE/2]=0x20;p[0x172/2]=0x20;p[0xE6/2]=0x20;p[0x5A/2]=0x20;
 } else {
 p[0x1AE/2]=0x20;p[0x122/2]=0x20;p[0x96/2]=0x20;p[0xA/2]=0x20;
 p[0x1FE/2]=0;p[0x172/2]=0;p[0xE6/2]=0;p[0x5A/2]=0;
 }
}
extern u8 D_8017E53F_ovl_05; extern u8 D_8017E54C_ovl_05;
extern u32 D_800C7650_ovl_01[];
extern s32 D_8017E4C8_ovl_05[];
extern s32 func_80077B0C_ovl_01(s32,s32);
void func_8017BB18_ovl_05(void) {
 if (!(D_8017E53F_ovl_05 & 0xC)) {
  if (D_800C7650_ovl_01[0x18000/4+0x25E/4] & 0x100) {
   func_80077B0C_ovl_01(0x04050000,0); D_8017E549_ovl_05=2;
  } else ((void (*)(s32))D_8017E4C8_ovl_05[D_8017E54C_ovl_05])(0x04050000);
 }
}
extern s32 func_800439B8_ovl_01(s32,void*,s32,s32);
extern u8 D_8017E53D_ovl_05; extern u8 D_800DF650_ovl_01[];
void func_8017BF1C_ovl_05(void) {
 s32 i=7; void *p=(u8*)D_8017E274_ovl_05 + D_8017E53D_ovl_05*0x8C;
 do { D_800DF650_ovl_01[0x204/4]=func_800439B8_ovl_01(*(s32*)&D_800DF650_ovl_01[0x204],p,0,0); p=(u8*)p+0x14; } while (--i);
}
