extern u8 D_800C7650_ovl_01[]; extern u8 D_800E10D0_ovl_01[];
void func_801630E8_ovl_26(void *p,s32 x,s32 y) {
 s32 addr; s32 *data; s32 t,u;
 if(*(u8*)((u8*)p+0x2B4)) { addr=(s32)D_800C7650_ovl_01; addr+=0x18000; data=*(s32**)(addr+0x1D3C); } else data=(s32*)D_800E10D0_ovl_01;
 if(*(u8*)((u8*)p+6)==0) { *(u8*)((u8*)p+6)=1; t=func_80166CE4_ovl_26(p,*(s32*)((u8*)data+0x28),*(s32*)((u8*)data+0x30),1); u=-t; *(s16*)((u8*)p+0x1F4)=u; if((u<<16)==0) { u=-1; if((func_80033634_ovl_01()&1)==0) u=1; *(s16*)((u8*)p+0x1F4)=u; } *(u16*)((u8*)p+0x1F6)=0x400; *(s16*)((u8*)p+0x1F4)=*(s16*)((u8*)p+0x1F4)*6; }
 *(u16*)((u8*)p+0x66)=*(u16*)((u8*)p+0x66)+(u16)*(s16*)((u8*)p+0x1F4); *(u16*)((u8*)p+0x1F6)=*(u16*)((u8*)p+0x1F6)-6;
 func_800334F8_ovl_01(p,x,y,0); func_80089D34_ovl_01(p,x,y,0x40);
 if(*(s16*)((u8*)p+0x1F6)<0) { *(s8*)((u8*)p+5)=1; *(s16*)((u8*)p+6)=0; }
 func_801628C8_ovl_26(p);
}
