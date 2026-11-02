s32 func_80004370(void *arg0, void *arg1, s32 arg2) {
 s32 (*fn)(s32,u32,u32);
 s32 p, q, b, count, status, tmp, end, start;
 s32 result;
 status=arg2;
 p=*(s32*)((u8*)arg0+0x2C);
 q=*(s32*)((u8*)arg0+0x30);
 b=*(s32*)((u8*)arg1+0xC);
 if((u32)q<(u32)p) count=*(s32*)((u8*)arg0+0x28)-p;
 else count=q-p;
 tmp=*(s32*)((u8*)arg1+0x10);
 if((u32)tmp<(u32)count) count=tmp;
 if(count==0) goto next;
 if(status==-5) status=0;
next:
 tmp=*(s32*)((u8*)arg1+0x10);
 *(s32*)((u8*)arg1+0x10)=tmp-count;
 *(s32*)((u8*)arg1+0x14)+=count;
 fn=*(s32(**)(s32,u32,u32))((u8*)arg0+0x34);
 if(fn!=0) {
   result=fn(*(s32*)((u8*)arg0+0x38),p,count);
   *(s32*)((u8*)arg0+0x38)=result;
   *(s32*)((u8*)arg1+0x30)=result;
 }
 func_8000DE9C(b,p,count);
 end=*(s32*)((u8*)arg0+0x28);
 p+=count;
 b+=count;
 if(p!=end) goto finish;
 q=*(s32*)((u8*)arg0+0x30);
 start=*(s32*)((u8*)arg0+0x24);
 if(q==end) *(s32*)((u8*)arg0+0x30)=start;
 tmp=*(s32*)((u8*)arg1+0x10);
 count=*(s32*)((u8*)arg0+0x30)-start;
 if((u32)tmp<(u32)count) count=tmp;
 if(count==0) goto second;
 if(status==-5) status=0;
second:
 tmp=*(s32*)((u8*)arg1+0x10);
 *(s32*)((u8*)arg1+0x10)=tmp-count;
 *(s32*)((u8*)arg1+0x14)+=count;
 fn=*(s32(**)(s32,u32,u32))((u8*)arg0+0x34);
 if(fn!=0) {
   result=fn(*(s32*)((u8*)arg0+0x38),start,count);
   *(s32*)((u8*)arg0+0x38)=result;
   *(s32*)((u8*)arg1+0x30)=result;
 }
 func_8000DE9C(b,start,count);
 b+=count;
 p=start+count;
finish:
 *(s32*)((u8*)arg1+0xC)=b;
 *(s32*)((u8*)arg0+0x2C)=p;
 return status;
}
