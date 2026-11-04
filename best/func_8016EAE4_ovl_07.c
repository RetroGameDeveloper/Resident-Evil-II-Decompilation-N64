extern void func_8016E850_ovl_07(void),func_8016FAC4_ovl_07(void);extern void func_8004CDB8_ovl_01(s32),func_8004CD38_ovl_01(s32),func_8002751C_ovl_01(s32,s32),func_800278AC_ovl_01(void);extern s32 func_80026948_ovl_01(u16);extern void (*D_801717B0_ovl_07[])(void);extern u8 D_80171D29_ovl_07,D_80171D2A_ovl_07;extern s32 D_801719FC_ovl_07;extern u16 D_80171C28_ovl_07[];
void func_8016E800_ovl_07(void){func_8016E850_ovl_07();for(;;){D_801717B0_ovl_07[D_80171D29_ovl_07]();func_8016FAC4_ovl_07();func_8004CDB8_ovl_01(1);}}
void func_8016EAE4_ovl_07(void){s32 i=0x3c;do{i--;func_8002751C_ovl_01(2,1);func_8004CDB8_ovl_01(1);}while(i);func_800278AC_ovl_01();func_8002751C_ovl_01(2,1);func_8004CD38_ovl_01(1);}
void func_8017001C_ovl_07(u32 a,s8 b,s32 c){u8*p=(u8*)&D_801719FC_ovl_07;s32 i=0;do{if((a>>i)&1)p[0]=b;else if(c&255)p[0]=0;if(p[1]&32)p[0]=0;i++;p+=12;}while(i<31);}
void func_80171188_ovl_07(s32 a){s32 r=func_80026948_ovl_01(D_80171C28_ovl_07[(u8)a]);if(r==-1)D_80171D2A_ovl_07|=1;}
