extern void func_80089D34_ovl_01(); extern s32 func_80036764_ovl_01(); extern u32 D_800C7650_ovl_01[]; extern u8 D_800E10D0_ovl_01[]; 
void func_801628D0_ovl_36(void){func_80089D34_ovl_01(0,0,0,0x80);}
void func_80162888_ovl_36(u8*p){u8 v=p[0x2b7];if(v){p[0x2b7]=(u8)(v-1);}else{v=func_80036764_ovl_01(p,0,0x3b,0);p[0x2b6]=v;p[0x2b7]=0xf;}}
void func_80162A54_ovl_36(u8*p){if(*(s16*)(p+0x270)){u8*q=p+0x2b4;*(s16*)(p+0x270)=0;q[5]=5;*(u16*)(q+6)=*(u16*)(p+0x2a);*(u16*)(q+8)=*(u16*)(p+0x32);*(s16*)(p+6)=0x100;}}
void func_80162E64_ovl_36(s32 a,s8 b){u8*p;if(a){u32 base=(u32)D_800C7650_ovl_01;p=(u8*)(base+0x18000);p=(u8*)*(u32*)(p+0x1d3c);}else p=D_800E10D0_ovl_01;p[4]=2;p[5]=b;p[6]=0;p[7]=0;p[0x26f]|=0x80;}
