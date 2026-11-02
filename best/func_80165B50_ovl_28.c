extern s8 D_80168F68_ovl_28[];
extern void *jtbl_80168DB0_ovl_28[6];
void func_80165B50_ovl_28(u8 *p, void *arg1, void *arg2) {
 s32 x; s32 y; s32 z;
 switch(p[6]) {
 case 0:
   *(u32 *)(p+0x1E8)=0x1001F00; y=*(u16 *)(p+0x270); *(s16 *)(p+0x1F4)=60;
   if (y&1) { p[0x25C]=0; p[6]=1; } break;
 case 1:
   func_800334F8_ovl_01(p,arg1,arg2,0); func_80089D34_ovl_01(p,arg1,arg2,0x80); func_80032B8C_ovl_01(p,0);
   if (*(u16 *)(p+0x270)&2) p[6]=2; break;
 case 2:
   *(u32 *)(p+0x1E8)=0x1f00; p[6]=3;
   arg1=*(void **)(p+0x22c); arg2=*(void **)(p+0x230);
   func_800334F8_ovl_01(p,arg1,arg2,0); func_80089D34_ovl_01(p,arg1,arg2,0x80); func_80032B8C_ovl_01(p,0);
   if (*(u16 *)(p+0x270)&4) p[6]=4; break;
 case 3: break;
 case 4:
   *(u32 *)(p+0x1E8)=0x1001f00; *(s16 *)(p+0x1f4)=60; p[6]=5;
   func_800334F8_ovl_01(p,arg1,arg2,0); func_80089D34_ovl_01(p,arg1,arg2,0x80); func_80032B8C_ovl_01(p,0); break;
 case 5: break;
 }
 x=*(s8 *)(p+0x2BA);
 y=*(s32 *)(p+0x234);
 z=*(s8 *)(D_80168F68_ovl_28+x);
 *(s16 *)(*(s32 *)(y+0x178+0x120)+0xC)=0x1000-z*5;
 func_800662B8_ovl_01(p);
 y=*(s32 *)(p+0x234);
 z=*(s8 *)(D_80168F68_ovl_28+x);
 *(s16 *)(*(s32 *)(y+0x2f0+0x120)+0xC)=0x1000-z*5;
 func_800662B8_ovl_01(p);
}
