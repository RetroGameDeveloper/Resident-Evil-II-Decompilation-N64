typedef struct { u8 pad[0x2da]; } O;
extern u8 D_800C7650_ovl_01[];
s32 func_80033634_ovl_01(void);
s32 func_80032DEC_ovl_01(void*,s16,s16,s32);
s32 func_800334F8_ovl_01(void*,s32,s32,s32);
s32 func_80089D34_ovl_01(void*,s32,s32,s32);
s32 func_80032EA4_ovl_01(void*,s32,s32,s32);
void func_80077D48_ovl_01(s32,void*);
void func_80162EF8_ovl_11(void*);
s32 func_8008A9E8_ovl_01_4E4(void*,s32);
void func_80032B8C_ovl_01(void*,s32);
void func_80163AEC_ovl_11(O *p) {
 u8 *b=(u8*)p; s32 v;
 if (b[6]==0) {
  b[6]=1; *(s32*)(b+0x1e8)=((b[0x2b4]+4)<<24)+0xf00;
  v=func_80033634_ovl_01(); *(s16*)(b+0x1f4)=(v&0x3f)+0xb4;
  if (!b[0x2d5]) { v=func_80033634_ovl_01(); func_80077D48_ovl_01((v&1)?10:11,p); b[0x2d5]=0x96; }
  func_800334F8_ovl_01(p,*(s32*)(b+0x1a4),*(s32*)(b+0x218),0);
  v=func_80033634_ovl_01(); func_800334F8_ovl_01(p,*(s32*)(b+0x1a4),*(s32*)(b+0x218),0); b[0x1e9]=v&0x1f;
  v=func_80033634_ovl_01(); *(s16*)(b+0x1f6)=(v&0x1f)+0x2d; b[0x206]=0;
 }
 if (b[6]!=1) return;
 if (!*(s8*)(b+0x206)) func_80032DEC_ovl_01(p,*(s16*)(b+0x260),*(s16*)(b+0x262),0x10);
 else { func_80032DEC_ovl_01(p,*(s16*)(b+0x260),*(s16*)(b+0x262),-0x10); b[0x206]--; }
 if (*(s32*)(b+0x1ac)&1) { v=--*(s16*)(b+0x1f6); if (v==-1) { v=func_80033634_ovl_01(); *(s16*)(b+0x1f6)=(v&31)+45; v=func_80033634_ovl_01(); b[0x206]=(v&7)+5; } }
 func_800334F8_ovl_01(p,*(s32*)(b+0x1a4),*(s32*)(b+0x218),0);
 func_80089D34_ovl_01(p,*(s32*)(b+0x1a4),*(s32*)(b+0x218),0x100);
 func_80032B8C_ovl_01(p,0);
 if (*(u16*)(b+0x1aa)&0x80 || *(u16*)(b+0x2b6)&0x8000) { if (b[0x1e9]%3==2) { func_80162EF8_ovl_11(p); func_8008A9E8_ovl_01_4E4(p,*(s32*)(b+0x218)); } }
 if (*(u16*)(b+0x1aa)&0x80 || *(u16*)(b+0x2b6)&0x1000) { if ((*(u16*)(b+0x2d2)&7)==0 && (*(u16*)(b+0x2b6)&0x800)) { v=--*(s16*)(b+0x1f2); if(v<0) { *(s32*)(b+4)=0x30a0000; if(*(u16*)(b+0x2b6)&0x1000) *(s32*)(b+4)=0x30b0000; b[0x26e]=4; b[0x26f]|=0x80; *(u16*)(b+0x2b6)|=0x2000; return; } } }
 if (*(u16*)(b+0x2b6)&0x1000) { v=func_80033634_ovl_01(); *(u16*)(b+0x66)-=((v&255)>>1)-0x40; }
 v=--*(u16*)(b+0x1f4); if(v==-1 || (*(u8*)(D_800C7650_ovl_01+0x19cef)&0x80)) *(s32*)(b+4)=0x1010000;
 if (*(u32*)(b+0x28c)<0x1389 && func_80032EA4_ovl_01(p,0,0,0x400)) return;
 if (*(s16*)(b+0x1f4)<0x78) *(s32*)(b+4)=0x1010000;
}
