typedef struct { u8 p0[4]; s32 f4; u8 p8[0x5e]; u16 f66; u8 p68[0x136]; s16 f1a0; u8 f1a2; u8 p1a3[0xc9]; s32 f26c; s16 f270; u8 p272[0x14]; s16 f286; u8 p288[4]; u32 f28c; u32 f290; s16 f294; u8 p296[0x1a]; u16 f2b0; u8 p2b2[4]; u16 f2b6; u8 p2b8[0x22]; u8 f2da; } Obj11;
extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10F8_ovl_01[];
s32 func_80032EA4_ovl_01(void *, s32, s32, s32);
s32 func_80032F94_ovl_01(void *, s32, s32);
s32 func_80033634_ovl_01(void);
void func_80162F3C_ovl_11(Obj11 *p) {
 u32 s2=p->f28c; s32 s4,s3;
 u8 *g=D_800C7650_ovl_01+0x18000;
 func_80032EA4_ovl_01(p,*(s32 *)(g+0x1aa8),*(s32 *)(g+0x1ab0),0x400);
 s4=func_80032EA4_ovl_01(p,*(s32 *)(g+0x1aa8),*(s32 *)(g+0x1ab0),0x200);
 s3=func_80032EA4_ovl_01(p,*(s32 *)(g+0x1aa8),*(s32 *)(g+0x1ab0),0x514);
 if (p->f2da==0) { u32 t=p->f290; if ((t&0xc0000000)==0 && (t&0x3fffffff)<0x7d0 && !func_80032F94_ovl_01(p,p->f294,0x100)) p->f4=0x10e0000; }
 if (p->f2da==0 && (s3<<16)==0 && s2<0x7d0 && p->f1a2!=g[0x1c22] && g[0x1cef]==0) p->f4=0x10e0000;
 if ((p->f270&0xc000)!=0 && (p->f26c&1)) p->f4=0x10a0000;
 if (s2<0xdac && (s4<<16)!=0 && (*(u16 *)(g+0x1a7a)&0x15) && (func_80033634_ovl_01()&3)==0) p->f4=0x10c0000;
 if (s2<0x9c4 && (s4<<16)!=0 && (*(u16 *)(g+0x1a7a)&0x17) && (func_80033634_ovl_01()&1)==0) p->f4=0x10c0000;
 if (g[0x1a88]!=15 && s2<0x4b0 && (g[0x1cef]&0x80)==0 && p->f1a2==g[0x1c22]) {
  if ((p->f2b6&0x20)==0 && !func_80032F94_ovl_01((u8*)p+0x28,(s32)D_800E10F8_ovl_01,p->f66+0x100)) { p->f4=0x1030000; g[0x1cef]|=0x80; }
  if ((p->f2b6&0x40)==0 && !func_80032F94_ovl_01((u8*)p+0x28,(s32)D_800E10F8_ovl_01,p->f66-0x100)) { p->f4=0x1030000; g[0x1cef]|=0x80; }
 }
 if (*(s16 *)(g+0x1c72)==-32768 && (s3<<16)==0 && s2<0x3e8) { p->f4=0x1080600; p->f2b0|=0x4000; }
}
