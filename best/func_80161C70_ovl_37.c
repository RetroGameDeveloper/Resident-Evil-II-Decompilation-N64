extern u32 D_800C7650_ovl_01[];
extern void (*D_80161F00_ovl_37[])(s32,s32);
void func_80161C70_ovl_37(void *arg0) {
 if (!(D_800C7650_ovl_01[0x18000/4+0x1A60/4] & 0x20000000)) {
  ((void (*)(s32,s32))D_80161F00_ovl_37[*((u8*)arg0+4)])(*((s32*) ((char*)arg0+0x1A4)), *((s32*)((char*)arg0+0x218)));
 }
}
extern s32 func_80089D34_ovl_01(s32,s32,s32);
extern s32 func_80033A0C_ovl_01(void*,s32,s32,s32,void*);
void func_80161CD0_ovl_37(void *arg0) {
 *(s32*)((char*)arg0+4)=0x02000000;
 *(s32*)((char*)arg0+0x1E8)=0;
 func_80089D34_ovl_01(*(s32*)((char*)arg0+0x1A4),*(s32*)((char*)arg0+0x218),0);
 *(s8*)((char*)arg0+0x25D)=0;
 *(s32*)((char*)arg0+0x284)=0;
 func_80033A0C_ovl_01((char*)arg0+0x208,0,0,0,(char*)arg0+0x28);
 *(s8*)(*(s32*)((char*)arg0+0x208)+0xE)=0;
 *(s32*)((char*)arg0+0x2B4)=0; *(s32*)((char*)arg0+0x2B8)=0; *(s32*)((char*)arg0+0x2BC)=0;
 *(s32*)((char*)arg0+0x2C0)=0; *(s32*)((char*)arg0+0x2C4)=0; *(s32*)((char*)arg0+0x2C8)=0;
 *(s32*)((char*)arg0+0x2CC)=0; *(s32*)((char*)arg0+0x2D0)=0; *(s32*)((char*)arg0+0x2D4)=0; *(s32*)((char*)arg0+0x2D8)=0;
 *(s32*)arg0 |= 0xA; *(u16*)((char*)arg0+0x1AA) |= 0x4000;
}
