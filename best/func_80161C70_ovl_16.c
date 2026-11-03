extern u8 D_800C7650_ovl_01[],func_801126B0_ovl_01[],func_801126A8_ovl_01[],D_801126AC_ovl_01[],D_801126B4_ovl_01[];
s32 func_8008386C_ovl_01(s16,s32,s32,s16*);s32 func_8006A78C_ovl_01(s32);s32 func_80066804_ovl_01(s32*,s32,s32,s32);s32 func_80069F4C_ovl_01(s32*,s32,s32,s32);
s32 func_80161C70_ovl_16(void*arg0,s32 arg1){u8*p=arg0;s32 vec[3];s16 out[3];s16 h;s32 t;
func_8008386C_ovl_01(*(s16*)(p+0x66),*(s32*)(p+0x70),arg1,out);
vec[0]=*(s32*)(p+0x28)+out[0];vec[1]=*(s32*)(p+0x2c)+out[1];vec[2]=*(s32*)(p+0x30)+out[2];
if(func_8006A78C_ovl_01(*(s32*)(p+0x70))==0){func_80066804_ovl_01(vec,10,1<<p[0x1a2],0x200);return *(s32*)(D_800C7650_ovl_01+0x199b8)!=0;}
h=func_80069F4C_ovl_01(vec,0,0x600,0);*(s32*)(D_800C7650_ovl_01+0x199b8)=0;
if(*(s32*)D_801126AC_ovl_01)h=*(s16*)(func_801126B0_ovl_01+2);
if(h<vec[1]){*(s16*)(p+0x2d2)=h;return 1;}
if(*(s32*)D_801126B4_ovl_01>*(s32*)func_801126A8_ovl_01)*(s32*)func_801126A8_ovl_01=*(s32*)D_801126B4_ovl_01;
t=*(s32*)func_801126A8_ovl_01;
if(vec[1]<t){*(s16*)(p+0x2d2)=*(s16*)(func_801126A8_ovl_01+2);return 1;}return 0;}
