extern s32 func_8000F020(void);extern s32 func_8017D0D8_ovl_02(void),func_8017BE7C_ovl_02(void),func_8017D1DC_ovl_02(void),func_8017D384_ovl_02(void),func_8017D3E0_ovl_02(void),func_8017BB30_ovl_02(s32),func_8017BB68_ovl_02(s32);extern void func_8017D194_ovl_02(void);
extern s32 D_80185790_ovl_02;extern s32 D_801857A4_ovl_02,D_801861DC_ovl_02;extern s32 *D_80186C14_ovl_02;
void func_8017B520_ovl_02(u32 *p,u32 n,s32 val){s32 i;n>>=3;for(i=0;i<n;i++){p[i*2]=0;p[i*2+1]=val;}func_8000F020();}
s32 func_8017D070_ovl_02(void){s32 x;D_80186C14_ovl_02=&D_801857A4_ovl_02;x=func_8017D0D8_ovl_02();if(D_80185790_ovl_02){D_80186C14_ovl_02=&D_801861DC_ovl_02;func_8017D0D8_ovl_02();D_80186C14_ovl_02=&D_801857A4_ovl_02;}return x;}
s32 func_8017D0D8_ovl_02(void){s32 n;for(;;){func_8017D194_ovl_02();n=func_8017BE7C_ovl_02();if(n==0x1b3){func_8017D1DC_ovl_02();continue;}if(n<0x1b4){if(n==0x100){func_8017D3E0_ovl_02();return 1;}continue;}if(n==0x1b7)return 0;if(n==0x1b8){func_8017D384_ovl_02();continue;}}}
void func_8017D194_ovl_02(void){s32 a=(*(s32*)((char*)D_80186C14_ovl_02+0x10))&7;do{func_8017BB68_ovl_02(a);a=8;}while(func_8017BB30_ovl_02(0x18)!=1);}
