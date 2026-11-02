typedef void (*Cb)(void*,void*,void*);
extern volatile Cb D_80166F10_ovl_32[]; extern volatile Cb D_80166F24_ovl_32[];
void func_80162368_ovl_32(void *arg0, void *arg1, void *arg2) {
 u32 mode; u32 idx; void *p0; void *p1;
 p0=arg0; p1=arg1; mode=*(u16*)((u8*)p0+0x2C2)&6;
 if(mode==4) { *(u32*)((u8*)p0+4)=0x03000000; goto out; }
 idx=*((u8*)p0+5);
 D_80166F10_ovl_32[idx](p0,0,0);
 idx=*((u8*)p0+5);
 D_80166F24_ovl_32[idx](p0,p1,arg2);
out: ;
}
extern s32 D_800C7650_ovl_01; s32 func_80033634_ovl_01(void); s32 func_800377B0_ovl_01(s32,s16,s32,s16*);
void func_80163D5C_ovl_32(void *arg0) {
 s16 delta[3]; void *s0; void *ptr; s32 flag;
 ptr=arg0;
 s0=*(void**)((u8*)ptr+0x234);
 flag=(s32)&D_800C7650_ovl_01+0x18000;
 delta[0]=*(u16*)(flag+0x1A4E)-*(u16*)((u8*)s0+0x2F0+0x4E);
 delta[1]=*(u16*)(flag+0x1A52)-*(u16*)((u8*)s0+0x2F0+0x52);
 delta[2]=*(u16*)(flag+0x1A56)-*(u16*)((u8*)s0+0x2F0+0x56);
 s0=(u8*)s0+0x328;
 func_800377B0_ovl_01(0x05042710,*(s16*)((u8*)ptr+0x66),(s32)s0,delta);
 flag=func_80033634_ovl_01();
 func_800377B0_ovl_01(0x040F1000|((flag&0xff)<<2),*(s16*)((u8*)ptr+0x66),(s32)s0,delta);
}
