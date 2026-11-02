void func_800334F8_ovl_01(void *arg0, void *arg1, s32 arg2, s32 arg3) {
 u32 temp_v0,temp_v1; s32 var_v1; u16 temp_a0_3,temp_t1,temp_t2,temp_t3,temp_v0_2,temp_v1_2; u8 var_v0; void *temp_a0,*temp_a0_2;
 temp_v0=*(u32*)((u8*)arg2+(*(u8*)((u8*)arg0+0x1e8)*4));
 if(arg3!=0){var_v1=arg2+(temp_v0>>16);var_v0=((temp_v0&0xffff)-*(u8*)((u8*)arg0+0x1e9))-1;}else{var_v0=*(u8*)((u8*)arg0+0x1e9);var_v1=arg2+(temp_v0>>16);}
 temp_v1=(u32)*(u32*)((u8*)arg1+4)>>18;
 temp_a0=(u8*)arg1+*(u16*)arg1+(temp_v1*(*(u32*)((u8*)var_v1+(var_v0*4))&0xfff)*4);
 temp_t1=*(u16*)((u8*)temp_a0+4);temp_t2=*(u16*)((u8*)temp_a0+8);temp_t3=*(u16*)((u8*)temp_a0+10);
 if(*(u8*)((u8*)arg0+0x1e9)==0){*(u32*)((u8*)arg0+0x2a8)=0;*(u16*)((u8*)arg0+0x2ac)=0;if(arg3!=0){*(u16*)((u8*)arg0+0x2a8)=temp_t1;*(u16*)((u8*)arg0+0x2aa)=temp_t3;*(u16*)((u8*)arg0+0x2ac)=temp_t2;
 temp_a0_2=(u8*)arg1+*(u16*)arg1+(temp_v1*(*(u32*)((u8*)arg2+*(u32*)((u8*)arg2+(*(u8*)((u8*)arg0+0x1e8)*4)))&0xfff)*4);
 *(s16*)((u8*)arg0+0x2a8)=temp_t1+*(u16*)((u8*)temp_a0_2+4);*(u16*)((u8*)arg0+0x2aa)=temp_t3+*(u16*)((u8*)temp_a0_2+10);*(u16*)((u8*)arg0+0x2ac)=temp_t2+*(u16*)((u8*)temp_a0_2+8);}}
 temp_v0_2=*(u16*)((u8*)arg0+0x2a8);temp_v1_2=*(u16*)((u8*)arg0+0x2aa);temp_a0_3=*(u16*)((u8*)arg0+0x2ac);
 *(u16*)((u8*)arg0+0x2a8)=temp_t1;*(u16*)((u8*)arg0+0x2aa)=temp_t3;*(u16*)((u8*)arg0+0x2ac)=temp_t2;
 *(s16*)((u8*)arg0+0x1e0)=temp_t1-temp_v0_2;*(s16*)((u8*)arg0+0x1e2)=temp_t3-temp_v1_2;*(s16*)((u8*)arg0+0x1e4)=temp_t2-temp_a0_3;
}
