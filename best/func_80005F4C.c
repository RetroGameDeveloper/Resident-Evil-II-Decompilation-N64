extern u32 D_800128AC; extern u32 D_800C5278; void func_800051B8(s32); s32 func_8000521C(s32,s32,s32); s32 *func_80005438(s32,s32);
s32 *func_80005F4C(s32 arg0,s32 *arg1){
 s32 sp10; s32 *sp28; s32 **var_a0; s32 **var_s3; s32 *temp_s5; s32 *temp_v0_3; s32 *var_a1; s32 *var_s1; s32 *var_s4; s32 *var_v1; s32 temp_a0; s32 temp_s0; s32 temp_s7; s32 temp_v0; s32 temp_v0_2; s32 temp_v0_4; s32 var_s2; s32 var_s2_2;
 temp_a0=arg0&0xFFFF;if(temp_a0==0xFFFF)return arg1;
 var_s4=&sp10;var_s3=&sp28;D_800128AC=D_800C5278+0xAF800;func_800051B8(temp_a0);temp_s5=(s32*)D_800128AC;temp_s7=*temp_s5;var_s1=temp_s5+1;arg1[1]=temp_s7;var_v1=arg1+2;var_s2=temp_s7;
loop:var_s2--;if(var_s2!=-1){D_800128AC=(u32)temp_s5;temp_s0=var_s1[0];temp_v0=var_s1[1];var_s1+=2;*var_s3=var_v1;var_s3++;*var_v1=temp_v0;temp_v0_2=func_8000521C(((u32)temp_s0>>16)+0x49B &0xFFFF,(s32)(var_v1+1),-1);*var_s4=(s32*)temp_v0_2;var_v1=func_80005438((temp_s0&0xFFFF)+0x49B &0xFFFF,temp_v0_2);var_s4++;goto loop;}
 arg1[0]=((s32)((u8*)var_v1-(u8*)arg1)>>2)*4;var_s2_2=0;if(temp_s7>0){var_a1=&sp10;var_a0=&sp28;do{temp_v0_3=*var_a0;var_a0++;var_s2_2++;*var_v1=((s32)((u8*)temp_v0_3-(u8*)arg1)>>2)*4;temp_v0_4=*var_a1;var_a1++;var_v1[1]=((s32)((u8*)temp_v0_4-(u8*)arg1)>>2)*4;var_v1+=2;}while(var_s2_2<temp_s7);}
 if((u32)D_800128AC<(u32)var_v1)__builtin_trap();return var_v1;
}
