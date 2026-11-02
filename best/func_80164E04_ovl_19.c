void func_80164E04_ovl_19(void *p){
 u8 *b=p; u8 *s=*(u8 **)(b+0x208); u8 *q; s32 i; s32 *x; s32 v;
 switch(b[5]){
 case 0: *(s16 *)(b+0x1F2)=-1;b[5]=1;*(s32 *)(b+0x1E8)=0x09000000;*(u16 *)(b+0x1F4)=0;func_80089D34_ovl_01(p,0,0,0x100);
 case 1:
  *(u16 *)(b+0x1F4)=*(u16 *)(b+0x1F4)+1;
  if(*(s16 *)(b+0x1F4)==31){s32 n=10;u8 *obj=*(u8 **)(b+0x234);s32 *ptr=(s32 *)(obj+0x60);do{func_8004A5E4_ovl_01(obj+4,1);ptr[-23]|=2;*ptr+=0xFFEFCFF0;obj+=0x178;ptr+=0x178/4;n--;}while(n);}
  if(*(s16 *)(b+0x1F4)>=31){q=*(u8 **)(b+0x234);if(q[0x63]){s32 n=10;x=(s32 *)(q+0x60);do{*x+=0xFFFEFFFF;x+=0x178/4;n--;}while(n);}q=*(u8 **)(b+0x234);if(*(u32 *)(q+0x60)&0xFF00){s32 n=10;x=(s32 *)(q+0x60);do{*x-=0x100;x+=0x178/4;n--;}while(n);}}
  q=*(u8 **)(b+0x234);if((*(u32 *)(q+0x60)&0xFFFFFF)==0)b[5]=2;
  v=*(s32 *)(s+0x18);if(v&0xFF0000)*(s32 *)(s+0x18)=v+0xFFFF0000;
  v=*(s32 *)(s+0x18);if(v&0xFF000000)*(s32 *)(s+0x18)=v+0xFDFFFE00;
  s[0x1B]=1;break;
 case 2:func_80031C44_ovl_01_868();s[0xE]=0;break;
 }
}
