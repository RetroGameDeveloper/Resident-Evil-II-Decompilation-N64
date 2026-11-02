extern s32 func_80089D34_ovl_01(s32,s32,s32); extern s32 func_8008A974_ovl_01(s32,s32,s32);
s32 func_80036BB4(void *p,u8 a1,s8 a2,s32 a3){s32 result; s32 hi=a3<<16; u32 div=0x1000/(u32)(a2+1); if(*(u8*)((u8*)p+0x1e8)!=a1){*(u8*)((u8*)p+0x1e8)=a1;*(u8*)((u8*)p+0x1e9)=0;*(u8*)((u8*)p+0x1ea)=a2;} result=func_80089D34_ovl_01(*(s32*)((u8*)p+0x1a4),*(s32*)((u8*)p+0x218),div|hi); div=0x1000/(u32)(a2+1); result=func_8008A974_ovl_01(*(s32*)((u8*)p+0x1a4),*(s32*)((u8*)p+0x218),div|hi); return result!=0;}
extern s32 D_80139A20,D_80139A28,D_80139A30;
void func_80043490_ovl_01(s32 *a,s32*b,s32*c){s32 *p=&D_80139A20;*a=(*(s16*)p<<16)|(u16)*(u16*)((u8*)p+2);p=&D_80139A28;*b=(*(s16*)p<<16)|(u16)*(u16*)((u8*)p+2);p=&D_80139A30;*c=(*(s16*)p<<16)|(u16)*(u16*)((u8*)p+2);}
extern s32 D_800EFD34_ovl_01,D_800EFD3C_ovl_01,D_800EFD40_ovl_01,D_800EFD44_ovl_01;
void func_80043650_ovl_01(void){s32 value=-1; D_800EFD34_ovl_01=value; D_800EFD40_ovl_01=0; D_800EFD3C_ovl_01=0; D_800EFD44_ovl_01=value;}
extern void func_800439B8_ovl_01(void*,s32,s32);
void func_80043960_ovl_01(void *x,s32 *a1){ volatile struct {s32 a,b,c,d,e; u16 f,g;} v; v.a=a1[0];v.b=a1[1];v.c=a1[2];v.d=a1[3];v.e=a1[4];v.f=8;v.g=8;func_800439B8_ovl_01((void*)&v,0,0);}
