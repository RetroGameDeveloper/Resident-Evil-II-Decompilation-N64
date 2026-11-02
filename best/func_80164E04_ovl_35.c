extern void (*D_80166764_ovl_35[])(void *);
extern void (*D_80166700_ovl_35[])(void *);
extern void (*D_80166728_ovl_35[])(void *, s32, s32);
extern void func_80035AAC_ovl_01_108(void *);
extern void func_80077D48_ovl_01(s32, void *);
extern s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern void func_801661F0_ovl_35(s32, u8);
extern void func_80166520_ovl_35(void *, s32);
extern void func_8016472C_ovl_35(void *, s32, s32);
extern void func_80165248_ovl_35(void *, s32, s32);
extern void func_80164604_ovl_35(void);
void func_801650BC_ovl_35(void *arg0) {
 ((void (*)(void))D_80166764_ovl_35[((u8*)arg0)[5]-1])();
 ((s16*) ((u8*)arg0+0x64))[0]=0;
 func_80035AAC_ovl_01_108(arg0);
}
void func_80165140_ovl_35(void *arg0,s32 arg1,s32 arg2) {
 func_801661F0_ovl_35(0, ((u8*)arg0)[5] + ((u8*)D_80166700_ovl_35)[0]-1);
 func_80077D48_ovl_01(6,arg0);
 if (!((u8*)arg0)[0x2bc]) {
  ((s16*)((u8*)arg0+6))[0]=0x200;
  func_80165248_ovl_35(arg0,arg1,arg2);
 } else {
  if (((u8*)arg0)[0x2c5]) { *((s16*)((u8*)arg0+0x68))=0; func_80166520_ovl_35(arg0,0); }
  *((s16*)((u8*)arg0+6))=0x100;
  func_8016472C_ovl_35(arg0,arg1,arg2);
 }
}
void func_80165248_ovl_35(void *arg0,s32 arg1,s32 arg2) {
 if (!((u8*)arg0)[7]) {
  ((u8*)arg0)[7]=1;
  *(u32*)((u8*)arg0+0x1e8)=0x07000f00;
  *(s32*)((u8*)arg0+0x2c)=*(s16*)((u8*)arg0+0x25e);
 }
 if (func_80089D34_ovl_01(arg0,arg1,arg2,0x100)) *(u32*)((u8*)arg0+4)=0x07000000;
}
void func_80164E04_ovl_35(void *arg0,s32 arg1,s32 arg2) {
 if (!((u8*)arg0)[6]) { func_80164604_ovl_35(); ((u8*)arg0)[0x2cf]=0x14; }
 else { ((void (*)(void *,s32,s32))D_80166728_ovl_35[((u8*)arg0)[6]])(arg0,arg1,arg2); func_80089D34_ovl_01(arg0,arg1,arg2,0x100); }
}
