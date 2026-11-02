extern s32 func_80089D34_ovl_01(void*,s32,s32,s32),func_801636DC_ovl_27(void*,s32),func_80033634_ovl_01(void);
void func_80162728_ovl_27(void*p){func_80089D34_ovl_01(p,0,0,0x200);*(s16*)((char*)p+0x2c2)=0x400;func_801636DC_ovl_27(p,0);}
void func_801626D4_ovl_27(void*p){((s8*)p)[0x2c6]=1;func_80089D34_ovl_01(p,0,0,0x200);((u8*)p)[0x2bf]&=0x7f;((s8*)p)[5]=((u8*)p)[0x2c7]?8:2;*(u16*)((char*)p+6)=0;}
void func_80162634_ovl_27(void*p,s32 a,s32 b){if(!((u8*)p)[6]){((u8*)p)[6]=1;*(s32*)((char*)p+0x1e8)=0x05000700+((func_80033634_ovl_01()&7)<<16);*(s16*)((char*)p+0x2c2)=0;*(u16*)((char*)p+0x2bc)=*(u16*)((char*)p+0x2c0);}if(func_80089D34_ovl_01(p,a,b,0x200)){((s8*)p)[5]=2;((u8*)p)[6]=0;}func_801636DC_ovl_27(p,0);}
void func_801621A4_ovl_27(void*p,s32 a,s32 b){s32 x;((u8*)p)[6]++;x=(func_80033634_ovl_01()&3)+1;*(s16*)((char*)p+0x1f4)=((u8*)p)[0x2b4]*2+x;func_80089D34_ovl_01(p,a,b,0x200);}
