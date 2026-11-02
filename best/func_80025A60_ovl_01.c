typedef struct { unsigned char b[0x40]; } Obj;
extern unsigned int D_80018A80_ovl_01, D_80018B50_ovl_01, D_800C4E40_ovl_01, D_800C5280_ovl_01;
extern unsigned int D_800C5684_ovl_01, D_800C568C_ovl_01, D_800C5698_ovl_01, D_800C75DC_ovl_01;
extern unsigned int D_8001B740_ovl_01, D_800BB620_ovl_01, D_800C6958_ovl_01, D_800C75E0_ovl_01;
extern unsigned short D_800C4E56_ovl_01;
extern unsigned char D_800C4E58_ovl_01[], D_800C4EA8_ovl_01[];
extern unsigned int D_800C5688_ovl_01, D_8010B698_ovl_01, D_80113778_ovl_01;
extern void func_8000E210();
void func_80025474_ovl_01(Obj *p) {
 p->b[0]=1; *(unsigned int *)(p->b+0xC)=D_80018B50_ovl_01-D_80018A80_ovl_01;
 *(unsigned int *)(p->b+0x14)=0x1000; *(unsigned int *)(p->b+0x1C)=0x800;
 *(unsigned int *)(p->b+0x20)=D_800C5280_ovl_01; *(unsigned int *)(p->b+8)=D_80018A80_ovl_01;
 *(unsigned int *)(p->b+0x24)=0x400; *(unsigned int *)(p->b+0x30)=D_800C5698_ovl_01;
 *(unsigned int *)(p->b+0x38)=0; *(unsigned int *)(p->b+0x3C)=0;
 *(unsigned int *)(p->b+0x28)=D_800C4E40_ovl_01; *(unsigned int *)(p->b+0x2C)=D_800C5684_ovl_01;
 D_800C568C_ovl_01=(unsigned int)p;
}
void func_8002584C_ovl_01(Obj *p) {
 *(unsigned int *)(p->b+0x10)=D_8001B740_ovl_01; *(unsigned int *)(p->b+0x18)=D_800BB620_ovl_01;
 *(unsigned int *)(p->b+0x20)=0; *(unsigned int *)(p->b+0x24)=0;
 *(unsigned int *)(p->b+0x30)=D_800C6958_ovl_01; *(unsigned int *)(p->b+0x38)=0;
 *(unsigned int *)(p->b+0x3C)=0; D_800C75DC_ovl_01=(unsigned int)p;
}
void func_80025A60_ovl_01(void) {
 unsigned short *a; unsigned short *b;
 a=(unsigned short *)D_800C4E58_ovl_01; b=(unsigned short *)D_800C4EA8_ovl_01;
 a[1]=0x800; a[3]=0x800; a[5]=D_800C4E56_ovl_01*4; a[7]=D_800C4E56_ovl_01*4;
 a[8]=D_800C5688_ovl_01-(*(short *)(0x800C7650+0x21270)*(D_80113778_ovl_01*2));
 b[1]=0x800; b[3]=0x800; b[5]=D_800C4E56_ovl_01*4; b[7]=D_800C4E56_ovl_01*4;
 b[8]=D_8010B698_ovl_01;
 func_8000E210(a); func_8000E210(b);
}
int func_80025B0C_ovl_01(void) { return D_800C75E0_ovl_01; }
