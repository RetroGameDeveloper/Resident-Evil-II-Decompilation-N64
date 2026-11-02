void func_80165EFC_ovl_26(void *arg0, s32 arg1, s32 arg2) {
s32 state; s32 temp_s1; s32 var_v1; s8 temp_a0; u8 temp_v0; u8 temp_v1;
state=*(u8*)((u8*)arg0+6); temp_s1=*(s32*)((u8*)arg0+0x250);
switch(state){
case 1: break;
case 0:
*(s32*)((u8*)arg0+0x1e8)=0x01001f00;*(u8*)((u8*)arg0+6)=1;*(u8*)((u8*)arg0+0x206)=0x1f;
func_80052C9C_ovl_01(0x14,0x78,0,1);
func_80052D40_ovl_01(0x1e,0x78,0x28,0x14);break;
case 2:
if(*(u8*)((u8*)arg0+7)==0){*(u8*)((u8*)arg0+7)=1;*(u8*)((u8*)arg0+0x207)=1;}
temp_v0=*(u8*)((u8*)arg0+0x207)-1;*(u8*)((u8*)arg0+0x207)=temp_v0;
if((temp_v0<<24)==0){*(u16*)((u8*)arg0+6)=0x100;func_80077B0C_ovl_01(0x04020001,(u8*)arg0+0x28,1);func_80166B18_ovl_26(arg0,0,8);func_80052C00_ovl_01(10,0);func_80052C9C_ovl_01(6,0xfa,2);func_80052C9C_ovl_01(0x14,0x78,8);func_80052D40_ovl_01(0x14,0x78,0x28,0x1c);}break;
}
temp_a0=*(s8*)((u8*)arg0+0x206);
if(temp_a0!=0){*(u8*)((u8*)arg0+0x206)=(u8)temp_a0-1;var_v1=(temp_a0*0x11c)/31;}else var_v1=0;
func_80166E20_ovl_26(arg0,temp_s1,var_v1+0x4a3);
if(func_80089D34_ovl_01(arg0,arg1,arg2,0x80)!=0)*(u8*)((u8*)arg0+0x1ea)=0x1f;
}
