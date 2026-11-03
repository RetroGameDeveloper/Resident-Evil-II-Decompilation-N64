extern void func_80077D48_ovl_01(s32, void *);
extern void func_80162B24_ovl_16(void *, void *, s32);
extern void func_80167368_ovl_16(void);
extern void (*D_80167418_ovl_16[])(void *, void *, void *);
void func_80165AA4_ovl_16(void *arg0, void *arg1, void *arg2) {
 u8 *p=(u8*)arg0;
 if(*(s16*)(p+0x1F2)>=0) {
  *(s32*)(p+4)=*(s32*)(p+0x298);
  func_80077D48_ovl_01(7,arg0);
  func_80162B24_ovl_16(arg0,(u8*)func_80167368_ovl_16+(*(u8*)(p+0x2CB)*8),0);
  if(*(u8*)(p+5)!=0xFF) {
   *(u16*)(p+0x2C8)|=1;
   D_80167418_ovl_16[*(u8*)(p+5)](arg0,arg1,arg2);
   *(u16*)(p+0x2C8)&=0xFFFE;
  }
 } else *(s32*)(p+4)=0x03000000;
}
