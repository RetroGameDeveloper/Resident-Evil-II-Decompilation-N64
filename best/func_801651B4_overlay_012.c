extern s32 func_80033634_ovl_01(void);
extern volatile u32 D_800C7650_ovl_01[];
extern u16 D_80166C18_ovl_12[];
extern u16 D_80166C38_ovl_12[];
void func_801651B4_overlay_012(void *arg0) {
 u8 *p=arg0; s32 s1,v; u16 *t;
 if(!p[7]) {
  p[7]=1;
  s1=func_80033634_ovl_01()&3;
  if (*(volatile u32*)((u8*)D_800C7650_ovl_01+0x18000+0x1a3c)&0x20) {
   v=func_80033634_ovl_01(); t=D_80166C38_ovl_12;
  } else { v=func_80033634_ovl_01(); t=D_80166C18_ovl_12; }
  *(s16*)(p+0x1f2)=t[v&15]+s1;
  p[0x1ef]=13; p[0x1ee]=13; p[0x1ed]=13;
  *(u32*)p &= 0xe3ffffff;
  p[0x26f]|=0x80;
 }
}
