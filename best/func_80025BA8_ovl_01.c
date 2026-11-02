/* attempt7: explicit byte pointer scaling */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
#define M2C_FIELD(expr,type_ptr,offset) (*(type_ptr)((s8*)(expr)+(offset)))
#endif
M2C_UNK func_80025A60_ovl_01(s32); M2C_UNK func_80025B1C_ovl_01(s32,s32,void*,s32); M2C_UNK func_80042AC0_ovl_01();
extern u32 D_800C4E54_ovl_01; extern s32 D_800C4F00_ovl_01; extern M2C_UNK D_800C4F20_ovl_01; extern s32 D_800C5680_ovl_01;
extern s32 D_800C75E0_ovl_01,D_800C75EC_ovl_01,D_800C75F0_ovl_01,D_800C75F4_ovl_01,D_800C75F8_ovl_01,D_800C75FC_ovl_01,D_800C7600_ovl_01,D_800C7604_ovl_01,D_800C7608_ovl_01,D_800C760C_ovl_01,D_800C7610_ovl_01;
extern s32 D_80113778_ovl_01,D_8011377C_ovl_01,D_80113790_ovl_01,D_80113794_ovl_01;
void func_80025BA8_ovl_01(s32 arg0){s32 var_a1; s32 var_a3; u32 temp_lo; void*temp_v0; void*var_a2; var_a3=arg0; var_a2=(u8*)&D_800C4F20_ovl_01+((var_a3<<2)+(var_a3<<3)+(var_a3<<4)); temp_lo=D_80113790_ovl_01*D_80113794_ovl_01; var_a1=(M2C_FIELD(var_a2,s32*,0)-M2C_FIELD(var_a2,s32*,12))-M2C_FIELD(var_a2,s32*,8); if(temp_lo<(u32)(var_a1*((M2C_FIELD(var_a2,s32*,4)-M2C_FIELD(var_a2,s32*,20))-M2C_FIELD(var_a2,s32*,16)))){do{var_a2=(u8*)var_a2-40;var_a1=(M2C_FIELD(var_a2,s32*,0)-M2C_FIELD(var_a2,s32*,12))-M2C_FIELD(var_a2,s32*,8);var_a3=var_a3-1;}while(temp_lo<(u32)(var_a1*((M2C_FIELD(var_a2,s32*,4)-M2C_FIELD(var_a2,s32*,20))-M2C_FIELD(var_a2,s32*,16))));}D_800C75E0_ovl_01=var_a3;func_80025B1C_ovl_01(var_a3,var_a1,var_a2,var_a3);func_80042AC0_ovl_01();D_800C4F00_ovl_01=1;D_800C4E54_ovl_01=(u32)((D_80113778_ovl_01*D_8011377C_ovl_01)+511)>>9;func_80025A60_ovl_01(D_80113778_ovl_01);D_800C5680_ovl_01=var_a3;temp_v0=(u8*)&D_800C4F20_ovl_01+(var_a3*40);D_800C75EC_ovl_01=M2C_FIELD(temp_v0,s32*,0);D_800C75F0_ovl_01=M2C_FIELD(temp_v0,s32*,4);D_800C75F4_ovl_01=M2C_FIELD(temp_v0,s32*,8);D_800C75F8_ovl_01=M2C_FIELD(temp_v0,s32*,12);D_800C75FC_ovl_01=M2C_FIELD(temp_v0,s32*,16);D_800C7600_ovl_01=M2C_FIELD(temp_v0,s32*,20);D_800C7604_ovl_01=M2C_FIELD(temp_v0,s32*,24);D_800C7608_ovl_01=M2C_FIELD(temp_v0,s32*,28);D_800C760C_ovl_01=M2C_FIELD(temp_v0,s32*,32);D_800C7610_ovl_01=M2C_FIELD(temp_v0,s32*,36);}
