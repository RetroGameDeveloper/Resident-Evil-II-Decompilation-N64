extern void func_80077D48_ovl_01(s32,void*); extern s32 func_80036C14_ovl_01(void*,s32,s32,s32); extern u8 D_80168B74_ovl_14[];
void func_80168208_ovl_14(void *a) {
 u8 *p=a; s32 one=1; s32 r;
 switch(p[6]) {
 case 0:
  func_80166FA4_ovl_14(p);
  func_80077D48_ovl_01(8,p);
  func_80162B24_ovl_25(p,D_80168B74_ovl_14+p[0x2cb]*8,0);
  p[0x1e8]=0;
  p[6]++;
 case 1:
  r=func_80036C14_ovl_01(p,9,0,0);
  p[6]=p[6]+r;
  break;
 case 2:
  p[6]=one+2;
  break;
 case 3:
  if(func_80036C14_ovl_01(p,11,15,0)) { p[0x2b7]=one;p[6]++; }
 }
}
