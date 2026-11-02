s32 func_80036764_ovl_01_5E0(void *,s32,s32,s32);
void func_80168074_ovl_14(void *arg0) {
 u8 *p=arg0; u8 state=p[6]; s32 x; s32 v;
 if(state==0) {
  func_80077D48_ovl_01(8,arg0);
  func_80162B24_ovl_14(arg0,(u8*)0x80168B74+(p[0x2CB]<<3),1);
  *(u32 *)p|=2; p[6]++;
 }
 if(state==1 || state==0) {
  v=func_80036764_ovl_01_5E0(arg0,0x1D,0xF,0);
  p[6]+=v;
  x=*(s16 *)(p+0x2D6);
  if(x < -100) *(s16 *)(p+0x2D6)=x+25;
 } else if(state==2) { p[0x2B7]=1; p[6]++; }
}
