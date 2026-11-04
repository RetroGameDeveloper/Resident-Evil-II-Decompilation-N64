s32 func_8017BE48_ovl_02(s32); s32 func_8017D59C_ovl_02(void); s32 func_8017DCF8_ovl_02(void);
extern volatile s32 D_801856EC_ovl_02,D_801856F0_ovl_02,D_801856F4_ovl_02,D_801856F8_ovl_02,D_801856FC_ovl_02; extern void *D_80186C14_ovl_02;
void func_8017D3E0_ovl_02(void) {
 s32 value;
 *(s32*)((char*)D_80186C14_ovl_02+0x42c)=0;
 func_8017BE48_ovl_02(10);
 func_8017BE48_ovl_02(3);
 func_8017BE48_ovl_02(16);
 value=D_801856EC_ovl_02;
 if((u32)(value-2)<2) {
  D_801856F8_ovl_02=func_8017BE48_ovl_02(1);
  D_801856F0_ovl_02=func_8017BE48_ovl_02(3)-1;
 }
 if(value==3) {
  D_801856FC_ovl_02=func_8017BE48_ovl_02(1);
  D_801856F4_ovl_02=func_8017BE48_ovl_02(3)-1;
 }
 func_8017DCF8_ovl_02();func_8017D59C_ovl_02();
}
