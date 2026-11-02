s32 func_800106C0(s32, u32, s32, u32);
void *func_80010584(void *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4, u32 arg5) {
 s32 sp10,sp18,t0,v0; u32 sp14,sp1C,t1,lo,v1,v12;
 v0=func_800106C0(arg2,arg3,arg4,arg5);
 v1=(u32)v0; lo=arg5*v1;sp10=v0;sp14=v1;
 t1=arg3-lo;
 t0=(arg2-((u32)((u64)arg5*v1>>32)+(arg5*(u32)v0)+(v1*(u32)arg4)))-(arg3<lo);
 sp18=t0;sp1C=t1;
 if(sp10<0 && (sp18>0 || (sp18==0 && sp1C!=0))) {
  v12=v1+1;sp10=v0+(v12==0);sp14=v12;
  sp18=(t0-arg4)-(t1<arg5);sp1C=t1-arg5;
 }
 *(s32*)arg0=sp10;*(u32*)((u8*)arg0+4)=sp14;*(s32*)((u8*)arg0+8)=sp18;*(u32*)((u8*)arg0+0xc)=sp1C;return arg0;
}
