extern volatile s32 D_8013146C_ovl_01,D_80134460_ovl_01;extern u32 D_800EA230_ovl_01[];
void func_80025D60_ovl_01(void){if(D_8013146C_ovl_01)D_80134460_ovl_01=1;}
void func_8002E838_ovl_01(void){}
void func_80030F48_ovl_01(u8 **a0,s32 a1,u8 **a2,s32 a3,s32 t0,s32 t1){s32 v1;u8 *src,*dst;a0+=a1;a2+=a3;if(t0<=0)return;do{src=*a0++;dst=*a2++;v1=t1;while(v1!=0){*dst++=*src++;v1--;}t0--;}while(t0>0);}
u32 func_80031A50_ovl_01(u32 key){s32 lo=-1,hi=0x1D9,mid;u32 val;do{mid=(hi+lo)/2;val=D_800EA230_ovl_01[mid]&0x1FFFFFFF;if(val>=key)hi=mid;else lo=mid;}while(hi-lo>=2);val=D_800EA230_ovl_01[hi];if(key!=(val&0x1FFFFFFF))return 5;return val>>29;}
