
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
void func_801674BC_ovl_17(void *);
s32 func_80033634_ovl_01(void);
void func_80167608_ovl_17(void *, s32, s32);
void func_80166FBC_ovl_17(void *, s32, s32);
void func_801620C8_ovl_17(void *, s32, s32, u8);
extern u32 D_80167C90_ovl_17[];

void func_80164940_ovl_17(void *a,s32 b,s32 c) { u8*p=a; u8*q=p+0x2b4; if(p[0x2d8]!=1) func_80166FBC_ovl_17(a,1,0); if(q[0x1e]) { *(u32*)(p+4)=0x01000000+(q[0x1b]<<16)+(q[0x1c]<<8)+q[0x1d]; func_801620C8_ovl_17(a,b,c,q[0x1d]); } else { q[0x19]=1; *(u32*)(p+4)=0x01040000; } }
void func_80164A2C_ovl_17(void *a,s32 b,s32 c) { u8 v=((u8*)a)[6]; if(v==1) goto update; if(v<2) { if(v==0) { ((u8*)a)[6]=1; *(u32*)((u8*)a+0x1e8)=0x01000300; func_801674BC_ovl_17(a); goto update; } } else if(v==2) *(u32*)((u8*)a+4)=0x01090000; return; update: ((u8*)a)[6]+=func_80089D34_ovl_01(a,b,c,0x400); }
void func_80164BB4_ovl_17(void *a) { u8*p=a; *(u16*)(p+0x1e2)=0x28; *(u16*)(p+0x1f4)=0x800; p[6]=1; *(u16*)(p+0x1e0)=0; *(u16*)(p+0x1e4)=0; *(u32*)(p+0x1e8)=0x01000300; p[0x2bf]=1; *(u16*)(p+0x2b6)=0; *(u32*)p &=0xe3ffffff; p[0x26f]|=0x80; func_801674BC_ovl_17(a); func_80167608_ovl_17(a,0x2004,(func_80033634_ovl_01()&1)+1); }
void func_801637E8_ovl_17(void *a) { u8*p=a; u32 *d=D_80167C90_ovl_17; if(p[0x2cc]&1){*(u16*)(p+0x68)=0;*(u16*)(p+0x64)=*(u16*)(p+0x66);}else{*(u16*)(p+0x64)=0;*(u16*)(p+0x68)=0x400;} *(u32*)(p+0x120)=d[0x40/4];*(u32*)(p+0x124)=d[0x44/4];*(u32*)(p+0x128)=d[0x48/4];*(u32*)(p+0x12c)=d[0x4c/4];*(u32*)(p+0x130)=d[0x50/4];*(u32*)(p+0x134)=d[0x54/4];*(u32*)(p+0x138)=d[0x58/4];*(u32*)(p+0x13c)=d[0x5c/4];p[0x2c1]=1;*(u16*)(p+0x2c2)=0;*(u32*)(p+0x1e8)=0x300;func_80089D34_ovl_01(a,0,0,0x400);}
