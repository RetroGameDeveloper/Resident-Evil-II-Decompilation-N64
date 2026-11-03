extern u8 D_80162FA0_ovl_25[], D_800E10F8_ovl_01[], D_800C7650_ovl_01[];
extern u32 D_80163058_ovl_25[];
extern s32 func_80032F94_ovl_01(void *, void *, s32);
extern s32 func_80089D34_ovl_01(void *, s32);
extern s32 func_80033634_ovl_01(void);
extern s32 func_80077D48_ovl_01(s32, void *);
void func_801623B8_ovl_25(void *a) { u8 *p=a; u8 *entry=D_80162FA0_ovl_25+((*(u16 *)(p+0x1aa)&1)*9); u8 n=entry[2]; if(func_80032F94_ovl_01(a, (u8 *)*(u32 *)(p+0x234)+n*0x178+0x4c, 0x384)==0) *(u32 *)(p+4)=0x01030000; }
void func_80162A70_ovl_25(void *a) { u8 *p=a; u8 state=p[6]; s32 one=1; if(state==one){func_80089D34_ovl_01(a,0x100);if(!(*(u8 *)(D_800C7650_ovl_01+0x19cef)&0x80))p[6]=2;} else if(state<2){if(state==0){*(u32 *)(p+0x1e8)=0x05000f00;p[6]=one;}} else if(state==2){*(u32 *)(p+4)=0x01010000;} }
void func_80162B24_ovl_25(void *a) { volatile u32 frame[2]; u8 i=((u8 *)a)[0x26e]; u32 *table=D_80163058_ovl_25; ((void (*)(void))table[i])(); }
void func_80162B58_ovl_25(void *a) { volatile u32 frame[14]; u8 *p=a; s32 x; *(u32 *)(p+4)=0x01050000; p[0x26f]|=0x80; x=func_80033634_ovl_01(); if(x&1)func_80077D48_ovl_01(2,a); else func_80077D48_ovl_01(3,a); }
