typedef struct Obj26 { u8 pad0[7]; u8 state; u8 pad8[0x1DC]; s32 unk1E4; s32 unk1E8; u8 pad1EC[0x28]; s32 *unk214; u8 pad218[0xA0]; u8 unk2B8; u8 pad2B9; u16 unk2BA; } Obj26;
typedef struct Glob26 { u8 pad0[8]; u8 flag; u8 pad9[0x22B]; void *unk234; } Glob26;
extern Glob26 D_800E10D0_ovl_01;
extern s32 func_80033634_ovl_01();
extern void func_80052C00_ovl_01(s32,s32);
extern void func_80052C9C_ovl_01(s32,s32,s32,s32);
extern void func_80052D40_ovl_01(s32,s32,s32,s32);
extern void func_80077D48_ovl_01(s32,void*);
extern s32 func_80089D34_ovl_01(void*,s32,s32,s32);
extern void func_80166B18_ovl_26(void*,s32,s32);
void func_80163D58_overlay_026(Obj26 *arg0, s32 arg1, s32 arg2) {
 s32 flags; s32 i; s32 *p; u8 state=arg0->state;
 switch(state) {
 case 0:
  arg0->state=1; arg0->unk1E8=0x0A003F00;
  func_80052C9C_ovl_01(20,120,0,1); func_80052D40_ovl_01(30,120,40,20);
 case 1:
  if(func_80089D34_ovl_01(arg0,arg1,arg2,0x40)){arg0->state=2;arg0->unk1E8=0x3F00;}
  flags=*arg0->unk214;
  if(flags&0x10000){
   func_80052C00_ovl_01(30,0); func_80052C9C_ovl_01(3,200,5,0); func_80052C9C_ovl_01(3,200,15,0); func_80052C9C_ovl_01(8,200,25,0); func_80052D40_ovl_01(60,200,0,33);
   *(s32*)((u8*)D_800E10D0_ovl_01.unk234+0xBC0)&=~1;
   if(D_800E10D0_ovl_01.flag&1) for(i=15,p=(s32*)((u8*)D_800E10D0_ovl_01.unk234+0x1608);i<19;i++,p=(s32*)((u8*)p+0x178))*p&=~1;
   func_80077D48_ovl_01(7,arg0); func_80166B18_ovl_26(&D_800E10D0_ovl_01,8,8);
  }
  if(flags&0x20000){
   func_80166B18_ovl_26(arg0,(func_80033634_ovl_01()&255)%3+11,4);
   if(!(func_80033634_ovl_01()&3)) func_80166B18_ovl_26(arg0,(func_80033634_ovl_01()&255)%3+11,5);
  }
  if(flags&0x40000)func_80166B18_ovl_26(&D_800E10D0_ovl_01,8,8);
  break;
 case 2:
  arg0->unk2B8=1;arg0->unk2BA=0x100;
  if(!(func_80033634_ovl_01()&15))func_80166B18_ovl_26(arg0,(func_80033634_ovl_01()&255)%3+11,4);
  func_80089D34_ovl_01(arg0,arg1,arg2,0x40);break;
 }
}
