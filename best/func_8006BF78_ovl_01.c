extern s32 func_800072E0(void);extern void func_80007300(s32);extern void func_8006BEEC_ovl_01(s32);extern u8 D_80112908_ovl_01[];extern s32 D_80139E00;
void func_8006BF78_ovl_01(s32 arg0){s32 h=func_800072E0();if(D_80112908_ovl_01[1]==2){if((~D_80139E00)&0x80){D_80112908_ovl_01[1]=3;}else D_80139E00|=0x100;func_8006BEEC_ovl_01(arg0);}func_80007300(h);}
extern s32 func_8000CB60(void*,s32,s32);extern u8 D_80112908_ovl_01[];extern s32 D_80139E00;extern u8 D_80139ED0[];
void func_8006BFF4_ovl_01(void){s32 h=func_800072E0();if(D_80112908_ovl_01[1]!=3){if(D_80139E00&0x100){D_80112908_ovl_01[1]=3;D_80139E00&=~0x100;}func_80007300(h);return;}func_80007300(h);func_8000CB60(D_80139ED0,0,0);}
extern s32 D_80112718_ovl_01;extern s8 D_8011271C_ovl_01;void func_8006C074_ovl_01(s32 a,s32 b){D_80112718_ovl_01=a;if(b)D_8011271C_ovl_01=5;else D_8011271C_ovl_01=4;}
s32 func_80036764_ovl_01_510_24(void*a,s32 b,s32 c,s32 d){s32 old,t;old=*(s32*)a;t=(old-b)&0x80000000;if(t)*(s32*)a=old+(s16)c;else *(s32*)a=old-(s16)c;if(t!=((*(s32*)a-b)&0x80000000)){*(s32*)a=b;return 1;}return 0;}
