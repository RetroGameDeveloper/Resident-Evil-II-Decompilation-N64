extern volatile s8 D_800E9118_ovl_01[];extern volatile s8 D_800C7650_ovl_01[];
s32 func_800276B4_ovl_01(s32 a){volatile s8*p=D_800E9118_ovl_01;return (s32)*(volatile s16*)(p+a*0x2C+0x10)<0;}
void func_800278AC_ovl_01(void){extern s32 func_800824C8_ovl_01(void*,s32);u8 t;u8*p=(u8*)D_800C7650_ovl_01;u8*q=(u8*)D_800E9118_ovl_01;t=p[0x21962];func_800824C8_ovl_01(p+0x19A5C,0x1FC4);*(s16*)(q+0x10)=-1;*(s16*)(q+0x3C)=-1;*(s16*)(q+0x68)=-1;*(s16*)(q+0x94)=-1;*(s16*)(p+0x21600)=-1;*(s16*)(p+0x215FE)=-1;*(s32*)(p+0x1820C)=0xFFFF0000;*(s32*)(p+0x18230)=0xFFFF0000;p[0x21962]=t;*(s32*)(p+0x19A3C)&=0xD9;p[0x2148E]=q[0xCA];}
s32 func_80028340_ovl_01(s32 a){s32 i=0x1F;do{i--;}while(i!=-1);return a;}
typedef struct {void *p0;void *p4;u8 pad[4];s32 fC; s32 f10;} S28380;
void func_80028380_ovl_01(S28380*p){s32 i=1;do{i--;((void(*)(S28380*,s32))(*(void**)((u8*)p->p4+0x24)))(p,i+1);}while(i>0);p->f10=p->fC?0xC8:0x64;}
