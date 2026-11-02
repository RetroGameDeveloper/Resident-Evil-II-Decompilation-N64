s32 func_80047B34_ovl_01(void *,u8); extern s32 D_800C7650_ovl_01; extern s32 D_80160848_ovl_03; extern s32 D_80160B9C_ovl_03; extern s32 D_80160BB8_ovl_03; extern s32 D_80161400_ovl_03; extern s32 D_8016141C_ovl_03;
#define F(p,t,o) (*(t *)((u8 *)(p)+(o)))
void func_8015E168_ovl_03(void) {
 s32 *temp_a0; s32 *var_s0; s32 *var_s1; s32 *var_s3; s16 var_v0; u32 var_s2; u32 var_s4; u8 temp_a1;
 var_s4=0; var_s3=&D_80160BB8_ovl_03;
 do {
  var_s2=0; var_s1=&D_80160848_ovl_03; var_s0=var_s3;
loop_2:
  F(var_s0,s32,0)=0x808080; F(var_s0,s8,3)=0; F(var_s0,s32,0xC)=&D_8016141C_ovl_03;
  F(var_s0,u16,4)=F(var_s1,u16,0); F(var_s0,u16,6)=F(var_s1,u16,2); F(var_s0,u16,0x10)=F(var_s1,u16,4); F(var_s0,u16,0x12)=F(var_s1,u16,6); F(var_s0,u8,8)=F(var_s1,u8,8); F(var_s0,u8,9)=F(var_s1,u8,9);
  if(var_s2<0x2C) { F(var_s0,s16,0xA)=0; }
  else {
   if(var_s2==0x30) { var_v0=0x140; goto block; }
   if(var_s2>=0x31) { F(var_s0,s32,0xC)=&D_80161400_ovl_03; F(var_s0,s16,0xA)=0; goto block2; }
   var_v0=0x100;
block: F(var_s0,s16,0xA)=var_v0;
block2: ;
  }
  temp_a1=F(var_s1,u8,0xA); var_s1+=3; temp_a0=var_s0; var_s0+=10; var_s2++; func_80047B34_ovl_01(temp_a0,temp_a1);
  if(var_s2<0x34) goto loop_2;
  var_s4++; var_s3=(s32*)((u8*)var_s3+0x14);
 } while(var_s4<2);
 if(F(&D_800C7650_ovl_01,s32,0x19A3C)&1) { F(&D_80160B9C_ovl_03,u16,0x7A0)+=16; F(&D_80160B9C_ovl_03,u16,0x7B4)+=16; F(&D_80160B9C_ovl_03,u16,0x7A2)-=4; F(&D_80160B9C_ovl_03,u16,0x7B6)-=4; }
}
