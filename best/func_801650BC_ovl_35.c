extern void (*D_80166764_ovl_35)(void);
extern void (*D_80166700_ovl_35[])(void);
extern void (*D_80166728_ovl_35[])(void *,s32,s32);
extern void func_80035AAC_ovl_01(void *);
extern void func_80077D48_ovl_01(s32,void *);
extern s32 func_80089D34_ovl_01(void *,s32,s32,s32);
extern void func_801661F0_ovl_35(s32,u8);
extern void func_80166520_ovl_35(void *,s32);
extern void func_8016472C_ovl_35(void *,s32,s32);
extern void func_80165248_ovl_35(void *,s32,s32);
extern void func_80164604_ovl_35(void);
void func_801650BC_ovl_35(void *p) { u8 x=((u8*)p)[5]; ((s16*)((u8*)p+0x64))[0]=0; ((void (*)(void))((u32*)D_80166764_ovl_35)[x-1])(); func_80035AAC_ovl_01(p); }
void func_80165140_ovl_35(void *p,s32 a,s32 b) { u8 x=((u8*)p)[5]; u8 y=((u8*)D_80166700_ovl_35)[x-1]; func_801661F0_ovl_35(0,y); func_80077D48_ovl_01(6,p); if (!((u8*)p)[0x2bc]) { ((s16*)((u8*)p+6))[0]=0x200; func_80165248_ovl_35(p,a,b); } else { if (((u8*)p)[0x2c5]) { *(s16*)((u8*)p+0x68)=0; func_80166520_ovl_35(p,0); } *(s16*)((u8*)p+6)=0x100; func_8016472C_ovl_35(p,a,b); } }
void func_80165248_ovl_35(void *p,s32 a,s32 b) { if (!((u8*)p)[7]) { ((u8*)p)[7]=1; *(u32*)((u8*)p+0x1e8)=0x07000f00; *(s32*)((u8*)p+0x2c)=*(s16*)((u8*)p+0x25e); } if (func_80089D34_ovl_01(p,a,b,0x100)) *(u32*)((u8*)p+4)=0x07000000; }
void func_80164E04_ovl_35(void *p,s32 a,s32 b) { if (!((u8*)p)[6]) { func_80164604_ovl_35(); ((u8*)p)[0x2cf]=0x14; } else { ((void (*)(void*,s32,s32))D_80166728_ovl_35[((u8*)p)[6]])(p,a,b); func_80089D34_ovl_01(p,a,b,0x100); } }
