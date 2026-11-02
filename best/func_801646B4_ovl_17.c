extern u32 D_80167E58_ovl_17[];
extern u32 D_80167E0C_ovl_17[];
s16 func_80074D94_ovl_01(s32, s32);
extern void func_80089D34_ovl_01(void);
s32 func_80166D98_ovl_17(void *, s32, u8);
s32 func_801620C8_ovl_17(void *,s32,s32);
s32 func_8016477C_ovl_17(void *,s32,s32);
s32 func_80166FBC_ovl_17(void *,s32,s32);
void func_80164748_ovl_17(void *arg0) { register u8 i=*((u8 *)arg0+0x2BE); register u32 *base=D_80167E58_ovl_17; ((void (*)(void))((u8 *)base+i*4))(); }
void func_801646B4_ovl_17(void *arg0,s32 arg1,s32 arg2) {
 u8 *p=arg0; register s32 (*fn)(void*,s32,s32);
 if (!p[6]) p[0x2D8]=p[5];
 if (*(s16 *)(p+0x1A8)==0) { *(s16 *)(p+0x1A8)=func_80074D94_ovl_01(*(s32 *)(p+0x28),*(s32 *)(p+0x30)); }
 fn=(void *)((u8 *)D_80167E0C_ovl_17+(p[5]-1)*4); fn(arg0,arg1,arg2);
}
void func_80164600_ovl_17(void *arg0) {
 u8 *p=arg0; u32 time;
 func_80089D34_ovl_01();
 time=p[0x2D3] ? (*(u32 *)(p+0x290)&0x3fffffff):*(u32 *)(p+0x28c);
 if(time >= 0x1c20 && !func_80166D98_ovl_17(arg0,*(s32 *)(p+0x2c4),p[0x2cc])) return;
 if(p[0x2D3]) { time=*(u32 *)(p+0x290)&0x3fffffff; } else { time=*(u32 *)(p+0x28c); }
 if(time<0xbb8) p[5]=7; else p[5]=3;
 *(u16 *)(p+6)=0;
}
void func_80164890_ovl_17(void *arg0,s32 arg1,s32 arg2) {
 u8 *p=arg0; u8 *q=p+0x2b4;
 if(q[0x1e]) {
 u32 t=((u32)q[0x1b]<<16); t+=((u32)q[0x1c]<<8); t+=q[0x1d]; t+=0x1000000; *(u32 *)(p+4)=t;
 if(p[0x2d8]!=1) func_80166FBC_ovl_17(arg0,0,0);
 func_801620C8_ovl_17(arg0,arg1,arg2);
 } else func_8016477C_ovl_17(arg0,arg1,arg2);
}
