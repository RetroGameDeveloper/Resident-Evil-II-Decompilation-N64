extern s32 D_800C7650_ovl_01; extern u8 D_800E10D0_ovl_01;
s32 func_80033174_ovl_01(void *, void *); s32 func_80059E30_ovl_01(s32,s32);
s32 func_80080D94_ovl_01(void *,s32,s32); void func_801677B0_ovl_17(s32,s32); void func_80167804_ovl_17(s32);
s32 func_801672B0_ovl_17(u8 *p,s32 flag,s32 threshold) {
 u8 *state; s32 value, result;
 if(flag) { state=(u8 *)((u32)&D_800C7650_ovl_01+0x19D3C); value=*(s32 *)(p+0x290)&0x3fffffff; }
 else { state=&D_800E10D0_ovl_01; value=*(s32 *)(p+0x28C); }
 if(value>=threshold) return 0;
 if(state[0x26F]&0x80) return 0;
 if(flag) result=func_80080D94_ovl_01(p,20,0);
 else result=func_80059E30_ovl_01(20,0);
 if(result==2) {
  func_80167804_ovl_17(flag);
  return 1;
 }
 func_801677B0_ovl_17(flag,func_80033174_ovl_01(p,state)&255);
 return 1;
}
