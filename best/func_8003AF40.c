typedef struct {u8 pad0[4]; u16 unk4; u16 unk6; u8 pad8[0xE]; u16 unk16; u8 unk18[3]; s8 unk1b; u8 pad1c[0x26]; s16 unk42; u8 pad44[6]; s16 unk4a;} State;
extern State *D_800EBB34_ovl_01;
s32 func_80033634_ovl_01(s32,s32,s32,void*);
void func_8003C208_ovl_01(void);
void func_8000DUMMY(void);
void func_8003AF40(void){
 State *p=D_800EBB34_ovl_01; s32 x,y; s16 t; s8 st;
 if(p->unk4a){if(p->unk16>=0x10 && p->unk4>=0x1001)func_8003C208_ovl_01();p->unk16++;}
 st=p->unk1b;
 switch(st){
 case 0:p->pad0[0]=0;p->unk18[0]=0;break;
 case 1:
  if(p->unk42){p->unk42--;x=(u16)p->unk6*0x3d4;y=x/1000;p->unk4=(u16)(p->unk4*0x3de/1000);p->unk6=(u16)(y-(x>>31));}
  else p->unk1b=0;break;
 case 2:
  if(p->unk42){p->unk42--;x=(u16)p->unk6*0x3ea;y=x/1000;p->unk4=(u16)(p->unk4*0x3f1/1000);p->unk6=(u16)(y-(x>>31));}
  else {p->unk1b=1;t=((func_80033634_ovl_01(2,1,0x10620000,p)&255)%11)+0x5a;p->unk42=t;} break;
 case 3:
  if(p->unk42)p->unk42--;
  else {p->unk1b=2;p->unk42=(func_80033634_ovl_01(2,1,0,p)&7)+0x1e;} break;
 }
}
