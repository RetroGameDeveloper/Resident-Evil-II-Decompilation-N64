u32 func_800011A0(u32 seed,u8 *data,u32 length) {
 u32 low=seed&0xffff,high=seed>>16,n;
 u32 b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15;
 if(data==0)return 1;
 if(length==0)return high<<16;
 while(length){
  n=length<0x15b1?length:0x15b0;length-=n;
  if(n>=16){do{
   b0=*data++;b1=*data++;b2=*data++;b3=*data++;b4=*data++;b5=*data++;b6=*data++;b7=*data++;b8=*data++;b9=*data++;b10=*data++;b11=*data++;b12=*data++;b13=*data++;b14=*data++;b15=*data++;
   n-=16;
   low+=b0;high+=low;low+=b1;high+=low;low+=b2;high+=low;low+=b3;high+=low;low+=b4;high+=low;low+=b5;high+=low;low+=b6;high+=low;low+=b7;high+=low;low+=b8;high+=low;low+=b9;high+=low;low+=b10;high+=low;low+=b11;high+=low;low+=b12;high+=low;low+=b13;high+=low;low+=b14;high+=low;low+=b15;high+=low;
  }while(n>=16);}
  if(n) do{low+=*data++;high+=low;}while(--n);
  low=low%5569;high=high%5569;
 }
 return (high<<16)|low;
}
