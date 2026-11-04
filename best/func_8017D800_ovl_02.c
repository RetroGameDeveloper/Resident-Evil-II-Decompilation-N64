s32 func_8017BE48_ovl_02(s32); extern u8 D_80185420_ovl_02[]; extern s32 D_80186C14_ovl_02;
void func_8017D800_ovl_02(void){s32 i;u8 *idx;u8 *base;
if(func_8017BE48_ovl_02(1)){i=0;do{s32 v=func_8017BE48_ovl_02(8);idx=D_80185420_ovl_02+i;i++;base=(u8*)D_80186C14_ovl_02+(*(u8*)idx*4);*(s32*)(base+0x1c)=v;*(s32*)(base+0x21c)=v;}while(i<64);}
if(func_8017BE48_ovl_02(1)){i=0;do{s32 v=func_8017BE48_ovl_02(8);idx=D_80185420_ovl_02+i;i++;base=(u8*)D_80186C14_ovl_02+(*(u8*)idx*4);*(s32*)(base+0x11c)=v;*(s32*)(base+0x31c)=v;}while(i<64);}
if(func_8017BE48_ovl_02(1)){i=0;do{s32 v=func_8017BE48_ovl_02(8);idx=D_80185420_ovl_02+i;/*__repair_loop_weight*/do {i++;} while (0);base=(u8*)D_80186C14_ovl_02+(*(u8*)idx*4);*(s32*)(base+0x21c)=v;}while(i<64);}
if(func_8017BE48_ovl_02(1)){i=0;do{s32 v=func_8017BE48_ovl_02(8);idx=D_80185420_ovl_02+i;i++;base=(u8*)D_80186C14_ovl_02+(*(u8*)idx*4);*(s32*)(base+0x31c)=v;}while(i<64);}
}
