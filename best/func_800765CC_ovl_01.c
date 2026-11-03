extern void func_800B20D8_ovl_01(s32); extern void func_80004F98(s32);
void func_80076074_ovl_01(s32 arg0) { if ((u8)arg0) { func_800B20D8_ovl_01(1); func_80004F98(0); } else { func_800B20D8_ovl_01(0); func_80004F98(1); } }
typedef struct { u8 pad[0x11c]; u16 vals[0x8e]; } Arg765CC; extern u8 D_800C7650_ovl_01[];
void func_800765CC_ovl_01(Arg765CC *arg0) { s32 i; u16 *src; u16 *dst; src=&arg0->vals[0x8e]; dst=(u16 *)(D_800C7650_ovl_01+0x215d8); for(i=0x8e;i!=0;i--) { src--; dst--; *dst=*src; } }
