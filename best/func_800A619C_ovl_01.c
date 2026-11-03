extern f64 D_800BA710_ovl_01,D_800BA718_ovl_01;
f64 func_800A61F8_ovl_01(f64 x){f64 t; s32 n;if(D_800BA710_ovl_01<=x){t=x-D_800BA710_ovl_01;n=(s32)t;n|=0x80000000;}else n=(s32)x;t=(f64)n;if(n<0)t+=D_800BA718_ovl_01;return t;}
extern u8 D_801362B0_ovl_01; s32 func_800AF074_ovl_01(void); extern u8 D_801443E8;
s32 func_800A81E8_ovl_01(void){s32 a, result=-1, index; u8 *entry; if(!D_801362B0_ovl_01)return result; a=func_800AF074_ovl_01(); if(a==-1)return result; index=a&255; do{entry=&D_801443E8+index*0x1a0;if(*(s32*)(entry+0x60)==a){result=0;*(s32*)(entry+0x24)|=8;}a=*(s32*)(entry+0x10);index=a&255;}while(a!=-1);return result;}
s32 func_800A5BF0_ovl_01(s32,s32); extern u8 D_801479F8,D_80148180;
void func_800A9518_ovl_01(void){s32 i=0;u8 *p=&D_80148180;if(D_801479F8)do{if(p[0]==1)func_800A5BF0_ovl_01(*(s32*)(p+8),*(s32*)(p+12));i++;p+=0x18;}while(i<D_801479F8);}
extern f32 D_800BA708_ovl_01,D_800BA70C_ovl_01;
s32 func_800A619C_ovl_01(s32 x){f32 f=(f32)(x&0xffff)*D_800BA708_ovl_01;if(D_800BA70C_ovl_01<=f){f-=D_800BA70C_ovl_01;return ((s32)f|0x80000000)&0xffff;}return (s32)f&0xffff;}
