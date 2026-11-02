extern u8 D_80166700_ovl_35[];
void func_80164604_ovl_35(void *arg0,s32 arg1,s32 arg2) {
 void *s1=(u8*)arg0+0x2B4; u8 v;
 func_80077D48_ovl_01(3,arg0);
 *(s8*)((u8*)s1+0x2A)=0;
 if(!*(u8*)((u8*)arg0+0x2BC)) {
  *(u8*)((u8*)arg0+0x2BA)=0; *(u8*)((u8*)arg0+0x2BB)=0;
  *(u32*)((u8*)arg0+0x1E8)=0x03000000;
  v=*(u8*)((u8*)arg0+0x2BD); *(u8*)((u8*)arg0+0x2BD)=v|0x80;
  func_80089D34_ovl_01(arg0,arg1,arg2,0x100);
  *(u32*)((u8*)arg0+4)=0x01000000;
  *(s8*)((u8*)s1+0x2B)=1; *(s8*)((u8*)s1+0x14)=0;
  *(u8*)((u8*)s1+0xC)=*(u8*)((u8*)arg0+5); *(u8*)((u8*)s1+0xD)=*(u8*)((u8*)arg0+6);
  *(u8*)((u8*)s1+0xE)=*(u8*)((u8*)arg0+7); return;
 }
 if(*(u8*)((u8*)arg0+0x2C5)) { func_80164354_ovl_35(arg0,arg1,arg2); return; }
 *(u8*)((u8*)arg0+6)=1;
 if(!*(u8*)((u8*)arg0+0x2D7)) func_80077D48_ovl_01(3,arg0);
 *(u8*)((u8*)arg0+0x2D7)=0;
 func_801661F0_ovl_35(arg0,0,D_80166700_ovl_35[*(u8*)((u8*)arg0+5)-1]);
 func_8016472C_ovl_35(arg0,arg1,arg2);
}
