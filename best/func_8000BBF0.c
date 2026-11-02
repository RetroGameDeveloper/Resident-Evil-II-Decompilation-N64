typedef struct { u8 pad[0x60]; } Obj;
s32 func_800087A0(s32,s32,s32,s32*);
s32 func_8000BBF0(Obj *arg0, s32 arg1, s32 arg2, u8 *arg3, u8 *arg4, s32 *arg5) {
 s32 sp10; u8 sp1c[4]; u8 sp20[16]; s32 i,j,failed,result;
 result=2;
 if(func_8000A2D0(arg0)!=2) {
  i=0;
  if(*(s32*)((u8*)arg0+0x50)>0) {
   do {
    result=func_800087A0(*(s32*)((u8*)arg0+4),*(s32*)((u8*)arg0+8),(*(s32*)((u8*)arg0+0x5c)+i)&0xffff,&sp10);
    if(result!=0) goto found;
    if(*(u16*)((u8*)&sp10+4)!=(arg1&0xffff)) goto next;
    if(sp10!=arg2) goto next;
    failed=0;
    if(arg3!=NULL) {
     j=0;
     do {
      if(sp20[j]!=arg3[j]) { failed=1; goto cmp4; }
      j++;
     } while(j<16);
    }
cmp4:
    if(arg4!=NULL && failed==0) {
     j=0;
     do {
      if(sp1c[j]!=arg4[j]) { failed=1; goto cmpdone; }
      j++;
     } while(j<4);
    }
cmpdone:
    if(failed==0) { *arg5=i; goto found; }
next:
    i++;
   } while(i<*(s32*)((u8*)arg0+0x50));
   *arg5=-1;
   result=5;
   goto out;
  }
  *arg5=-1;
  result=5;
 }
found:
out:
 return result;
}
