extern u8 D_80166F68_ovl_16[];extern u8 D_800C7650_ovl_01[];
s32 func_8008386C_ovl_01(s16,s32,s32*,s16*);s32 func_80066804_ovl_01(s32*,s32,s32,s32);s32 func_8006A45C_ovl_01(void*,s32);
typedef struct {s8 b[8];} Bytes8;
s32 func_80162ED8_overlay_016(void*arg0,s32 arg1,s32 arg2){u8*p=arg0;s16 out[2];s32 vec[3];s32 v0,v1;Bytes8 b=*(Bytes8*)D_80166F68_ovl_16;*(Bytes8*)out=b;
func_8008386C_ovl_01(*(s16*)(p+0x66),*(s32*)(p+0x70),(s32*)out,out);
vec[0]=*(s32*)(p+0x28)+out[0];vec[1]=0;vec[2]=*(s32*)(p+0x30)+out[1];
func_80066804_ovl_01(vec,0x190,1<<p[0x1a2],0x400);
if(*(s32*)(D_800C7650_ovl_01+0x199b8)){if(p[0x2cc]==0){v1=((u16)*(s16*)(p+0x66)&0xfff)-((((func_8006A45C_ovl_01(p+0x28,*(s32*)(D_800C7650_ovl_01+0x199b8))&0xffff)<<10)+0x800)&0xfff);v0=v1;if(v1<0)v0=-v1;if(v0>=0x801)v1-=0x1000;if(v1!=0)p[0x2cc]=arg1;else p[0x2cc]=-arg1;if(arg2)p[0x2cc]=-p[0x2cc];}}
else {p[0x2cc]=0;return 0;}
*(u16*)(p+0x66)+=(s8)p[0x2cc];return 1;}
