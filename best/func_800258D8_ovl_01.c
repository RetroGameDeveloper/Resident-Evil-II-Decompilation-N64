extern s32 D_800C4E40_ovl_01,D_800C5278_ovl_01,D_800C527C_ovl_01,D_800C5684_ovl_01,D_800C5688_ovl_01,D_800E90B0_ovl_01,D_8010B670_ovl_01,D_8010B688_ovl_01,D_80113790_ovl_01,D_80113794_ovl_01;
extern u32 D_8010B680_ovl_01,D_8010B684_ovl_01;
void func_800258D8_ovl_01(void *arg0,void *arg1,void *arg2,void *arg3) {
 s32 i,n; u16 *p; u32 base,end; s32 tmp;
 func_80004954(); func_800269B8_ovl_01(0xC); D_800E90B0_ovl_01=-1;
 func_80025BA8_ovl_01(0xC); D_800C5688_ovl_01=D_8010B688_ovl_01;
 func_8006BE40_ovl_01(); func_8000E350(1);
 base=D_8010B680_ovl_01; end=D_8010B684_ovl_01;
 i=D_80113790_ovl_01; n=D_80113794_ovl_01;
 p=(u16*)base;
 if(end<base) p=(u16*)end;
 n=i*n*2-1;
 if(n!=-1) {
  do { *p++=0; --n; } while(n!=-1);
 }
 func_8008AF30_ovl_01(3,D_8010B684_ovl_01);
 tmp=func_8008B0CC_ovl_01(0x3A98); D_800C4E40_ovl_01=tmp; D_800C5684_ovl_01=tmp+0x3A98;
 func_8008AF30_ovl_01(1);
 func_80025474_ovl_01(arg0); func_800254F4_ovl_01(arg1); func_80025574_ovl_01(arg2); func_8002584C_ovl_01(arg3);
 func_80085110_ovl_01(); D_8010B670_ovl_01=func_8004CFFC_ovl_01(func_8008B028_ovl_01(1));
 func_8008AF30_ovl_01(3); D_800C5278_ovl_01=func_8008AF60_ovl_01(0xAF800); D_800C527C_ovl_01=func_8008AF60_ovl_01(0x5C000); func_8008AF30_ovl_01(1);
}
