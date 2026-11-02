s32 func_800824A4_ovl_01(void*,void*,s32);
extern u8 D_800C7650_ovl_01[];
extern u8 D_80180234_ovl_04[],D_8018025C_ovl_04[],D_80180284_ovl_04[],D_801802AC_ovl_04[],D_801802D4_ovl_04[],D_801802FC_ovl_04[],D_80180324_ovl_04[],D_80180328_ovl_04[],D_801806F4_ovl_04[];
void func_8017F3B0_ovl_04(void *arg0,s32 arg2) {
 u8 *p=arg0; u32 *g=(u32*)((u8*)&D_800C7650_ovl_01+0x20000); s32 a,n=arg2+1; u8 *src;
 a=*((u8*)g+0x148A);
 if((u32)(a-0xC)>=2) {
  if(g[0x1494/4]&0x40000000) src=(a&1)?D_80180234_ovl_04:D_8018025C_ovl_04;
  else src=(a&1)?D_80180284_ovl_04:D_801802AC_ovl_04;
 } else src=((a&255)==12)?D_801802D4_ovl_04:D_801802FC_ovl_04;
 func_800824A4_ovl_01(p,src,0x2E);
 if((u32)(n&255)>=10) p[0x13]+=(n&255)/10; else func_800824A4_ovl_01(p+0x12,D_80180324_ovl_04,2);
 if(g[0x1494/4]&0x04000000) func_800824A4_ovl_01(p+0x10,D_80180328_ovl_04,2);
 p[0x15]+=(n&255)%10;
 a=*(u16*)((u8*)g+0x14A0); p[0x29]+=a/10;p[0x2B]+=a%10;
 a=*((u8*)g+0x148B);
 func_800824A4_ovl_01(p+0x2E,D_801806F4_ovl_04+a*29,0x1B);
}
