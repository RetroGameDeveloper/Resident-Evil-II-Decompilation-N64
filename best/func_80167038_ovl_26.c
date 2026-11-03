extern void func_8004DA70_ovl_01(void *);
extern void func_8004D3D0_ovl_01(void *, void *);
extern u8 D_800C7650_ovl_01[];
extern void *D_800E1390_ovl_01[];
void func_80167038_ovl_26(void *arg0) {
 s32 s1;
 u8 *cur;
 u8 *limit;
 void *entry;
 func_8004DA70_ovl_01((u8*)arg0+0x28);
 *(u8*)((u8*)arg0+0xD)=0xFF;
 limit=(u8*)D_800C7650_ovl_01+0x1828C;
 cur=(u8*)D_800E1390_ovl_01;
 if(*(void**)limit!=cur) {
  do {
   entry=*(void**)cur;
   if(entry!=arg0) {
    if(*(s32*)entry&1) func_8004D3D0_ovl_01(entry,arg0);
   }
   cur+=4;
  } while(cur!=*(u8**)limit);
 }
}
