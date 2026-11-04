s32 func_80033634_ovl_01();
void func_80077D48_ovl_01(s32, void *);
void func_80166B18_ovl_26(void *, u8, s32);
extern u8 D_801672BC_ovl_26[];
void func_8016512C_ovl_26(void *arg0) {
 u8 *p=arg0; s32 r; u8 *table=D_801672BC_ovl_26;
 if (!p[0x2D9]) { p[0x2C1]=6; p[0x2C3]=3; }
 r=func_80033634_ovl_01();
 func_80166B18_ovl_26(arg0,table[r&7],0);
 if (p[5]==0x12) {
  r=func_80033634_ovl_01(2);
  func_80166B18_ovl_26(arg0,table[r&7],1);
 }
 func_80077D48_ovl_01(2,arg0);
 *(s32 *)(p+4)=((u32)p[0x2CA]<<16)+((u32)p[0x2CB]<<8)+p[0x2CC+0]+0x1000000;
}
