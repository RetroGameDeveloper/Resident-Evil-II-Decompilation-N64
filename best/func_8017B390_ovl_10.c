extern s32 D_800C7650_ovl_01; extern s16 D_8017E680_ovl_10; extern u8 D_8017E6D8_ovl_10;
s32 func_8004CDB8_ovl_01(s32); void func_8017B478_ovl_10(void);
void func_8017B390_ovl_10(void) {
 u32 base=(u32)&D_800C7650_ovl_01; u32 p; u8 x;
 p=*(u32 *)(base+0x19CD0); *(s16 *)((u8 *)&D_8017E680_ovl_10+2)=0; *(s16 *)((u8 *)&D_8017E680_ovl_10+4)=0;
 D_8017E6D8_ovl_10=*(u8 *)(p+8);
 if (*(u32 *)(base+0x19A5C)&0x10000000) {
  p=*(u32 *)(base+0x19D3C);
  if (*(u8 *)(p+4)==3) { if (*(u8 *)(p+8)&4) D_8017E6D8_ovl_10=15; else D_8017E6D8_ovl_10=14; }
 } else D_8017E6D8_ovl_10=*(u8 *)(base+0x19A88);
 if (((*(u8 *)(base+0x21962)&0xC)>>3)==0 || D_8017E6D8_ovl_10==15) *(u32 *)(base+0x19A3C)&=~0x100;
 for (;;) { func_8017B478_ovl_10(); func_8004CDB8_ovl_01(1); }
}
