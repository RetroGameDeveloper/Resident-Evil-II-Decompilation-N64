s32 func_80165BE8_ovl_13(s32,s32); extern s32 D_800C7650_ovl_01;
void func_801621D4_ovl_13(void *arg0){s32 var_a1=0;u32 temp_a2;u32 base; s16 *p;
base=(u32)&D_800C7650_ovl_01+0x18000;p=(s16*)base;
if(p[0x1c72/2]>=0)goto L;if(*(s8*)((s8*)arg0+0x2bd)>0)goto L;if(*(u32*)((s8*)arg0+0x28c)<0x708)goto E;
L:temp_a2=*(u32*)((s8*)arg0+0x28c);if(temp_a2<0x709)var_a1=1;
base=(u32)&D_800C7650_ovl_01+0x18000;p=(s16*)base;if(p[0x1a7a/2]&4){if(temp_a2<0x1519)var_a1=1;}
base=(u32)&D_800C7650_ovl_01+0x18000;p=(s16*)base;if(p[0x1a7a/2]&1)var_a1=1;
if(*(u16*)((s8*)arg0+0x2c6)&1){u16 x=*(u16*)((s8*)arg0+0x1f4)-1;*(u16*)((s8*)arg0+0x1f4)=x;if((s16)x==-1)var_a1=1;}if(var_a1)func_80165BE8_ovl_13(1,1);E:;}
