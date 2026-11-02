extern int D_800117D0,D_800117F8; extern s32 func_800038F0(); extern s32 func_800042F4(); extern s32 func_8000305C(); extern s32 func_800022BC();
s32 func_80003ED8(s32 arg0,s32 arg1,s32 *arg2,void *arg3){s32 v1=func_800038F0(0x13,0x13,0,0,arg2,arg1,arg3); if(v1==-3){*(void**)((u8*)arg3+24)=&D_800117D0; return v1;} if(v1==-5){func_800042F4(*arg2,arg3);v1=-3;*(void**)((u8*)arg3+24)=&D_800117F8;}return v1;}
void func_800073D0(u32 a0,s32 a1){u32 t0,t1,t2,t3=0x4000;if(a1<=0)return;if((u32)a1>=t3){t0=0x80000000;t1=t0+t3-0x20;do{t0+=0x20;}while(t0<t1);return;}t0=a0;t1=a0+a1;if(t0>=t1)return;t1-=0x20;t2=t0&31;t0-=t2;do{t0+=0x20;}while(t0<t1);}
void func_8000319C(s32 a0,s32 a1,s32 a2){func_8000305C(0xE,a0,a1,a2);}
s32 func_80002FE8(void *p){return -2;}
