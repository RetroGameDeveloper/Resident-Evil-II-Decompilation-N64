s32 func_80008F30(s32 a0){s32 v1=0,a1=15,a2,v0;do{v0=v1&0x10;v0=v0!=0;v0=-v0;a2=v0&0x15;v1<<=1;v0=a0&0x400;if(!v0){v1&=255;}else{v1=(v1&255)|1;}a0<<=1;v0=v1^a2;a1--;v1=v0;}while(a1>=0);return v0&31;}
u8 *func_8000DE40(u8 *p,s32 ch){s32 c=ch&255;u8 *q=p;if(*q!=c){for(;;){if(!*q)return 0;q++;if(*q==c)return q;}}return q;}
void func_8000DED0(void **p,void *x){void *v=*p;if(v){for(;;){if(v==x){*p=*(void**)v;return;}p=(void**)v;v=*(void**)v;if(!v)return;}}}
void func_800073D0(u32 a0,s32 a1){u32 t0,t1,t2,t3=0x4000;if(a1<=0)return;if((u32)a1>=t3){t0=0x80000000;t1=t0+t3-0x20;do{t0+=0x20;}while(t0<t1);return;}t0=a0;t1=a0+a1;if(t0>=t1)return;t1-=0x20;t2=t0&31;t0-=t2;do{t0+=0x20;}while(t0<t1);}
