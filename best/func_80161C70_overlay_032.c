typedef struct { u8 b[0x2D3]; } Obj;
extern u32 D_800C7650_ovl_01[];
extern void (*D_80166E90_ovl_32[])(void*,s32,s32);
extern u8 D_800E10D0_ovl_01[];
extern u32 D_800E1388_ovl_01;
extern s32 func_80033634_ovl_01(void);
extern void func_8016690C_ovl_32(s32,s32,s32);
extern void func_80166934_ovl_32(void*,s32);
extern void func_8016678C_ovl_32(void*);
extern void func_80166BC0_ovl_32(void*);
extern void func_80033678_ovl_01(void*);
extern void func_801655F0_ovl_32(void*,void*);
extern void func_800342B0_ovl_01(void*,s32,s32*);
extern void func_80040E88_ovl_01(void*,void*);
extern void func_8004DA70_ovl_01(void*,void*);
extern void func_8004D3D0_ovl_01(s32,void*);
void func_80161C70_overlay_032(void *vp) {
 Obj *p=(Obj*)vp; u8 *b=(u8*)p; s32 r1,r2,mode; u32 magic; s16 *ang; s32 d;
 if ((*(u32*)((u8*)D_800C7650_ovl_01+0x18000+0x1A60)&0x20000000)!=0) return;
 if ((b[0x26F]&0x7F)!=0) b[0x26F]--;
 if (*(u16*)(b+0x2C2)&1) { b[0x2BD]--; if(b[0x2BD]==0xFF) { if(b[0x2BE]!=0)b[0x2BE]--; b[0x2BD]=15; if(b[0x2BE]==0)*(u16*)(b+0x2C2)&=0xFFFE; } }
 magic=0x88888889;
 D_80166E90_ovl_32[b[4]](p,*(s32*)(b+0x1A4),*(s32*)(b+0x218));
 if(b[0x2C5])b[0x2C5]--;
 if(!(*(u16*)(b+0x2C2)&8)) {
  mode=b[0x1E9]&15;
  if(mode==0) { r1=func_80033634_ovl_01()&255; r2=((u64)(u32)r1*magic)>>35; r1-=((r2<<4)-r2); d=7-r1; r1=func_80033634_ovl_01()&255; r2=((u64)(u32)r1*magic)>>35; func_8016690C_ovl_32(0,d,7-(r1-((r2<<4)-r2))); }
  mode=b[0x1E9]&15;
  if(mode==7) { r1=func_80033634_ovl_01()&255; r2=((u64)(u32)r1*magic)>>35; d=7-(r1-((r2<<4)-r2)); r1=func_80033634_ovl_01()&255; r2=((u64)(u32)r1*magic)>>35; func_8016690C_ovl_32(1,d,7-(r1-((r2<<4)-r2))); }
 }
 func_80166934_ovl_32(p,0); func_80166934_ovl_32(p,1); func_8016678C_ovl_32(p); func_80166BC0_ovl_32(p); func_80033678_ovl_01(p);
 func_801655F0_ovl_32(p,*(void**)(b+0x234)+0x2F0);
 *(void**)(b+0x250)=D_800E10D0_ovl_01; d=0; func_800342B0_ovl_01(p,*(s16*)(b+0x66),&d);
 d=(u16)d&0xFFF; if(d>=0x801)d-=0xFFF; ang=(s16*)(*(u8**)(b+0x234)+0x178); *ang=(u16)*ang+d;
 func_80040E88_ovl_01(*(u8**)(b+0x234)+0x1D0,*(u8**)(b+0x234)+0x180);
 *ang=(u16)*ang-d; func_8004DA70_ovl_01(p,b+0x28); b[0xD]=255; func_8004D3D0_ovl_01(D_800E1388_ovl_01,p);
}
