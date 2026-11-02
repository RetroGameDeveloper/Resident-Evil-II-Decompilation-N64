extern u8 D_80160B9C_ovl_03;
extern s32 func_8015E2EC_ovl_03(u8,u8,s32,s32); extern s32 func_8015F210_ovl_03(u8); extern void func_8015FB30_ovl_03(void);
void func_8015B9F8_ovl_03(void){u8 *p=&D_80160B9C_ovl_03;u8 a; s32 c=0;func_8015FB30_ovl_03();if(p[5]==1){a=p[6];func_8015F210_ovl_03(a);func_8015E2EC_ovl_03(1,1,0x1b,0);}else{a=p[6];func_8015E2EC_ovl_03(a,a,0,0);}}
extern u8 D_800E91E3_ovl_01; extern u8 D_80160B9C_ovl_03; extern u8 D_800C7650_ovl_01[];
extern s32 func_8004CCD8_ovl_01(s32,s32);extern s32 func_8004CDB8_ovl_01(s32);extern s32 func_8015B204_ovl_03(s32);
void func_8015D664_ovl_03(void){u32 *p=(u32*)(D_800C7650_ovl_01+0x19a3c);*p|=0x08000000;func_8004CCD8_ovl_01(1,4);func_8004CDB8_ovl_01(1);D_800E91E3_ovl_01=1;*p&=0xf7ffffff;func_8015B204_ovl_03(0xf7ffffff);D_80160B9C_ovl_03=1;}
extern u8 D_80160B9C_ovl_03; extern u8 D_800DF650_ovl_01[]; extern s32 func_800439B8_ovl_01(s32,void*,s32,s32);
void func_8015FAA0_ovl_03(s8 x){s32 i=0;u8 *p=&D_80160B9C_ovl_03;u8 *q=p+0x1c;s32 v;do{void *a=q;q+=0x28;p[0x1e]=x;p[0x1d]=x;p[0x1c]=x;p+=0x28;i++;v=func_800439B8_ovl_01(*(s32*)(D_800DF650_ovl_01+0x204),a,0,0);*(s32*)(D_800DF650_ovl_01+0x204)=v;}while(i==0);}
extern u8 D_80160B9C_ovl_03; extern s32 func_8002751C_ovl_01(s32,s32);extern void func_8015FCCC_ovl_03(void);
void func_8015B568_ovl_03(void){u8 *p=&D_80160B9C_ovl_03;u8 v=p[2];if(v==1){p[1]=1;p[2]=0;}else if(v<2){if(v==0){func_8002751C_ovl_01(0,0);*(s16*)(p+0x14)=0x36;*(s32*)(p+0x18)=0x16;*(s16*)(p+0x16)=0;p[2]=1;p[1]=1;p[2]=0;}}else if(v==2){p[1]=1;p[2]=0;}func_8015FCCC_ovl_03();}
