typedef struct { u8 pad[0x1D40]; } Globals;
extern s32 func_80166648_ovl_26(s32,void*,u16,s16);
extern u8 D_80167150_ovl_26[];
extern u8 D_800E10D0_ovl_01[];
extern u8 D_800DF650_ovl_01[];
s32 func_801667B8_ovl_26(s32 arg0) {
 s32 result; u16 *p; u16 *q; u32 count; u32 flag;
 p=(u16*)D_80167150_ovl_26; q=p+2; count=0;
 do {
  if (func_80166648_ovl_26(arg0,D_800E10D0_ovl_01,*p,(s16)*q)) return 1;
  flag=*(u32*)(D_800DF650_ovl_01+0x1A5C)&0x10000000;
  if (flag && func_80166648_ovl_26(arg0,*(void**)(D_800DF650_ovl_01+0x1D3C),*p,(s16)*q)) return 1;
  q+=4; p+=4; count++;
 } while(count<4);
 return 0;
}
