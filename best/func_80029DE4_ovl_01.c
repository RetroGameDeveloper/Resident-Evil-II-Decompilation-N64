s32 func_80029C50_ovl_01(void*,s32);
u8 func_80029DE4_ovl_01(void *arg0, void *arg1, s32 arg2){
 s32 count=arg2,t,value; u8 *p; void **cb; u8 result;
 if(*(s32*)((u8*)arg0+16)<count){if(func_80029C50_ovl_01(arg0,count)==0)return -1;}
 t=*(s32*)((u8*)arg0+16)-count; *(s32*)((u8*)arg0+16)=t;
 value=((*(s32*)((u8*)arg0+12)>>t)&((1<<count)-1));
 p=(u8*)arg1+(count<<2);
 while(*(s32*)(p+0x44)<value){
  if(*(s32*)((u8*)arg0+16)<=0){if(func_80029C50_ovl_01(arg0,1)==0)return -1;}
  value<<=1; p+=4;
  t=*(s32*)((u8*)arg0+16)-1; *(s32*)((u8*)arg0+16)=t;
  value|=(*(s32*)((u8*)arg0+12)>>t)&1;
  count++;
 }
 if(count>=17){
  cb=*(void***)((u8*)arg0+0x24); *(s32*)((u8*)*cb+20)=105;
  cb=*(void***)((u8*)arg0+0x24); ((void(**)(void*,s32))((u8*)*cb+4))[0](*cb,-1);
  result=0; return result;
 }
 p=(u8*)arg1+(count<<2);
 return *(u8*)(*(s32*)((u8*)arg1+0xD0)+*(s32*)(p+0x8C)+(value-*(s32*)p)+0x11);
}
