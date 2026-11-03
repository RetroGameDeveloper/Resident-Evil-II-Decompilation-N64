extern u8 D_801479F8; extern u8 D_80148180;
void func_800A94E0_ovl_01(void){ s32 i=0; if(D_801479F8){ u8 *p=&D_80148180; do{*p=0;i++;p+=0x18;}while(i<(s32)D_801479F8);}}
s32 func_800A5BF0_ovl_01(s32,s32); extern u8 D_801479F8; extern u8 D_80148180;
void func_800A9518_ovl_01(void){s32 i=0; if(D_801479F8){u8 *p=&D_80148180;do{if(*p==1)func_800A5BF0_ovl_01(*(s32*)(p+8),*(s32*)(p+12));i++;p+=0x18;}while(i<(s32)D_801479F8);}}
extern u8 D_801362B0_ovl_01; s32 func_800AF074_ovl_01(void); extern u8 D_801443E8;
s32 func_800A81E8_ovl_01(void){s32 a0,s0=-1,v0; u8 *p; if(D_801362B0_ovl_01){a0=func_800AF074_ovl_01();if(a0!=-1){v0=a0&255;do{p=&D_801443E8+v0*0x1a0;if(*(s32*)(p+0x60)==a0){s0=0;*(s32*)(p+0x24)|=8;}a0=*(s32*)(p+0x10);v0=a0&255;}while(a0!=-1);}}return s0;}
extern f64 D_800BA710_ovl_01,D_800BA718_ovl_01;
f64 func_800A61F8_ovl_01(f64 arg0){f64 f; s32 v;if(D_800BA710_ovl_01<=arg0){f=arg0-D_800BA710_ovl_01;v=(s32)f|0x80000000;}else v=(s32)arg0;f=(f64)v;if(v<0)f+=D_800BA718_ovl_01;return f;}
