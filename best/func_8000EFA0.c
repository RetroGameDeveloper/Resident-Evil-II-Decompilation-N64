void func_8000F020(void){u32 var_t0=0x80000000;u32 var_t1=var_t0+0x2000-0x10;do{var_t0+=16;}while(var_t0<var_t1);}
void func_8000EFA0(u32 arg0,s32 arg1){u32 t0,t1,t2,t3;if(arg1<=0)return;t3=0x2000;if((u32)arg1<t3){t0=arg0;t1=arg0+arg1;if(t0>=t1)return;t1-=16;t2=t0&15;t0-=t2;do{t0+=16;}while(t0<t1);}else{func_8000F020();}}
extern void *D_800129D4;s32 func_800072E0(void);s32 func_80007300(s32);
void func_8000E980(s32 arg0){s32 v0=func_800072E0();u32 *p=(u32*)D_800129D4;u32 *a1;p[2]=arg0;a1=(u32*)p[2];*(u16*)p=1;p[3]=a1[1];func_80007300(v0);}
