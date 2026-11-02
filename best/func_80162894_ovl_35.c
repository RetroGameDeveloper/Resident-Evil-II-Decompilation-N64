extern s32 func_80033174_ovl_01(void *, void *);
struct G35 { s32 a; s32 b; u8 pad8[0x21c]; s32 c; s32 d; u8 pad230[0x20]; void *e; u8 pad254[0x1b]; u8 f; };
extern volatile struct G35 D_800E10D0_ovl_01;
void func_80162894_ovl_35(void *arg0) {
 u8 *p=(u8*)arg0; volatile struct G35 *g=&D_800E10D0_ovl_01; s32 n; s32 q; s32 div;
 *(u16 *)(p+6)=0x100; *(s32 *)p |= 2; p[0x26f] |= 0x80;
 g->e=arg0; g->b=0x05000000; g->c=*(s32 *)(p+0x224); g->f|=0x80; g->d=*(s32 *)(p+0x228);
 *(s32 *)(p+0x1e8)=0x09000f00;
 if (p[0x2b4]) n=*(s32 *)(p+0x290)&0x3fffffff; else n=*(s32 *)(p+0x28c);
 q=func_80033174_ovl_01(arg0,(void *)g)&255;
 if(q) div=500; else div=1000;
 *(u16 *)(p+0x64)=0; p[0x2de]=0;
 *(s16 *)(p+0x1e0)=(n-div)/26;
}
