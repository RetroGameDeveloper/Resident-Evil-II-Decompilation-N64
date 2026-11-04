extern s32 func_8002751C_ovl_01(s32,s32); extern s32 func_80027530_ovl_01(s32,s32,s32,s32); extern s32 func_8017001C_ovl_07(s32,s32,s32);
extern s16 D_800E9128_ovl_01; extern s8 D_80171D29_ovl_07; extern u16 D_80171D44_ovl_07;
void func_8016EC28_ovl_07(void) {
 u16 temp_a0, temp_v1; s32 flag;
 temp_a0=D_80171D44_ovl_07;
 if(temp_a0&2) {
  flag=(D_800E9128_ovl_01<0);
  if(flag || D_800E9128_ovl_01==0x7fff) {
   temp_v1=temp_a0^2; D_80171D44_ovl_07=temp_v1;
   if(temp_v1&4) { D_80171D44_ovl_07=temp_a0^6; D_80171D29_ovl_07=3; }
   else if(temp_v1&8) { D_80171D44_ovl_07=temp_a0^10; D_80171D29_ovl_07=1; }
   else D_80171D29_ovl_07=0;
   if(D_80171D44_ovl_07&0x2000) { D_80171D44_ovl_07^=0x2000; func_8017001C_ovl_07(-1,0,1); }
   func_8002751C_ovl_01(2,1);
  }
 } else { func_80027530_ovl_01(0x200,0x100,7,1); D_80171D29_ovl_07=2; D_80171D44_ovl_07|=2; }
}
