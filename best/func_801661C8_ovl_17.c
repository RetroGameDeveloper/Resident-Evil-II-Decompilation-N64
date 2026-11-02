extern u8 D_800C7650_ovl_01[];
s32 func_80166FBC_ovl_17(void *, s32, s32, ...);
void func_801661C8_ovl_17(void *arg0) {
 u8 *p=arg0; u8 *t=*(u8 **)(p+0x234); s32 x; u32 i; u16 angle;
 p[0x25C]|=1; x=*(s32 *)(t+0x1BE8);
 if(D_800C7650_ovl_01[0x21962]&8) x|=0x4A;
 *(s32 *)(t+0x1BE8)=x;
 angle=*(u16 *)(p+0x66); angle+=0x800;
 *(s16 *)(t+0x132)=-0xF0; *(s16 *)(t+0x138)=0; *(s16 *)(t+0x134)=0; *(s16 *)(t+0x136)=0xF; *(s16 *)(t+0x13C)=0; *(s32 *)(t+0x60)=0x2F2F2F; *(s16 *)(t+0x130)=angle;
 func_80166FBC_ovl_17(arg0,0x13,1,0x2F2F2F);
 for(i=0;i<4;i++) func_80166FBC_ovl_17(arg0,0x13,2);
}
