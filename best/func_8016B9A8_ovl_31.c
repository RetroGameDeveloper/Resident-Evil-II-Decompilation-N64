extern s8 D_8016C32C_ovl_31; extern s8 D_8016C600_ovl_31; s32 func_800362C0_ovl_01(s32,s32,s32); s32 func_80036764_ovl_01(void*,s32); s32 func_80036038_ovl_01(s32,s32,s32);
void func_8016BA20_ovl_31(s32 a,s8 b,s8 c){s8 *p=&D_8016C32C_ovl_31+(a&255)*28;p[2]=b;p[3]=c;}
void func_8016B9D4_ovl_31(void*a){s32 p=*(s32*)((char*)a+0x234)+0x2630;func_800362C0_ovl_01(0,p,&D_8016C600_ovl_31);func_80036764_ovl_01(a,p);}
void func_8016B9A8_ovl_31(void*a,s32 b){func_80036038_ovl_01(b,*(s32*)((char*)a+0x234)+0x2630,&D_8016C600_ovl_31);}
