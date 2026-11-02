extern s32 func_80032B8C_ovl_01(void *, s32);
extern s32 func_800334F8_ovl_01(void *, void *, void *, s32);
extern s32 func_80033634_ovl_01(void);
extern s32 func_80033678_ovl_01(void *);
extern s32 func_80089D34_ovl_01(void *, void *, void *, s32);
extern u8 D_80166D5C_ovl_12[];
typedef struct { u8 pad0[6]; s16 state; u8 pad8[0x1E0]; u32 unk1E8; u8 pad1ec[0x1A]; u8 unk206; u8 pad207[0x55]; u8 unk25c; } Obj;
void func_80164350_ovl_12(Obj *arg0, void *arg1, void *arg2) {
 u8 temp_v0, temp_v1;
 temp_v1=*(u8*)((u8*)arg0+7);
 switch(temp_v1) {
 case 0:
  *(u8*)((u8*)arg0+7)=1; arg0->unk25c &= 0xFD;
  arg0->unk1E8=(D_80166D5C_ovl_12[func_80033634_ovl_01()&7]<<24)+0xF00;
  func_800334F8_ovl_01(arg0,arg1,arg2,0);
  func_80089D34_ovl_01(arg0,arg1,arg2,0x100);
  arg0->unk206=(func_80033634_ovl_01()&3)+1;
 case 1:
  func_800334F8_ovl_01(arg0,arg1,arg2,0);
  if(func_80089D34_ovl_01(arg0,arg1,arg2,0x100)) {
   temp_v0=arg0->unk206-1; arg0->unk206=temp_v0;
   if((temp_v0<<24)==0) *(s16*)((u8*)arg0+6)=0x100;
   else arg0->unk1E8=(D_80166D5C_ovl_12[func_80033634_ovl_01()&7]<<24)+0xF00;
  }
  if((u8)arg0->unk1E8==0xB) func_80032B8C_ovl_01(arg0,0);
 }
 func_80033678_ovl_01(arg0);
}
