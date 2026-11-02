extern s32 D_80012878,D_80012884; extern s32 func_800B4064_ovl_01(s32); void func_80004C34(void){s32 x=D_80012878; s32 v=func_800B4064_ovl_01(x);if(!(v&255))D_80012884=3;}
typedef struct{ s32 off,len;} E; extern s32 D_80012874,D_800128A8; extern s32 func_800888CC_ovl_01(s32,void*,s32);
s32 func_80004C9C(s32 i){E*p=(E*)(D_80012874+i*8);s32 off=p->off,len=p->len;u8 b[8];if(len){if(len&1)len++;func_800888CC_ovl_01(D_800128A8+off+len,b,8);return *(s32*)(b+4);}return 0;}
s32 func_80004EE0(s32 a0,s32 a2,s32 a3){s32 t0=a0,s0;E*p;s32 off;if(t0==65535)return 0;if(t0==-1)return 0;p=(E*)(D_80012874+t0*8);s0=p->len;if(p->off<0||s0==0)for(;;){}off=D_800128A8+p->off+a2;if(s0&1)s0++;func_800888CC_ovl_01(off,(void*)a3,a3);return s0;}
s32 func_80005074(u16*a0,u16*a1){s32 t2=-1,t1=1;s16 c,n;u16 v;u16*t0=a0;do{c=(s16)*a1++;if(c>0){n=c-1;if(n!=-1){do{*a0++=*a1++;n--;}while(n!=-1);}}else if(c<0){v=*a1++;n=c+1;if(n!=1){do{*a0++=v;n++;}while(n!=1);}}}while(c);return(u8*)a0-(u8*)t0;}
