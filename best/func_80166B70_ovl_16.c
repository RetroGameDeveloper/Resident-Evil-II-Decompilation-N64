typedef s32 (*AnimFn)(void *,s32,s32,s32);
void func_80166B70_ovl_16(void *arg0) {
 u8 *p=arg0;
 switch(p[6]) {
 case 0:
  func_80077D48_ovl_01(8,arg0);
  func_80162B24_ovl_16(arg0,(u8*)0x80167368+(p[0x2CB]<<3),1);
  *(u32 *)p|=2; p[6]++;
 case 1:
  p[6]+=((AnimFn)0x80036d44)(arg0,0x15,0xF,0);
  if(*(s16 *)(p+0x2D6)<-100) *(s16 *)(p+0x2D6)+=25;
  break;
 case 2:
  p[0x2B7]=1; p[6]++;
 }
}
