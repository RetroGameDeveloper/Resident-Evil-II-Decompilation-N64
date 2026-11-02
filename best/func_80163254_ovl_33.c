extern u8 D_800C7650_ovl_01[]; s32 func_80033634_ovl_01(); void func_80089D34_ovl_01(void*,s32,s32,s32); void func_80166684_ovl_33(void*,s32,s32,s32);
void func_80163254_ovl_33(S_func_80163254_ovl_33_arg0 *arg0,s32 arg1,s32 arg2){
 s32 temp_s0; s32 temp_s0_2; s32 temp_v0_3; u16 temp_v0_2; u32 temp_a1; u32 temp_hi; u32 temp_v0; u32 temp_v1_2; u8 temp_v1;
 temp_v1=*((u8*)arg0+6);
 switch(temp_v1){
 case 0:
  temp_s0=func_80033634_ovl_01();temp_v0=func_80033634_ovl_01()&0xFF;temp_a1=temp_v0>>1;temp_hi=temp_v0/90;
  *((u8*)arg0+6)=1;temp_v1_2=temp_hi;
  arg0->unk_1E8=(s32)(((((temp_s0&3)+9)<<24)+(((temp_v0-(temp_v1_2*90))&0xFF)<<16)+0x3F00));
  arg0->unk_1F6=(u16)((func_80033634_ovl_01(temp_v1_2*3,temp_a1)&0xF)+0x3C);arg0->unk_206=3;
 case 1:
  {u8*g=D_800C7650_ovl_01+0x18000;s32*q=*(s32**)(g+0x1CB4);func_80166684_ovl_33(arg0,q[20],q[21],8);}
  func_80089D34_ovl_01(arg0,arg1,arg2,0x40);temp_v0_2=arg0->unk_1F6-1;arg0->unk_1F6=temp_v0_2;
  if((s16)temp_v0_2==-1){
   temp_s0_2=func_80033634_ovl_01();temp_v0_3=func_80033634_ovl_01();
   temp_a1=(u32)temp_s0_2&0xFF;temp_v0=(u32)temp_v0_3&0xFF;
   arg0->unk_1E8=(s32)(((((temp_a1%3)+9)<<24)+((temp_v0%90)<<16)+0x3F00));
   arg0->unk_1F4=(s16)((func_80033634_ovl_01(((temp_v0/90)*3),temp_v0>>1)&0xF)+0x3C);
  }break;
 default:break;
 }
}
