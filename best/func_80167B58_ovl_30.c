
extern u8 D_800E10D0_ovl_01[]; extern s16 D_80167CEC_ovl_30[];
s32 func_80032F94_ovl_01(void*,void*,s32);
s32 func_800662B8_ovl_01(void*,void*);
s32 func_80033634_ovl_01(); s32 func_8016714C_ovl_30(s16);s32 func_8016719C_ovl_30(s16);
void func_80166FE4_ovl_30(void *a0,void *a1){s32 s1,s0,v0;u8 n;n=*((u8*)a1+0x12);if(n)*((u8*)a1+0x12)=n-1;else{s1=(func_80033634_ovl_01()&7)-3;s0=func_80033634_ovl_01()&3;v0=s0&2;if(s0&1){func_8016714C_ovl_30(s1);v0=s0&2;}if(v0)func_8016719C_ovl_30(s1);*((u8*)a1+0x12)=*((u8*)a1+0x11)*(func_80033634_ovl_01()&7);}}
s32 func_8016758C_ovl_30(void *a0,s32 a1){s32 off,v;void *base,*entry;u8 *g=D_800E10D0_ovl_01;s16 *t=D_80167CEC_ovl_30; if((g[0x26f]&0x80)||( *((s16*)(g+0x1f2))<0))return 0; off=t[a1]; base=*(void**)((u8*)a0+0x234); entry=(u8*)base+off*0x178; if(!func_80032F94_ovl_01(g+0x28,(u8*)entry+0x4c,t[a1+1]))return 0; v=*((s32*)((u8*)a0+0x2c))-*((s32*)((u8*)entry+0x50));if(v<0)v=-v;return v<0xce4;}
void func_80166470_ovl_30(void *a0){s32 x;u8 v;if(!*((u8*)a0+6)){*((u8*)a0+6)=1;*((u8*)a0+0x2c4)=1;*((u8*)a0+0x2c5)=1;x=*((s32*)a0);*((s32*)((u8*)a0+0x1e8))=0x10130f00;v=*((u8*)a0+0x25c);*((s16*)((u8*)a0+0x272))=0;x|=0x400;v|=1;*((s32*)a0)=x;*((u8*)a0+0x25c)=v;}if(*((s16*)((u8*)a0+0x270))==1){*((u8*)a0+5)=1;*((u16*)((u8*)a0+6))=0;}}
void func_80167B58_ovl_30(void *a0,s32 a1,s32 a2,s16 a3){void *p,*q;p=(u8*)*((void**)((u8*)a0+0x234))+a1*0x178;q=(u8*)*((void**)((u8*)p+0x120))+a2*4;*((s16*)((u8*)q+0xc))=a3;func_800662B8_ovl_01(p,q);}
