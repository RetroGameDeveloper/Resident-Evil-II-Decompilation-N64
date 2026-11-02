extern s32 func_80077D48_ovl_01(s32,void*); extern s32 func_80162B24_ovl_14(void*,void*,s32); extern s32 func_80036764_ovl_01_5E0(void*,s32,s32,s32); extern s32 func_80036764_ovl_01_4B0(void*,s32,s32,s32); extern u32 jtbl_801688B8_ovl_14[]; extern u8 D_80168B74_ovl_14[];
void func_80167F74_ovl_14(void *p) {
 u8 state=*((u8*)p+6); s32 t; s32 x;
 if(state<6) {
  switch(state) {
   case 0:
    func_80077D48_ovl_01(8,p);
    func_80162B24_ovl_14(p,D_80168B74_ovl_14+(*((u8*)p+0x2cb)*8),0);
    *(u32*)p |= 2; *((u8*)p+6)=*((u8*)p+6)+1;
    x=func_80036764_ovl_01_5E0(p,0x1c,0,0);
    *((u8*)p+6)=*((u8*)p+6)+x;
    if(*(s16*)((u8*)p+0x2d6)>=-0x3e8) *(s16*)((u8*)p+0x2d6)=*(s16*)((u8*)p+0x2d6)-0x32;
    break;
   case 1:
    *((u8*)p+6)=*((u8*)p+6)+1;
    x=func_80036764_ovl_01_4B0(p,0xb,0xf,0);
    if(x) { *((u8*)p+0x2b7)=1; *((u8*)p+6)=*((u8*)p+6)+1; }
    break;
  }
 }
}
