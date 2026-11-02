typedef struct {void *fn;void *data;} A;
s32 func_8003001C_ovl_01(A*p,void*arg1,u32 stride,s32 count){
 s32 *dst; s32 ret; s32 max; s32 n; s32 i; s32 val; s32 chunk; u32 divv; void(*cb)(void);
 divv=0x3B9AC9F0U/stride; dst=p->data;
 if((s32)divv<=0){*(s32*)((u8*)p->fn+0x14)=0x3e;cb=*(void(**)(void))p->fn;cb();}
 max=count;if((s32)divv<count)max=divv;
 *(s32*)((u8*)dst+0x4c)=max;
 ret=func_8002FD68_ovl_01(p,arg1,count*4);
 i=0;if(count==0)return ret;
 do{n=count-i;if(max<n)n=max;max=n;val=func_8002FF24_ovl_01(p,arg1,n*stride);if(max){dst=(s32*)((u8*)ret+i*4);chunk=max;do{*dst=val;dst+=4;i++;chunk--;val+=stride;}while(chunk);} }while(i<(u32)count);
 return ret;
}
