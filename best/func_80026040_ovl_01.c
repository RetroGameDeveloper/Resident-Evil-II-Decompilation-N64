extern volatile u8 D_800C4EA8_ovl_01[],D_800C4E58_ovl_01[],D_8013146C_ovl_01[],D_80134460_ovl_01[];extern volatile u8 D_800C7650_ovl_01[];extern void func_80029718_ovl_01(void);extern void func_80029F38_ovl_01(void);
typedef struct {u8 pad[0x10];s32 f10;} S28380; typedef struct{u8 pad[0x24];void(*fn)(void*,s32);} T28380;
void func_80028380_ovl_01(S28380*p){s32 i=1;T28380*t=*(T28380**)((u8*)p+4);s32 a1=i;do{i--;t->fn(p,a1);a1=i;}while(i>0);p->f10=(*(s32*)((u8*)p+0xC))?0xC8:0x64;}
typedef struct {u8 pad[0x178]; void *p;} C2A; typedef struct{void*fn0;void*fn4;u8 pad[0x24];s32 f28;u8 pad2[0xC];s32 f38;} Node;
void func_8002A528_ovl_01(C2A*p){Node*n; s32 i; n=((Node*(*)(void*,s32,s32))(*(void**)(*(u32**)((u8*)p+4))))(p,1,0x48);p->p=n;n->fn0=(void*)func_80029718_ovl_01;n->fn4=(void*)func_80029F38_ovl_01;for(i=0;i<4;i++){n->f38=0;n->f28=0;n=(Node*)((u8*)n+4);}}
void func_80026040_ovl_01(void){extern s32 func_80025A60_ovl_01(s32);*(volatile u8*)(D_800C4EA8_ovl_01+0x17)=2;*(volatile u8*)(D_800C4E58_ovl_01+0x17)=2;*(volatile u8*)(D_800C4EA8_ovl_01+0x16)=0;*(volatile u8*)(D_800C4E58_ovl_01+0x16)=0;func_80025A60_ovl_01(2);}
void func_80025D60_ovl_01(void){if(*(volatile s32*)D_8013146C_ovl_01) *(volatile s32*)D_80134460_ovl_01=1;}
