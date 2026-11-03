extern s32 func_80036764_ovl_01_2FC(void *, s32 *, s32);
extern s32 func_80036764_ovl_01_510_560(void *, s32, s32);
void func_80161F80_overlay_016(void *arg0) {
 u8 *p=(u8*)arg0; s32 x,y;
 x=*(s16*)(p+0x2D0); y=*(s16*)(p+0x2D4);
 if(!(*(u16*)(p+0x2C8)&0x10) && func_80036764_ovl_01_2FC(p+0x28,&x,0x30)) *(u16*)(p+0x2C8)|=0x10;
 if(!(*(u16*)(p+0x2C8)&0x20) && func_80036764_ovl_01_510_24(p+0x2C,*(s16*)(p+0x2D2),0x30,0)) *(u16*)(p+0x2C8)|=0x10;
 func_80036764_ovl_01_510_560(p,*(u8*)(p+0x2B4)<<10,0x20);
}
