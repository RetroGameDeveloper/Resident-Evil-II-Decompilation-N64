extern s32 func_800015E0(void*,s32*,s32); extern s32 func_80002F80(void*); extern s32 func_80002FE8(void*); extern void *func_800048E8(s32,s32,s32); extern s32 func_800011A0,func_8000490C;
s32 func_8000305C(void *arg0,s32 arg1,u8 *arg2,s32 arg3) {
 s32 *fn; s32 temp; s32 size=arg1; s32 result;
 if(arg2!=0) {
  if(*arg2==0x31) {
   if(arg3==0x38) goto valid;
  }
 }
 return -6;
valid:
 if(arg0==0) return -2;
 *(s32*)((u8*)arg0+0x18)=0;
 fn=(s32*)((u8*)arg0+0x20);
 if(*fn==0) {*fn=(s32)func_800048E8;*(s32*)((u8*)arg0+0x28)=0;}
 fn=(s32*)((u8*)arg0+0x24);
 if(*fn==0) *fn=(s32)&func_8000490C;
 result=((s32(*)(s32,s32,s32))*(s32*)((u8*)arg0+0x20))(*(s32*)((u8*)arg0+0x28),1,0x18);
 *(s32*)((u8*)arg0+0x1c)=result;
 if(result==0) goto failed;
 *(s32*)((u8*)result+0x14)=0;
 temp=*(s32*)((u8*)arg0+0x1c);
 *(s32*)((u8*)temp+0xc)=0;
 if(size<0){size=-size;*(s32*)((u8*)temp+0xc)=1;}
 if((u32)(size-8)>=8){func_80002FE8(arg0);return -2;}
 *(s32*)((u8*)*(s32*)((u8*)arg0+0x1c)+0x10)=size;
 fn=*(s32*)((u8*)*(s32*)((u8*)arg0+0x1c)+0xc)==0?&func_800011A0:0;
 result=func_800015E0(arg0,fn,1<<size);
 *(s32*)((u8*)*(s32*)((u8*)arg0+0x1c)+0x14)=result;
 if(result){func_80002F80(arg0);return 0;}
 func_80002FE8(arg0);
failed: return -4;
}
