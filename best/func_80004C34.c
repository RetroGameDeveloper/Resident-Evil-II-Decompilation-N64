typedef struct{s32 off,len;} E;extern s32 D_80012874,D_800128A8; s32 func_800888CC_ovl_01(s32,void *,s32);
s32 func_80004EE0(s32 a0,s32 a2,s32 a3){s32 s0; E *e; s32 off; if(a0==0xffff||a0==-1)return 0;e=(E *)(D_80012874+a0*8);s0=e->len;if(e->off<0||s0==0){for(;;){}}off=*(s32 *)&D_800128A8+e->off+a2;if(s0&1)s0++;func_800888CC_ovl_01(off,(void *)a3,0);return s0;}
s32 func_80005074(u16 *a0,u16 *a1){s32 c,n;u16 *start=a0;do{c=(s16)*a1++;if(c>0){n=c-1;while(n){*a0++=*a1++;n--;}}else if(c<0){u16 v=*a1++;n=c+1;while(n){*a0++=v;n++;}}}while(c);return (u8 *)a0-(u8 *)start;}
extern s32 D_80012874,D_800128A8;s32 func_800888CC_ovl_01(s32,void *,s32);
s32 func_80004C9C(s32 a0){u8 sp[8];E *e=(E *)(D_80012874+a0*8);s32 len=e->len; s32 v=0;if(len){if(len&1)len++;func_800888CC_ovl_01(D_800128A8+e->off+len,sp,8);v=*(s32 *)(sp+4);}return v;}
extern s32 D_80012878,D_80012884; s32 func_800B4350_ovl_01(s32);
void func_80004C34(void){s32 v=func_800B4350_ovl_01(D_80012878);if(!(v&0xff))D_80012884=3;}
