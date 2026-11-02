extern void func_801658F4_ovl_16(void *,s32 *,s32);
extern u32 D_800E10D0_ovl_01;
extern s32 func_801674BC_ovl_17;
typedef void (*Fn)(void *,s32,s32);
extern volatile Fn D_80167478_ovl_16[];
#define HANDLE (*(s32 *)((u8 *)&func_801674BC_ovl_17+4))
void func_80165828_ovl_16(void *arg0,s32 arg1,s32 arg2) {
 u8 *p=arg0; s32 a1=arg1; s32 x; u8 v;
 if(p[5]!=255) {
  v=p[5]; p[0x2cb]=v;
  x=p[0xc];
  if(HANDLE==x) HANDLE=0;
  p[0x2c4]=(u32)&D_800E10D0_ovl_01;
  p[5]=255; p[0x2b5]=2;
  func_801658F4_ovl_16(arg0,&HANDLE,255);
  if(p[0x26e]) { *(u32*)p &= ~0xe; *(u16*)(p+0x2c8)&=0xfd0f; }
 }
 D_80167478_ovl_16[p[0x26e]](arg0,a1,arg2);
}
