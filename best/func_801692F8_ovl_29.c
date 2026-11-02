extern s32 func_80033634_ovl_01(void); extern s32 func_800662B8_ovl_01(void*,void*); extern s8 D_8016976A_ovl_29; extern s8 D_8016976B_ovl_29;
void func_801692F8_ovl_29(void *arg0,void *arg1){u32 x;u8 n;void *p;s32 ret;u8 state=*((u8*)arg0+0x2bd);s32 one=1;
switch(state){case 0:p=*(void**)((u8*)arg1+0x120);*(u16*)((u8*)p+0xc)+=0x400;p=*(void**)((u8*)arg1+0x120);if(*(s16*)((u8*)p+0xc)>=0xc01){*(u16*)((u8*)p+0xc)=0xc00;*((u8*)arg0+0x2bd)=one;*(u16*)((u8*)arg0+0x2be)=0;*((u8*)arg0+0x2bb)=3;}break;
case 1:p=*(void**)((u8*)arg1+0x120);*(u16*)((u8*)p+0xc)-=0x1f4;*(u16*)((u8*)arg0+0x2be)+=0x64;n=*((u8*)arg0+0x2bb)-1;*((u8*)arg0+0x2bb)=n;if((s8)n==-1){*((u8*)arg0+0x2bb)=3;*((u8*)arg0+0x2bd)=2;}break;
case 2:p=*(void**)((u8*)arg1+0x120);*(u16*)((u8*)p+0xc)+=0x1f4;*(u16*)((u8*)arg0+0x2be)-=0x64;n=*((u8*)arg0+0x2bb)-1;*((u8*)arg0+0x2bb)=n;if((s8)n==-1){*((u8*)arg0+0x2bb)=3;*((u8*)arg0+0x2bd)=one;}break;}
x=(u32)func_80033634_ovl_01()&255;D_8016976B_ovl_29=7-(x%15);x=(u32)func_80033634_ovl_01()&255;D_8016976A_ovl_29=7-(x%15);func_800662B8_ovl_01(arg0,arg1);}
