extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10F8_ovl_01[];
extern u8 D_800E138C_ovl_01[];
extern u8 D_8017E680_ovl_10[];
extern u8 D_8017E6B4_ovl_10[];
extern u8 D_8017E6D8_ovl_10[];
s32 func_80040BE4_ovl_01(s32);
#define W(p,o) (*(s32 *)((u8 *)(p)+(o)))
#define U(p,o) (*(u16 *)((u8 *)(p)+(o)))
#define C(p,o) (*(u8 *)((u8 *)(p)+(o)))
void func_8017BDEC_ovl_10(void) {
 u8 *a=(u8*)D_800C7650_ovl_01,*b,*q,*obj,*cur,*other;
 s32 d1,d2;
 if ((W(a+0x18000,0x1A3C)&4)==0 && ((C(a,0x21962)&0xC)>>3)!=0 && C(D_8017E6D8_ovl_10,0)==0xF) {
  b=a+0x18000; q=(u8*)D_800E138C_ovl_01; cur=(u8*)W(b,0x28C);
  while(q!=cur) { obj=(u8*)W(q,0); if(W(obj,0)&1) W(obj,0)|=0x80000; q+=4; }
  W(b,0x1A80)|=0x80000;
  return;
 }
 if ((W(a+0x18000,0x1A3C)&4)==0 && ((C(a,0x21962)&0xC)>>3)!=0 && C(D_8017E6D8_ovl_10,0)!=0xF) {
  b=a+0x18000; q=(u8*)D_800E138C_ovl_01; cur=(u8*)W(b,0x28C);
  while(q!=cur) { obj=(u8*)W(q,0); if(W(obj,0)&1) W(obj,0)|=0x80000; q+=4; }
  W(b,0x1A80)|=0x80000;
  return;
 }
 b=a+0x18000; q=(u8*)D_800E138C_ovl_01; cur=(u8*)W(b,0x28C);
 while(q!=cur) {
  obj=(u8*)W(q,0);
  if(W(obj,0)&1) {
   if(U(obj,0x1AA)&0xC400) W(obj,0)|=0x80000;
   else {
    if(C(D_8017E680_ovl_10,0x34)&1) other=(u8*)W(b,0x1D3C);
    else { other=(u8*)D_800E10F8_ovl_01; }
    d1=W(other,0x28)-W(obj,0x28); d2=W(other,0x30)-W(obj,0x30);
    if(func_80040BE4_ovl_01(d1*d1+d2*d2)<0x1C21 || C(obj,8)!=0x29) W(obj,0)|=8;
    else W(obj,0)|=0x80000;
   }
  }
  q+=4;
 }
 if(C(D_8017E6B4_ovl_10,0)&1) {
  b=a+0x18000; other=(u8*)W(b,0x1D3C); obj=(u8*)W(other,0x250);
  W(obj,0)&=0xFFF7FFFF; W(obj,0)|=8; W(b,0x1A80)|=0x80000; W(other,0)&=0xFFF7FFFF;
 } else {
  b=a+0x18000; other=(u8*)W(b,0x1CD0); W(other,0)&=0xFFF7FFFF; W(other,0)|=8;
 }
}
