extern s32 func_80033634_ovl_01(void);
extern void func_80164748_ovl_17(void *,s32,s32,s32);
extern void func_80166FBC_ovl_17(void *,s32,s32);
extern u8 D_800C7650[];
void func_80165388_ovl_17(u8 *p,s32 a1,s32 a2){
u8 *s=p+0x2b4; s32 r=func_80033634_ovl_01()&7; s32 i=r*2+3; u8 *q; u8 *t; s32 v; u8 bits;
if(s[9]>=3){bits=s[8];if(!((bits>>r)&1)){s[8]=bits|(1<<r);s[9]--;
q=*(u8**)(p+0x234)+(i*0x178);v=*(s32*)(q+0x178);if(D_800C7650[0x21962]&8)v|=0x1062;*(s32*)(q+0x178)=v;
t=q+0x178;*(s32*)(t+0x60)=0x101f3f;*(s16*)(t+0x2c)=0x64;*(s16*)(t+0x11e)=0;*(s16*)(t+0x2a)=0;*(s8*)(t+0x111)=0x1e;*(s16*)(t+0x2e)=0;*(s16*)(t+0x28)=*(u16*)(p+0x66)+0x800;*(s16*)(t+0x32)=0x400;*(u16*)(t+0x30)=*(u16*)(p+0x66);
}}
func_80166FBC_ovl_17(p,i,7);q=*(u8**)(p+0x234)+(i*0x178);*(s32*)(q+0x178+0x60)=0x102f4f;p[5]=2;func_80164748_ovl_17(p,a1,a2,0x102f4f);
}
