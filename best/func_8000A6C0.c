extern s32 func_800087A0(s32,s32,s32,u32 *); extern s32 func_8000A66C(void *);
s32 func_8000A6C0(void *arg0,u32 arg1,void *arg2){
u16 table[128]; u8 header[16]; u8 buf[16]; u32 outword; u16 outlen;
s32 result; s32 i; s32 lower; u16 val; u32 word; u8 page,slot;
result=5;
if((s32)arg1<*(s32*)((u8*)arg0+0x50) && !(arg1>>31)){
 if(*(s32*)arg0&1){
  result=2;
  if(func_8000A2D0(arg0)!=2){
   if(*((u8*)arg0+0x65)){*((u8*)arg0+0x65)=0;if(func_8000A66C(arg0))goto done;}
   if(func_800087A0(*(s32*)((u8*)arg0+4),*(s32*)((u8*)arg0+8),(*(s32*)((u8*)arg0+0x5c)+arg1)&0xffff,&outword))goto done;
   if(!outlen)goto done;
   if(outword==0){result=5;goto done;}
   result=3;
   if(outlen<*(s32*)((u8*)arg0+0x60))goto done;
   page=header[6];slot=header[7];i=0;
   if(page<*((u8*)arg0+0x64)){
    do{
     if(func_8000A394(arg0,table,0,0))goto done;
     val=table[slot];lower=*(s32*)((u8*)arg0+0x60);i++;
     if(val>=lower){
      while(1){val=table[val&255];word=val;i++;
       if((word>>8)!=page){page=word>>8;slot=val;break;}
       if(word>=lower)continue;
       goto found;
      }
     }else{found:word=val;}
     if(word==1)goto success;
    }while(page<*((u8*)arg0+0x64));
   }
   if((u16)val==1)goto success;
  }
 }
}
goto done;
success:
 *(s32*)arg2=i<<8;*(u16*)((u8*)arg2+8)=outlen;*(s32*)((u8*)arg2+4)=outword;
 for(i=0;i<16;i++)((u8*)arg2)[14+i]=buf[i];
 for(i=0;i<4;i++)((u8*)arg2)[10+i]=header[12+i];
 result=0;
done:return result;
}
