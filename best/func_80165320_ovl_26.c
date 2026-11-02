extern s32 func_80033634_ovl_01(void);extern s32 func_80164E08_ovl_26(void*,s32,s32);extern s32 func_80165290_ovl_26(void*,s32,s32);extern s32 func_80166B18_ovl_26(void*,u8,s32);extern u8 D_801671B0_ovl_26[];
void func_8016537C_ovl_26(void*p){func_80164E08_ovl_26(p,0,0);((s8*)p)[0x2c1]=(s8)0xc5;((s8*)p)[0x2c3]=func_80033634_ovl_01()&3;func_80165290_ovl_26(p,7,2);}
void func_801653C4_ovl_26(void*p,s32 a,s32 b){s32 x=func_80033634_ovl_01()&15;func_80166B18_ovl_26(p,D_801671B0_ovl_26[x],10);x=func_80033634_ovl_01()&15;func_80166B18_ovl_26(p,D_801671B0_ovl_26[x],10);((s8*)p)[0x2d8]=15;func_80164E08_ovl_26(p,a,b);}
void func_80165320_ovl_26(void*p,s32 a,s32 b){if(((u8*)p)[6]==0)func_80165290_ovl_26(p,2,6);func_80164E08_ovl_26(p,a,b);}
void func_80165460_ovl_26(void*p,s32 a,s32 b){if(((u8*)p)[6]==0){if(((u8*)p)[0x2db]==0){((u8*)p)[0x2db]=0x3c;func_80165290_ovl_26(p,2,6);}}func_80164E08_ovl_26(p,a,b);}
