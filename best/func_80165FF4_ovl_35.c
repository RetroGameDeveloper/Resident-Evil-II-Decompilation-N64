s32 func_80165F34_ovl_35(s32,s32,s32,s32);s32 func_80077D48_ovl_01(s32,void*);s32 func_80059E30_ovl_01(s32,s32);s32 func_80033174_ovl_01(void*,void*);s32 func_80166158_ovl_35(s32,s32);s32 func_80052C00_ovl_01(s32,s32);s32 func_80052C9C_ovl_01(s32,s32,s32);s32 func_801661AC_ovl_35(s32);s32 func_80080D94_ovl_01(s32,s32,s32);extern s32 D_800C7650_ovl_01;extern u8 D_800E10D0_ovl_01;
s32 func_80165FF4_ovl_35(void *arg0){
 s32 result; s32 check; s32 *g=(s32*)((u8*)&D_800C7650_ovl_01+0x18000);
 result=func_80165F34_ovl_35(0,0,0x73a,0x180);
 if(result){func_80077D48_ovl_01(4,arg0);check=func_80059E30_ovl_01(0x14,0);
  if(check!=2){result=func_80033174_ovl_01(arg0,&D_800E10D0_ovl_01);func_80166158_ovl_35(0,result&0xff);func_80052C00_ovl_01(3,0);func_80052C9C_ovl_01(8,0xfa,0);return 1;}
  func_801661AC_ovl_35(0);g[0x1a80/4]|=2;return 2;
 }
 if((*(s32*)((u8*)g+0x1a5c)&0x10000000)&&func_80165F34_ovl_35(arg0,1,0x73a,0x180)){
  func_80077D48_ovl_01(4,arg0);check=func_80080D94_ovl_01(0x14,0,0);
  if(check!=2){result=func_80033174_ovl_01(arg0,(void*)((u8*)g+0x1d3c));func_80166158_ovl_35(1,result&0xff);return 1;}
  func_801661AC_ovl_35(1);return 2;
 }
 return 0;
}
