typedef struct {u8 pad[0x3C];s32 **a;s32 **b;} Data;
void func_8002A7E4_ovl_01(void *arg0){
 void *base=arg0; Data *temp_s0; s32 temp_v1,count,var_t6;u8 *var_t5;
 s32 *temp_t0,*temp_t2,*var_t1,*var_t3; s32 temp_a0,temp_a0_2,temp_a2,temp_a2_2,temp_lo,temp_v1_2,temp_v1_3,temp_v1_4,temp_v1_5,var_a3;
 temp_s0=*(Data**)((u8*)base+0x168);temp_v1=*(s32*)((u8*)base+0x10C);count=*(s32*)((u8*)base+0x20);var_t5=*(u8**)((u8*)base+0xB0)+0x24;var_t6=0;
 if(count>0){do{
 temp_lo=(*(s32*)(var_t5-0x18)*(*(s32*)var_t5))/(*(s32*)((u8*)base+0x10C));
 temp_v1_2=var_t6*4;temp_t2=*(s32**)((u8*)temp_s0->a+temp_v1_2);temp_t0=*(s32**)((u8*)temp_s0->b+temp_v1_2);
 var_a3=0;if(temp_lo>0){var_t3=temp_t0;var_t1=temp_t2;do{
 temp_a0=var_a3-temp_lo;temp_v1_3=temp_lo*(temp_v1+1)+var_a3;temp_a2=temp_lo*(temp_v1+2)+var_a3;var_a3++;
 temp_a0_2=temp_a0*4;temp_v1_4=temp_v1_3*4;*(s32*)((u8*)temp_t2+temp_a0_2)=*(s32*)((u8*)temp_t2+temp_v1_4);temp_a2_2=temp_a2*4;*(s32*)((u8*)temp_t0+temp_a0_2)=*(s32*)((u8*)temp_t0+temp_v1_4);temp_v1_5=*var_t1;var_t1++;*(s32*)((u8*)temp_t2+temp_a2_2)=temp_v1_5;*(s32*)((u8*)temp_t0+temp_a2_2)=*var_t3;var_t3++;
 }while(var_a3<temp_lo);}
 var_t6++;var_t5+=0x50;
 }while(var_t6<count);}
}
