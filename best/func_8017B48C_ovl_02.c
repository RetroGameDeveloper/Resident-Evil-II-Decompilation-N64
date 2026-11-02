extern s32 func_8017FFF0_ovl_02(s32);
extern s32 func_80004EE0(s32,s32,s32,s32,s32,s32);
extern s32 func_80007320(s32,s32);
extern s32 func_80004C9C(void);
extern s32 D_80184AA0_ovl_02,D_80184AA4_ovl_02,D_80184AA8_ovl_02,D_80184AAC_ovl_02;
extern s32 func_80184A40_ovl_02;
void func_8017B390_ovl_02(void){D_80184AA0_ovl_02=0;D_80184AA8_ovl_02=0;D_80184AA4_ovl_02=func_8017FFF0_ovl_02(0x1000);}
void func_8017B3CC_ovl_02(s32 arg0){if(D_80184AA8_ovl_02==0){func_80007320(D_80184AA4_ovl_02,0x1000);func_80004EE0(arg0,D_80184AA4_ovl_02,D_80184AA0_ovl_02,0x1000,0,(s32)&func_80184A40_ovl_02);D_80184AA8_ovl_02=0x1000;D_80184AA0_ovl_02+=0x1000;}}
s32 func_8017B454_ovl_02(s32 arg0){D_80184AAC_ovl_02=func_80004C9C();func_8017B3CC_ovl_02(arg0);return arg0;}
s32 func_8017B48C_ovl_02(s32 arg0,s32 *arg1,s32 arg2){s32 n=arg2;if(D_80184AA8_ovl_02==0)func_8017B3CC_ovl_02(arg0);*arg1=(D_80184AA4_ovl_02+0x1000)-D_80184AA8_ovl_02;D_80184AA8_ovl_02-=n;if((u32)D_80184AAC_ovl_02<(u32)n)n=D_80184AAC_ovl_02;D_80184AAC_ovl_02-=n;return n;}
