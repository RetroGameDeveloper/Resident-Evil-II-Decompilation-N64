extern s32 func_80032EA4_ovl_01(void*,s32,s32,s32); extern u8 D_800C7650_ovl_01[]; extern u8 D_800E10D0_ovl_01[];
s32 func_801669C4_ovl_26(void *arg0){
 s32 *var_s0; s32 temp_s1; s32 var_s3; s8 var_a0; u8 temp_v0; void *temp_s2;
 temp_s2=(u8*)arg0+0x2B4;
 if(*((u8*)arg0+0x2B4)) var_s0=(s32*)(*(s32**)(D_800C7650_ovl_01+0x18000))[0x1D3C/4]; else var_s0=(s32*)D_800E10D0_ovl_01;
 if(*((u8*)arg0+0x2B4))var_s3=*(s32*)((u8*)arg0+0x290)&0x3fffffff;else var_s3=*(s32*)((u8*)arg0+0x28C);
 temp_s1=func_80032EA4_ovl_01(arg0,var_s0[0x28/4],var_s0[0x30/4],0x100);
 func_80032EA4_ovl_01(arg0,var_s0[0x28/4],var_s0[0x30/4],0x700);
 if(*(s16*)((u8*)var_s0+0x1F2)>=0){
 if(var_s3>=0x5DD){*((u8*)temp_s2+0xB)=0x5A;goto done;}
 temp_v0=*((u8*)temp_s2+0xB);if(temp_v0){*((u8*)temp_s2+0xB)=temp_v0-1;goto done;}
 var_a0=2;if(temp_s1&0x8000)var_a0=1;
 if(!*((u8*)temp_s2+var_a0+0x21)&&!(*(u16*)(D_800C7650_ovl_01+0x18000+0x1A78)&0x80)){*((s8*)temp_s2+0xF)=var_a0;*((s8*)temp_s2+0xD)=4;*((s8*)temp_s2+(var_a0&255)+0x21)=15;return 1;}}
done:return 0;}
