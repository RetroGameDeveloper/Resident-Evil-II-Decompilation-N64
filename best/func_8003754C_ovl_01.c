extern s32 func_80004CFC(u16,s32,s32,void*);
extern unsigned short func_80084514_ovl_01(s32);
extern u8 D_800B86A0_ovl_01[];
extern u8 D_800EBAD0_ovl_01[];
extern u8 D_800EBB38_ovl_01[];
extern u8 D_800EBB48_ovl_01[];
extern u8 D_800EBC48_ovl_01[];
s32 func_8003754C_ovl_01(u8 *arg0, s32 arg1, s32 arg2) {
 s32 var_s3=arg1;
 u32 var_s4=0;
 s32 temp_s0;
 s32 *temp_s2;
 s32 temp_s1;
 u32 temp_v0;
 u32 temp_v0_2;
 u8 temp_v0_3;
 do {
  temp_v0_3=*(arg0+var_s4);
  *(var_s4+arg2+D_800EBB38_ovl_01)=temp_v0_3;
  temp_s0=temp_v0_3&0xff;
  var_s4+=1;
  if(temp_s0==0xff) return var_s3;
  temp_s1=(var_s3+7)&~7;
  temp_s0*=4;
  temp_s2=(s32*)(temp_s0+D_800EBC48_ovl_01);
  var_s3=temp_s1;
  *temp_s2=temp_s1;
  temp_v0=func_80004CFC(*(u16*)((temp_v0_3&0xff)*2+D_800EBAD0_ovl_01),temp_s1,1,D_800B86A0_ovl_01);
  *(s32*)(temp_s0+D_800EBB48_ovl_01)=temp_s1;
  var_s3=temp_s1+temp_v0;
  temp_v0_2=func_80084514_ovl_01(*(s32*)temp_s1);
  temp_s1+=(((temp_v0_2&0xffff)*2+(temp_v0_2>>16)+2)*4);
  *temp_s2=temp_s1;
 } while(var_s4<8);
 return (var_s3+7)&~7;
}
