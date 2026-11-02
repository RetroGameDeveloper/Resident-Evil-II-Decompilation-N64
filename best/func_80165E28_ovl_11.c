extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10F8_ovl_01[];
extern s32 func_80032F94_ovl_01(void *,void *,s16,s32);
void func_80165E28_ovl_11(void *p) {
 u8 *base;
 if(*(u8*)((u8*)p+6)!=3) return;
 if(*(u32*)((u8*)p+0x28c)>=0x514) return;
 base=D_800C7650_ovl_01+0x18000;
 if(base[0x1cef]&0x80) return;
 if(*(u8*)((u8*)p+0x1e9)>=11) return;
 if(*(u8*)((u8*)p+0x1a2)!=base[0x1c22]) return;
 if(base[0x1a88]==15) return;
 if((*(u16*)((u8*)p+0x2b6)&0x20)==0) {
  if(!func_80032F94_ovl_01((u8*)p+0x28,D_800E10F8_ovl_01,*(u16*)((u8*)p+0x66)+0x100,0x100)) {
   *(s32*)((u8*)p+4)=0x01030000; base[0x1cef]|=0x80;
  }
 }
 if((*(u16*)((u8*)p+0x2b6)&0x40)==0) {
  if(!func_80032F94_ovl_01((u8*)p+0x28,D_800E10F8_ovl_01,*(u16*)((u8*)p+0x66)-0x100,0x100)) {
   *(s32*)((u8*)p+4)=0x01030000; base[0x1cef]|=0x80;
  }
 }
}
