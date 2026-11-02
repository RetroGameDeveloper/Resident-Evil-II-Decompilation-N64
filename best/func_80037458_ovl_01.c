s32 func_8003754C_ovl_01(s32 *, s32, s32, s32);
s32 func_8003768C_ovl_01(s32, s32);
extern u8 D_800EBD48_ovl_01[], D_800EBB38_ovl_01[];
extern s32 D_800EBB48_ovl_01[], D_800EBC48_ovl_01[];
extern u8 D_800C7650_ovl_01[];
s32 func_80037458_ovl_01(void) {
 s32 i=0x60;
 u8 *p=D_800EBD48_ovl_01+0x2E80;
 s32 *obj,*a;
 do { p-=0x7C; i--; *(s16*)(p+0x18)=0; } while(i);
 i=8;
 do {
   u8 x;
   p=D_800EBB38_ovl_01+i;
   x=*p;
   if(x==0xFF) { i=0x10; }
   else { D_800EBB48_ovl_01[x]=-1; D_800EBC48_ovl_01[x]=-1; *p=0xFF; i++; }
 } while((u32)i<0x10);
 obj=*(s32 **)(D_800C7650_ovl_01+0x1827C);
 a=*(s32 **)((u8*)obj+0x50);
 if(a) {
   if(*a!=-1) *(s32 *)(D_800C7650_ovl_01+0x18284)=func_8003754C_ovl_01(a,*(s32 *)(D_800C7650_ovl_01+0x18284),8,0xFF);
   func_8003768C_ovl_01(*(s32*)((u8*)obj+0x5C),*(s32*)((u8*)obj+0x58));
 }
 return 0;
}
