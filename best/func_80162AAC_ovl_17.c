extern s32 func_80089D34_ovl_01(void*,void*,void*,s32); extern s32 func_80162BAC_ovl_17(void*,void*,void*); extern void func_8016716C_ovl_17(void*,s32,s32); extern void func_801678B8_ovl_17(void*); extern s32 func_80033634_ovl_01(void*);
void func_80162AAC_ovl_17(void *arg0, void *arg1, void *arg2) {
 u8 state=*((u8*)arg0+6); s32 one=1;
 switch(state) {
 case 0:
  *((u8*)arg0+6)=one; *(u32*)((u8*)arg0+0x1e8)=0x0b000300;
  func_8016716C_ovl_17(arg0,*((u8*)arg0+0x2be)+8,(s16)(*(u16*)((u8*)arg0+0x66)+*(u16*)((u8*)arg0+0x2b6)));
 case 1: *((u8*)arg0+6)+=func_80089D34_ovl_01(arg0,arg1,arg2,0x400); break;
 case 3:
  if(func_80162BAC_ovl_17(arg0,arg1,arg2)) {
 case 2:
   *(u32*)((u8*)arg0+4)=0x01000000;*(u16*)((u8*)arg0+0x2b4)=15;
  }
 }
 func_801678B8_ovl_17(arg0);func_80033634_ovl_01(arg0);
}
