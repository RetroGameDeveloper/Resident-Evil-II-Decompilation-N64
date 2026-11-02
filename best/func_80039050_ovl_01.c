extern u8 D_800EBD48_ovl_01[];
s32 func_80039050_ovl_01(s32 arg0,s32 arg1,s8 arg2,s32 arg3) {
 u32 i=0; u8 *p;
 if(arg3) {
  p=D_800EBD48_ovl_01;
  do { if(p[0x1c]==(u8)arg0 && p[0x1e]==(u8)arg1 && *(s32 *)(p+0x6c)==arg3) * (s8*)p=arg2; i++; p+=0x7c; } while(i<0x60);
  return 0;
 }
 p=D_800EBD48_ovl_01;
 do { if(p[0x1c]==(u8)arg0 && p[0x1e]==(u8)arg1) *(s8*)p=arg2; i++; p+=0x7c; } while(i<0x60);
 return 0;
}
