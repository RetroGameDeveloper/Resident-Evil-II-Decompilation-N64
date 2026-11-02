extern s32 func_80036764_ovl_01(void*,s32,s32,s32);
void func_80164D08_ovl_23(void *arg0) {
 u8 n=*((u8*)arg0+7);
 if (n==0) {
   s32 result=func_80036764_ovl_01(arg0,5,15,0);
   *((u8*)arg0+7)=*((u8*)arg0+7)+result;
 } else {
   if(n==1) *(s32*)((char*)arg0+4)=0x01010000;
 }
}
