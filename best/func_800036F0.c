extern s32 func_800011A0(s32,s32,u32); extern s32 func_80002314(s32,void*,s32,u32);
s32 func_800036F0(void *arg0,s32 arg1,u32 arg2){
 s32 s2=arg1; u32 s0=arg2; u32 s3=s0; void *a3; s32 v0;
 if(!arg0) return -2; a3=*(void**)((u8*)arg0+28); if(!a3)return -2; if(*(s32*)a3!=6)return -2;
 v0=func_800011A0(1,s2,s0); if(v0!=*(s32*)((u8*)arg0+48))return -3;
 a3=*(void**)((u8*)arg0+28); *(s32*)((u8*)arg0+48)=1;
 v0=s0>>*(s32*)((u8*)a3+16);
 if(v0){s0=(1u<<*(s32*)((u8*)a3+16))-1;s2+=s3-s0;}
 func_80002314(*(s32*)((u8*)a3+20),arg0,s2,s0);
 *(s32*)*(void**)((u8*)arg0+28)=7; return 0;
}
