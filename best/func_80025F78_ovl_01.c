typedef struct { u8 x[0x24]; } Obj;
extern Obj D_800C4E58_ovl_01, D_800C4EA8_ovl_01;
extern s32 D_800C4ED4_ovl_01, D_800C4EEC_ovl_01, D_800C5688_ovl_01;
void func_80025F78_ovl_01(s32 arg0, u16 arg1, void *arg2) {
 Obj *p;
 s32 t;
 if (arg0 & 0xFFFF) {
  p=&D_800C4EA8_ovl_01;
  D_800C4EEC_ovl_01=*(s32*)((u8*)arg2+0x18);
 } else {
  p=&D_800C4E58_ovl_01;
  D_800C4ED4_ovl_01=*(s32*)((u8*)arg2+0x18);
  D_800C5688_ovl_01=*(s32*)((u8*)arg2+0x14);
 }
 p->x[0x16]=arg1;
 t=arg1;
 *(s32*)(p->x+0x10)=*(s32*)((u8*)arg2+0x14);
 if (t==0) { p->x[0x17]=2; }
 else if (t==2) { p->x[0x17]=1; }
 *(s16*)(D_800C4EA8_ovl_01.x+0x1E)=0x400; *(s16*)(D_800C4E58_ovl_01.x+0x1E)=0x400;
 *(s16*)(D_800C4EA8_ovl_01.x+0x1C)=0x400; *(s16*)(D_800C4E58_ovl_01.x+0x1C)=0x400;
 *(s32*)(D_800C4EA8_ovl_01.x+0x20)=0; *(s32*)(D_800C4E58_ovl_01.x+0x20)=0;
 *(s16*)(D_800C4EA8_ovl_01.x+2)=0x500; *(s16*)(D_800C4E58_ovl_01.x+2)=0x500;
 *(s16*)(D_800C4EA8_ovl_01.x+0xE)=0x3C0; *(s16*)(D_800C4E58_ovl_01.x+0xE)=0x3C0;
 *(s16*)(D_800C4EA8_ovl_01.x+0xA)=0x3C0; *(s16*)(D_800C4E58_ovl_01.x+0xA)=0x3C0;
 *(s16*)(D_800C4EA8_ovl_01.x+6)=0x500; *(s16*)(D_800C4E58_ovl_01.x+6)=0x500;
}
