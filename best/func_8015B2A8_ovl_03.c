extern void func_800269B8_ovl_01(s32);
extern void func_8002751C_ovl_01(s32,s32);
extern void func_80027530_ovl_01(s32,s32,s32,s32);
extern void func_800275F8_ovl_01(s32,s32,s32,s32);
extern void func_800479F8_ovl_01(void *,void *,s32,s32);
extern void func_8015B204_ovl_03(void *);
extern void func_8015E168_ovl_03(void);
extern u8 D_800C7650_ovl_01[];
extern u8 D_800E9118_ovl_01[];
extern u8 D_80160B9C_ovl_03[];
extern u8 D_80161438_ovl_03[];
extern u8 D_801614A0_ovl_03[];
void func_8015B2A8_ovl_03(void) {
 u8 *g;
 func_800269B8_ovl_01(0);
 func_800479F8_ovl_01(D_801614A0_ovl_03,D_80161438_ovl_03,0x14d7,0);
 D_800E9118_ovl_01[0xcb]=1; D_800E9118_ovl_01[0xe]=0;
 *(s16 *)(D_80160B9C_ovl_03+0x16)=-0x2e;
 D_80160B9C_ovl_03[5]=0; D_80160B9C_ovl_03[6]=0; D_80160B9C_ovl_03[7]=0; D_80160B9C_ovl_03[8]=1;
 D_80160B9C_ovl_03[1]=0; D_80160B9C_ovl_03[2]=0; D_80160B9C_ovl_03[3]=0; D_80160B9C_ovl_03[4]=0;
 *(s16 *)(D_80160B9C_ovl_03+0xe)=0; D_80160B9C_ovl_03[0xc]=0; D_80160B9C_ovl_03[0xd]=0;
 *(s16 *)(D_80160B9C_ovl_03+0x14)=0;
 g=D_800C7650_ovl_01+0x18000;
 if (*(s32 *)(g+0x1a3c)&2) {
   *(s32 *)(g+0x1a3c)&=~2; *(s32 *)(D_80160B9C_ovl_03+0x18)=-1;
   func_8015B204_ovl_03(g); func_80027530_ovl_01(0x100,0,7,1); func_800275F8_ovl_01(0,0x7f80,0,0);
   *(s16 *)(D_80160B9C_ovl_03+0x16)=0xf0; D_80160B9C_ovl_03[1]=5;
 } else {
   *(s32 *)(D_80160B9C_ovl_03+0x18)=-1;
   func_8002751C_ovl_01(0,0); func_8015B204_ovl_03(0); func_80027530_ovl_01(0x200,0,7,1); func_800275F8_ovl_01(0,0x7c00,0,0);
   *(s16 *)(D_80160B9C_ovl_03+0x12)=-0x400; *(s16 *)(D_80160B9C_ovl_03+0x10)=0x7c00; D_80160B9C_ovl_03[1]=1;
 }
 func_8015E168_ovl_03(); D_80160B9C_ovl_03[0]++;
}
