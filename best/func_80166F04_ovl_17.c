extern s32 D_800E10D0_ovl_01; extern s32 D_800C7650_ovl_01[]; extern void *D_800E1008;
s32 func_80032EA4_ovl_01(void *,s32,s32,s32); s32 func_80066804_ovl_01(s32,s16,s32,s32);
s32 func_80166F04_ovl_17(void *arg0,s32 arg1){s32*var_v1; s32 temp_v0; s32 var_a3; u16 temp_s0,temp_s1,temp_s2;
if(((u8*)arg0)[0x2d3]!=0){var_v1=(s32*)((u8*)D_800C7650_ovl_01+0x19d3c);var_a3=arg1<<16;}else{var_v1=&D_800E10D0_ovl_01;var_a3=arg1<<16;}
temp_s1=*(u16*)((u8*)arg0+0x64);temp_s2=*(u16*)((u8*)arg0+0x68);temp_s0=*(u16*)((u8*)arg0+0x66);
*(u16*)((u8*)arg0+0x64)=0;*(u16*)((u8*)arg0+0x68)=0;*(u16*)((u8*)arg0+0x66)=(((u8*)arg0)[0x2cc]<<10)&0xfff;
temp_v0=func_80032EA4_ovl_01(arg0,var_v1[10],var_v1[12],var_a3>>16)<<16;
*(u16*)((u8*)arg0+0x64)=temp_s1;*(u16*)((u8*)arg0+0x66)=temp_s0;*(u16*)((u8*)arg0+0x68)=temp_s2;return temp_v0>>16;}
s32 func_80166E50_ovl_17(void *arg0,s16 arg1){s32 **var_a1; s32 *temp_v1;
if(func_80066804_ovl_01((s32)((u8*)arg0+0x28),arg1,1<<((u8*)arg0)[0x1a2],0x400)!=0){var_a1=(s32**)&D_800E1008;if(D_800E1008!=0){temp_v1=*var_a1;while(temp_v1!=0){if(temp_v1==*(s32**)((u8*)arg0+0x2c4)){var_a1+=4;}else if((u32)((s32*)temp_v1)[3]<(u32)(-(*(s32*)((u8*)arg0+0x2c))/1800)){var_a1+=4;}else{return 1;}temp_v1=*var_a1;}}}return 0;}
