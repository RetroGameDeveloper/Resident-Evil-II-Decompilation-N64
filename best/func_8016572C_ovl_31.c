typedef struct { u8 pad[0x2BB]; } Obj;
extern s32 func_80032EA4_ovl_01(void *,void *,void *,s32);
extern u8 D_800C7650[];
void func_8016572C_ovl_31(Obj *p) {
 s32 r;
 s32 val;
 u8 *g;
 g=D_800C7650+0x18000;
 val=*(s32*)(p->pad+0x28C);
 func_80032EA4_ovl_01(p,*(void**)(g+0x1AA8),*(void**)(g+0x1AB0),0x5F4);
 r=func_80032EA4_ovl_01(p,*(void**)(g+0x1AA8),*(void**)(g+0x1AB0),0x200);
 func_80032EA4_ovl_01(p,*(void**)(g+0x1AA8),*(void**)(g+0x1AB0),0x400);
 if ((r<<16)==0) { if ((u32)val>=0x9C5) { if ((u32)val<0xFA0 && !p->pad[0x2BA]) *(s32*)(p->pad+4)=0x01020000; } }
 if (*(s16*)(p->pad+0x1F2)<0x2BC) { *(s32*)(p->pad+4)=0x01000000; p->pad[0x26F]|=0x80; }
}
