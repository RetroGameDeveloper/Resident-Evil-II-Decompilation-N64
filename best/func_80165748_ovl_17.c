extern void func_80089D34_ovl_01(void*,s32,s32,s32); extern void func_80166FBC_ovl_17(void*,s32,s32);
void func_80165748_ovl_17(void *p, s32 a1, s32 a2) {
 u8 *s2=(u8*)p+0x2b4; u8 v;
 if(!*((u8*)p+6)){*(u32*)((u8*)p+0x1e8)=0x0c000700; v=*((u8*)p+0x2d8); *((u8*)p+6)=1;
 if(v!=1)func_80166FBC_ovl_17(0,0,0);
 *(u32*)p|=0x42;}
 func_80089D34_ovl_01(p,a1,a2,0x200);
 if(*(u32*)*(u32*)((u8*)p+0x214)&0x80000){
 *(u32*)p &=0xe3ffffff;
 if(*(s16*)((u8*)p+0x1a8)){v=*((u8*)p+0x2d8);if(v>=9){if(v<11)func_80166FBC_ovl_17(p,0,7);else if(v==16)func_80166FBC_ovl_17(p,0,7);}
 *((u8*)p+0x2d6)=0xff;if(!*((u8*)p+0x2da)){*((u8*)p+0x2da)=3;*((u8*)p+0x2db)=1;}}
 *(u32*)((u8*)p+4)=0x07000000;if(!s2[0x21]){*(u16*)((u8*)p+0x1f2)=1;s2[0xc]=1;}
 }
}
