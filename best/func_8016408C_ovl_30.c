extern u8 D_800E10D0_ovl_01[];
extern u8 D_800C7650_ovl_01[];
extern void func_800331E8_ovl_01(void *);
extern void func_80032B8C_ovl_01(void *, s32);
extern void func_800334F8_ovl_01(void *, s32, s32, s32);
extern s32 func_80033634_ovl_01(void);
extern void func_80033678_ovl_01(void *);
extern s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern void func_801672F4_ovl_30(void *, s32, s32);
void func_8016408C_ovl_30(u8 *p, s32 arg1, s32 arg2) {
 s32 i; u32 flags;
 if (!p[7]) {
 *(u32*)(p)|=2; p[7]=1; p[0x26f]|=0x80;
 *(u32*)(D_800E10D0_ovl_01+0x250)=(u32)p;
 *(u32*)(D_800E10D0_ovl_01+4)=0x6000000;
 *(u32*)(D_800E10D0_ovl_01+0x224)=*(u32*)(p+0x224);
 *(u32*)(D_800E10D0_ovl_01+0x228)=*(u32*)(p+0x228);
 D_800E10D0_ovl_01[0x26f]|=0x80;
 func_800331E8_ovl_01(D_800E10D0_ovl_01);
 *(u16*)(D_800E10D0_ovl_01+0x66)=*(u16*)(p+0x66)+0x800;
 *(u32*)(D_800E10D0_ovl_01)|=0x4a;
 p[0x2c4]=1;p[0x2c5]=1;
 *(u32*)(*(u32*)(p+0x234)+0x930)=0xf0f3f;
 *(u32*)(D_800C7650_ovl_01+0x1983c)|=0x04000100;
 }
 func_800334F8_ovl_01(p,arg1,arg2,0);
 if(func_80089D34_ovl_01(p,arg1,arg2,0x100)) *(u16*)(p+6)=0x200;
 func_80032B8C_ovl_01(p,0);func_80033678_ovl_01(p);
 flags=**(u32**)(p+0x214);
 if(flags&0x100000){if((0x5ffa>>(func_80033634_ovl_01()&15))&1)func_801672F4_ovl_30(p,6,func_80033634_ovl_01()&1);if((0x17e4>>(func_80033634_ovl_01()&15))&1)func_801672F4_ovl_30(p,6,9);}
 if(flags&0x400000){for(i=0xe;i<0x11;i++)*(u32*)(*(u32*)(p+0x234)+0x1490+(i-0xe)*0x178+0x60)=0xf0f3f;for(i=0x14;i<0x17;i++)*(u32*)(*(u32*)(p+0x234)+0x1d60+(i-0x14)*0x178+0x60)=0xf0f3f;}
 if(flags&0x200000){func_801672F4_ovl_30(p,15,1);func_801672F4_ovl_30(p,21,1);if((0x17e4>>(func_80033634_ovl_01()&15))&1){func_801672F4_ovl_30(p,14,0);func_801672F4_ovl_30(p,16,0);func_801672F4_ovl_30(p,20,0);func_801672F4_ovl_30(p,22,0);}}
}
