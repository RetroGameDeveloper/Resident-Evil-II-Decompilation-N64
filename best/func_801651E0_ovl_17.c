s32 func_80033634_ovl_01(void); void func_801649F8_ovl_17(void); void func_80166FBC_ovl_17(void *,s32,s32);
void func_801651E0_ovl_17(u8 *p) {
 u8 n; u32 *q; s32 idx;
 p[5]=7; func_801649F8_ovl_17();
 n=p[0x26E];
 if (((n/3)&0xff)!=2) {
  u32 i=0;
  do {
   idx=(func_80033634_ovl_01()&15)+3;
   q=*(u32 **)(p+0x234);
   if ((*(u32 *)((u8 *)q+idx*0x178)&0x4B)==1) func_80166FBC_ovl_17(p,idx,5);
   i++;
  } while (i < 2-((n/3)&0xff));
 }
}
