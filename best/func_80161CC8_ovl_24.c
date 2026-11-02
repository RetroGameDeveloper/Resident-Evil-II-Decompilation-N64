s32 func_80089D34_ovl_01(void *,s32,s32,s32); s32 func_80033A0C_ovl_01(void *,s32,s32,s32,void *); s32 func_80161D9C_ovl_24(void *);
void func_80161CC8_ovl_24(void *arg0) {
 *(s32 *)((u8 *)arg0+4)=0x01000000;
 func_80089D34_ovl_01(arg0,0,0,0x1000);
 *(s8 *)((u8 *)arg0+0x26F)=0x80;
 *(s32 *)arg0|=0x44A;
 func_80033A0C_ovl_01((u8 *)arg0+0x208,0,0,0,(u8 *)arg0+0x28);
 func_80161D9C_ovl_24(arg0);
}
