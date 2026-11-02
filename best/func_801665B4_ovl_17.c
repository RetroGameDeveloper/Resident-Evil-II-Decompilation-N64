extern s32 func_801656FC_ovl_17(void*,s32,s32); extern s32 func_80166FBC_ovl_17(void*,s32,s32); extern s32 func_80167948_ovl_17(void*,s32);
void func_801665B4_ovl_17(void*p,s32 a1,s32 a2){if(!*((u8*)p+0x2C0)){func_80167948_ovl_17(p,0x3F3F3F);*((u8*)p+0x2D7)=0x1E;func_80166FBC_ovl_17(p,0x13,0xA);func_80166FBC_ovl_17(p,0,0xA);}func_801656FC_ovl_17(p,a1,a2);*((u8*)p+5)=2;}
extern u8 D_800C7650_ovl_01[]; extern u8 D_800E10D0_ovl_01[];
s32 func_80166D98_ovl_17(void*p,s32 a1,s32 a2){u8 *base; s32 value,diff; if(*((u8*)p+0x2D3)){base=D_800C7650_ovl_01+0x18000; base=*(u8**)(base+0x1D3C);}else base=D_800E10D0_ovl_01; value=((s32(*)(s32))0x8006A8B0)((s16)a2); if(a2&1){diff=*(s32*)(base+0x30)-value; if(diff<0)diff=-diff;}else{diff=*(s32*)(base+0x28)-value; if(diff<0)diff=-diff;} return diff<0xBB8;}
