void func_80077D48_ovl_01(s32,void*); void func_80162B24_ovl_16(void*,void*,s32); s32 func_80036764_ovl_01_510_24(void*,s32,s32,s32); extern s32 D_801674C0_ovl_16; extern u8 func_80167368_ovl_16[];
void func_80166A68_ovl_16(void *p) {
 u8 *b=p; s32 r;
 switch(b[6]) {
 case 0:
   func_80077D48_ovl_01(8,p);
   D_801674C0_ovl_16=0;
   func_80162B24_ovl_16(p,func_80167368_ovl_16+b[0x2cb]*8,0);
   *(s32*)b|=2;
   b[6]++;
   r=func_80036764_ovl_01_510(p,20);
   b[6]+=r;
   if(*(s16*)(b+0x2d6)>=-999) *(s16*)(b+0x2d6)-=50;
   break;
 case 5:
   b[6]++;
   r=func_80036764_ovl_01_510_24(p,11,15,0);
   if(r) {b[0x2b7]=1;b[6]++;}
   break;
 }
}
