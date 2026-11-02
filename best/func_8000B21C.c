s32 func_8000B21C(void *arg0,void *arg1){
 u16 buf[128];s32 i,j,ret,k;u32 val,high,bit;u8*out=(u8*)arg1;u16*p;u8*q,mode;
 q=out+255;k=255;do{q[257]=0;k--;q--;}while(k>=0);
 out[256]=255;i=0;
 if(*(u8*)((u8*)arg0+100)){
  do{
   mode=(u8)i;j=1;if(mode==0)j=*(s32*)((u8*)arg0+96);
   ret=func_8000A394(arg0,buf,0,mode);
   if((ret!=0)&(ret!=3))return ret;
   if(j<128){
    bit=1u<<(mode&7);p=buf+j;
    while(j<128){
     val=*p++;j++;high=(u32)(val&65535)>>8;
     if((s32)(val&65535)>=*(s32*)((u8*)arg0+96)&&high!=mode){
      u32 off=((val&255)>>2)+((high&7)<<5);
      out[off+257]=(u8)(out[off+257]|bit);
     }
    }
   }
   i++;
  }while((u8)i<*(u8*)((u8*)arg0+100));
 }
 return 0;
}
