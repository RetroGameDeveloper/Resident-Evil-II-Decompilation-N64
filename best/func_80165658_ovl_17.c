extern u32 D_80167EE8_ovl_17[], D_80167E9C_ovl_17[];
extern void func_80165DC0_ovl_17(void);
extern s16 func_80074D94_ovl_01(s32,s32);
extern void func_80166834_ovl_17(void *);
extern void func_80035AAC_ovl_01(void *);
void func_801656FC_ovl_17(void*a){u8*p=a;u32 x=p[0x2c0];if(x)func_80165DC0_ovl_17();else ((void(*)(void))D_80167EE8_ovl_17[p[0x2be]])();}
void func_80165658_ovl_17(void*a,s32 b,s32 c){u8*p=a;u8 *handler; if(p[6]==0)p[0x2d8]=p[5];if(*(s16*)(p+0x1a8)==0)*(s16*)(p+0x1a8)=func_80074D94_ovl_01(*(s32*)(p+0x28),*(s32*)(p+0x30));handler=(u8*)D_80167E9C_ovl_17+(p[5]-1)*4;((void(*)(void*,s32,s32))*(u32*)handler)(a,b,c);func_80166834_ovl_17(a);func_80035AAC_ovl_01(a);}
