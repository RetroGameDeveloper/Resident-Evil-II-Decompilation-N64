typedef void(*Fn)(void*,void*,void*); extern Fn D_801666B4_ovl_35[]; extern Fn D_801666A4_ovl_35[]; extern void func_80089D34_ovl_01(void*,void*,void*,s32); extern void func_80033634_ovl_01(void*); extern u8 D_800C7650_ovl_01[];
void func_80164318_ovl_35(void*a){((Fn*)D_801666B4_ovl_35)[*((u8*)a+5)-1](a,0,0);*(u16*)((u8*)a+0x64)=0;}
void func_80163D70_ovl_35(void*a,void*b,void*c){((Fn*)D_801666A4_ovl_35)[*((u8*)a+6)](a,b,c);func_80089D34_ovl_01(a,b,c,0x200);func_80033634_ovl_01(a);}
void func_80163D24_ovl_35(void*a){u8*p=a;s16 v;if(!p[7]){p[7]=1;p[0x2c3]=0;}v=*(s16*)(p+0x270);if(v)goto l;v=0x200;if(p[0x2c3])v=0x200;else goto end;l:*(s16*)(p+6)=v;end:func_80089D34_ovl_01(a,0,0,0x100);}
void func_801644C4_ovl_35(void*a){u8*p=(u8*)a+0x2b4;s32 v;if(p[0x11])p[0xf]=1;v=0xfa;if(*(u32*)(D_800C7650_ovl_01+0x19800+0x1a3c)&0x20)v=0xc8;if(p[0x15]&&!p[0xf]&&(p[9]&1)){u32 n=p[0x15]*v;u32 q=(u64)n*0xaaaaaaabULL>>33;if((u32)*(s16*)((u8*)a+0x1f2)<q){p[0xf]=1;p[0x15]--;}}}
