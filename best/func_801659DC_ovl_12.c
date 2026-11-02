extern u32 D_80166E20_ovl_12[],D_80166E6C_ovl_12[],D_80166EB8_ovl_12[];
void func_80035AAC_ovl_01(void);
s32 func_80164D10_ovl_12(void*,s32,s32);
void func_80077D48_ovl_01(s32,void*);
void func_80165A30_ovl_12(void*a){u8 i=*((u8*)a+5)-1;u32*t=D_80166E20_ovl_12;((void(*)(void))(*(volatile u32*)((u8*)t+i*4)))();}
void func_80165A68_ovl_12(void*a){u8* p=a;u32*t;u8 i;if(p[6]){t=D_80166EB8_ovl_12;i=p[6];}else{t=D_80166E6C_ovl_12;i=p[5]-1;}((void(*)(void))(*(t+i)))();}
void func_801659DC_ovl_12(void*a,s32 b){u8*p=a; if(!b){*(s16*)(p+0x134)=-500;*(s16*)(p+0x13a)=500;*(u32*)p=(*(u32*)p&0xe7ffffff)|0x04000000;}else{*(s16*)(p+0x134)=-1000;*(s16*)(p+0x13a)=1000;*(u32*)p|=0x0c000000;}}
void func_80165AB8_ovl_12(void*a,s32 b,s32 c){u8*p=a;u32 t;func_80035AAC_ovl_01();t=func_80164D10_ovl_12(a,b,c);if(!p[0x2cd])func_80077D48_ovl_01(7,a);if((t&0x3f)==2)*(u16*)(p+0x1e0)=0;}
