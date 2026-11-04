typedef void (*F0)(void *); extern F0 func_80166DD8_ovl_20[]; s32 func_80033634_ovl_01(void); s32 func_80166900_ovl_12(void *,s32,s32);
void func_80165280_ovl_12(void*p){func_80166DD8_ovl_20[9+((u8*)p)[6]](p);func_80166900_ovl_12(p,func_80033634_ovl_01()&15,0);func_80166900_ovl_12(p,func_80033634_ovl_01()&15,0);func_80166900_ovl_12(p,func_80033634_ovl_01()&15,5);}
s32 func_80032B8C_ovl_01(void*,s32);s32 func_80164E94_ovl_12(void*,s32,s32);
void func_80165444_ovl_12(void*p,s32 a1,s32 a2){s32 x;if(!((u8*)p)[7]){((u8*)p)[7]=1;x=func_80033634_ovl_01();func_80032B8C_ovl_01(p,*(s16*)((u8*)p+0x1f4)+((x&255)<<1)-256);x=func_80033634_ovl_01();*(u16*)((u8*)p+0x66)+=(x&255)+0xff80;}func_80164E94_ovl_12(p,a1,a2);}
s32 func_80033634_ovl_01(void);s32 func_80032B8C_ovl_01(void*,s32);s32 func_80164FB0_ovl_12(void*,s32,s32);
void func_801655BC_ovl_12(void*p,s32 a1,s32 a2){s32 x;if(!*(s8*)((u8*)p+0x206)){((u8*)p)[0x206]=1;if(((u8*)p)[5]!=12){*(s16*)((u8*)p+0x1e0)=40;func_80032B8C_ovl_01(p,*(s16*)((u8*)p+0x1f4));x=func_80033634_ovl_01();*(u16*)((u8*)p+0x66)+=(x&255)+0xff80;}}func_80164FB0_ovl_12(p,a1,a2);if(((u8*)p)[7]>=2)((u8*)p)[0x2bf]&=0xbf;}
s32 func_80164CDC_ovl_12(void*,s32,s32);s32 func_80033634_ovl_01(void);s32 func_80166900_ovl_12(void*,s32,s32);
void func_8016566C_ovl_12(void*p,s32 a1,s32 a2){u32 n=2-((u8*)p)[0x26e]/3;u32 i;((u8*)p)[0x2bb]=n;i=0;if(n){do{i++;func_80166900_ovl_12(p,func_80033634_ovl_01()&15,8);}while(i<((u8*)p)[0x2bb]);}((u8*)p)[5]=1;func_80164CDC_ovl_12(p,a1,a2);}
