void func_8000F020(void){u32 p=0x80000000;u32 limit=p+0x2000-0x10;do{p+=16;}while(p<limit);}
void func_8000EFA0(u32 p,s32 n){u32 limit;if(n<=0)return;if((u32)n>=0x2000){func_8000F020();return;}limit=p+n;if(p>=limit)return;limit-=16;p&=~15u;do{p+=16;}while(p<limit);}
extern void *D_800129D4;s32 func_800072E0(void);s32 func_80007300(s32);
void func_8000E980(s32 a0){s32 v=func_800072E0();u32 *p=(u32*)D_800129D4;u32 *q;p[2]=a0;q=(u32*)p[2];*(u16*)p=1;p[3]=q[1];func_80007300(v);}
s32 func_8000E860(void);
s32 func_8000E800(s32 a0){u32 m=0x1fffffff;u32 v;if((u32)(a0-0x80000000)>m){if((u32)(a0+0x60000000)>m)return func_8000E860();}return a0&m;}
