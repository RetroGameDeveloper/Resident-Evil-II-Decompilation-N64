static __inline__ u8 __repair_inline(u8 a) { return a; }
s32 func_80165140_ovl_35(void*,s32,s32); s32 func_801661F0_ovl_35(void*,s32,s32); s32 func_80166324_ovl_35(void*,s32,u32); extern s32 D_800C7650_ovl_01; extern s32 D_801667B0_ovl_35;
void func_801652A8_ovl_35(void *arg0,s32 arg1,s32 arg2){s32 counter;u8 temp_s0;u32 var_s0; s32 var_v1;u8 *temp_a0,*temp_a1; s32 **tab;
temp_s0=__repair_inline(*((u8*)arg0+5));
if(*((u8*)arg0+6)==0){
if(temp_s0==9)func_801661F0_ovl_35(arg0,0,4);
func_801661F0_ovl_35(arg0,2,1);
if(*((u8*)arg0+0x26e)<3||temp_s0!=9){
if(temp_s0==9||temp_s0==0x11||temp_s0==0x13){var_s0=0;var_v1=0;do{var_s0++;temp_a1=*(u8**)((u8*)arg0+0x234)+var_v1;var_v1+=0x178;*(s32*)(temp_a1+0x60)=0x502040;}while(var_s0<13);func_801661F0_ovl_35(arg0,0,13);}
temp_a0=*(u8**)((u8*)arg0+0x234);temp_a1=temp_a0+0x2f0;if((*(u8*)((u8*)&D_800C7650_ovl_01+0x21962)&8)){*(s32*)(temp_a0+0x2f0)|=0x44a;*(s16*)(temp_a1+0x134)=-30;*(s16*)(temp_a1+0x132)=-20;*(s16*)(temp_a1+0x136)=2;*(s16*)(temp_a1+0x13c)=-5;*(s16*)(temp_a1+0x138)=0;*(s32*)(temp_a1+0x60)=0x101010;*(s16*)(temp_a1+0x124)=0xc00;*(s16*)(temp_a1+0x126)=0xc00;*(s16*)(temp_a1+0x128)=0xc00;*(u16*)(temp_a1+0x130)=*(u16*)((u8*)arg0+0x66);}
counter=0xe;do{func_80166324_ovl_35(arg0,1,counter);func_80166324_ovl_35(arg0,0xc,counter);counter++;}while(counter<0x12);}
func_80165140_ovl_35(arg0,arg1,arg2);return;}
tab=(s32**)((u8*)&D_801667B0_ovl_35);((void(*)(void*,s32,s32))((u8*)tab+4*((u8*)arg0)[6]))(arg0,arg1,arg2);
}
