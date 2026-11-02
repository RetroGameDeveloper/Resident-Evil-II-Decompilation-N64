s32 func_80033634_ovl_01(void);
void func_801621CC_ovl_17(void*);
s32 func_80166A84_ovl_17(void*,s32);
extern u8 D_800C7650_ovl_01[];
void func_80162EF4_ovl_17(void *p) {
 u8 *b=p; s32 t; u16 val;
 func_801621CC_ovl_17(p);
 if(b[0x2d3]) { val=*(u16*)(b+0x292); } else { val=*(u16*)(b+0x28e); }
 t=func_80166A84_ovl_17(p,0x80);
 func_80166A84_ovl_17(p,0x100);
 func_80166A84_ovl_17(p,0x400);
 if(*(u16*)(D_800C7650_ovl_01+0x18000+0x1a7a)&1) {
  *(u32*)(b+4)=0x01090000;
  if(func_80033634_ovl_01()&1) *(u32*)(b+4)=0x01050000;
 }
 if(*(s16*)(b+0x2b4)==0) {
  if((u16)(val-0xbb9)<0x1193) {
   if((t<<16)!=0) *(u32*)(b+4)=0x01010000;
   else {
    if(((0x340>>(func_80033634_ovl_01()&15))&1)!=0) *(u32*)(b+4)=0x01070000;
    else *(u32*)(b+4)=0x01010000;
   }
  }
  if(val<0xbb8 && (t<<16)==0) {
   if(((0x340>>(func_80033634_ovl_01()&15))&1)!=0) *(u32*)(b+4)=0x01080000;
   else *(u32*)(b+4)=0x01070000;
  }
 }
}
