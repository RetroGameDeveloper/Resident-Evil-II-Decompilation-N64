extern s32 func_800334F8_ovl_01(void*,s32);
void func_801650F8_overlay_022(void *a) {
 u8 *p=a; s32 x;
 switch(p[6]) {
 case 0:
  *(s16*)(p+0x270)=0; p[0x1e9]=0; *(u32*)p |= 8; p[6]++;
 case 1:
  if(*(s16*)(p+0x270)!=1) break;
  p[0x1e9]=0x1a; p[0x1e8]=0x10; func_800334F8_ovl_01(a,0); p[6]++;
 case 2:
  p[0x1e8]=0x10;
  x=((s32 (*)(void*,s32,s32,s32))func_80036764_ovl_01_510)(a,0x10,7,0);
  p[6]=p[6]+x;
  break;
 case 3:
  *(u32*)(p+4)=0x01010000;
  *(u32*)p &= ~8;
  *(u16*)(p+0x1aa)&=0xbfff;
 }
}
