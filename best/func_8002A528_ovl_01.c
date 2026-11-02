extern volatile s32 D_8013146C_ovl_01,D_80134460_ovl_01;
extern volatile u8 D_800C4EA8_ovl_01[],D_800C4E58_ovl_01[];
extern void func_80029718_ovl_01(void);extern void func_80029F38_ovl_01(void);
void func_80025D60_ovl_01(void){if(D_8013146C_ovl_01)D_80134460_ovl_01=1;}
void func_80026040_ovl_01(void){extern s32 func_80025A60_ovl_01(s32);volatile u8*p=D_800C4EA8_ovl_01;volatile u8*q=D_800C4E58_ovl_01;*(p+0x17)=2;*(q+0x17)=2;*(p+0x16)=0;func_80025A60_ovl_01(2);*(q+0x16)=0;}
typedef struct{u8 pad[0x178];void*p;} C2A;typedef struct{void*f0;void*f4;u8 pad[0x24];s32 f28;u8 z[0xC];s32 f38;} Node;
void func_8002A528_ovl_01(C2A*p){Node*n;s32 i;n=((Node*(*)(void*,s32,s32))*(void**)*(void**)((u8*)p+4))(p,1,0x48);p->p=n;n->f0=(u8*)func_80029718_ovl_01+0x1B8;n->f4=(u8*)func_80029F38_ovl_01+0xA0;for(i=0;i<4;i++){n->f38=0;n->f28=0;n=(Node*)((u8*)n+4);}}
extern volatile s32 D_800C4F10_ovl_01,D_800C4F14_ovl_01;extern volatile s32 D_800C4F20_ovl_01[];extern s32 func_8006CE20_ovl_01();
void func_80025B1C_ovl_01(s32 i){s32 *p=(s32*)((u8*)D_800C4F20_ovl_01+i*0x28);func_8006CE20_ovl_01(p[0],p[1],p[2],p[3],p[4],p[5],p[6],p[7],p[8],p[9],D_800C4F10_ovl_01,D_800C4F14_ovl_01);}
