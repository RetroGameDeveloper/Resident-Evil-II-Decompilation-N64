typedef struct { u8 pad[0x6]; } ObjA;
extern u8 D_800C7650_ovl_01[];
s32 func_80032EA4_ovl_01(void*, void*, void*, s32);
s32 func_80089D34_ovl_01(s32);
void func_801626DC_ovl_29(ObjA *arg0) {
 u8 *base;
 base=D_800C7650_ovl_01+0x18000;
 func_80032EA4_ovl_01(arg0,*(void**)(base+0x1AA8),*(void**)(base+0x1AB0),0x400);
 func_80032EA4_ovl_01(arg0,*(void**)(base+0x1AA8),*(void**)(base+0x1AB0),0x320);
 *((s8*)arg0+5)=1;
}
void func_80162744_ovl_29(void *arg0) {
 u8 v; u8 f;
 v=*((u8*)arg0+6);
 if(v==0) { f=*((u8*)arg0+0x25c); *(s32*)((u8*)arg0+0x1e8)=0x1f00; *((u8*)arg0+6)=1; *((s8*)((u8*)arg0+0x207))=1; *((s8*)((u8*)arg0+0x206))=1; *((u8*)arg0+0x25c)=f&0xfd; }
 if(v==0 || v==1) func_80089D34_ovl_01(0x80);
}
void func_801643A8_ovl_29(void *arg0) {
 u8 *base; s32 x;
 base=D_800C7650_ovl_01+0x18000;
 x=func_80032EA4_ovl_01(arg0,*(void**)(base+0x1aa8),*(void**)(base+0x1ab0),0x400);
 if ((x<<16)==0 && *(u32*)((u8*)arg0+0x28c)>=0x9c5) *(s32*)((u8*)arg0+4)=0x01010000;
}
extern s16 D_80169814_ovl_29[];
void func_80164DD0_ovl_29(void *arg0) {
 u16 f; s16 *p;
 f=*(u16*)((u8*)arg0+0x270);
 if(f&0x10) { *(s32*)((u8*)arg0+4)=0x01010000; p=D_80169814_ovl_29+(f&15)*2; *(s32*)((u8*)arg0+0x28)=p[0]; *(s32*)((u8*)arg0+0x30)=p[1]; }
}
