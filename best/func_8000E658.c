/* identical to viMgrMain in V-RALLY-PAL (matched), with its names changed by decompdecomp */
extern u16 D_800ACCB0; extern u32 D_800B0D78,D_800AE854; extern u64 D_800B6168;
void *func_8000E7F0(void); void func_8000ECB0(void); u32 func_80007000(void); void func_8000DF64(void); void func_8000C9E0(s32,void*,s32);void func_8000CB60(s32,s32,s32);
#define F(p,t,o) (*(t*)((u8*)(p)+(o)))
void func_8000E658(void *arg0){
 u16 *msg=NULL; s32 first=0; u32 count; void *ctx; void *q;
 ctx=arg0;
 D_800ACCB0=F(func_8000E7F0(),u16,2); if(!D_800ACCB0)D_800ACCB0=1;
 first=0;
 q=ctx;
 for(;;){func_8000C9E0(F(q,s32,12),&msg,1);switch(*msg){case 13:
 func_8000ECB0(); if(--D_800ACCB0==0){ctx=func_8000E7F0();if(F(ctx,s32,16))func_8000CB60(F(ctx,s32,16),F(ctx,s32,20),0);D_800ACCB0=F(ctx,u16,2);}
 D_800B0D78++;if(first){first=0;count=func_80007000();D_800B6168=count;}
 count=D_800AE854;D_800AE854=func_80007000();count=D_800AE854-count;D_800B6168+=count;break;
 case 14:func_8000DF64();break;}}}
