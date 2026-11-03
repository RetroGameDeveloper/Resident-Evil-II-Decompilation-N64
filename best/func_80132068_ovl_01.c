void func_80132068_ovl_01(void){}
extern s32 jtbl_800BA800_ovl_01[];
s32 func_800AC948_ovl_01(s32 x){u32 v=(u32)x&255; if(v>=0x80&&v<0x86){switch(v){case 0x80:v=0x80;break;case 0x81:v=0x82;break;case 0x82:v=0xA0;break;case 0x83:v=0xA1;break;case 0x84:v=0x83;break;case 0x85:v=0x84;break;}}return v;}
extern f64 D_800BA680_ovl_01; extern f32 D_800BA688_ovl_01,D_800BA68C_ovl_01; extern s32 D_80147F44;
s32 func_800A5CB0_ovl_01(s32 arg0){f64 d;f32 x;d=(f64)arg0;if(arg0<0)d+=D_800BA680_ovl_01;x=(f32)d*D_800BA688_ovl_01;x=x/(f32)D_80147F44;if(x>=D_800BA68C_ovl_01)return ((s32)(x-D_800BA68C_ovl_01))|0x80000000;return (s32)x;}
extern s8 D_80143EA8; void func_800A5C9C_ovl_01(void){D_80143EA8=1;}
