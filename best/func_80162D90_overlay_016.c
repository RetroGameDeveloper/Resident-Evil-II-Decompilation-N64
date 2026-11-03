extern u8 D_800C7650_ovl_01[];
void func_80162D90_overlay_016(u32 *p,s32 n) {
 u32 v;
 switch(n) {
 case 0: v=*p & 0xE3FFFFFF; v|=0x10000000; *p=v; return;
 case 1: v=*p & 0xE3FFFFFF; v|=0x18000000; *p=v; return;
 case 2: v=*p & 0xE3FFFFFF; v|=0x08000000; *p=v; return;
 case 3: v=*p & 0xE3FFFFFF; v|=0x0C000000; *p=v; return;
 case 4: {
  u16 x=*(u16*)(D_800C7650_ovl_01+0x1982A);
  v=*p & 0xE3FFFFFF;
  if(x==7 || x==8) v|=0x0C000000; else v|=0x04000000;
  *p=v; return;
 }
 case 5: *p &= 0xE3FFFFFF; return;
 }
}
