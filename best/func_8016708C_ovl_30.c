s32 func_800662B8_ovl_01(void *, void *);
void func_8016708C_ovl_30(void *arg0, void *arg1) {
 u8 *a; u8 x;
 void *p; void *q;
 a=(u8*)arg1;
 switch(a[0x11]) {
 case 0: a[0x11]=1; a[0x12]=0;
 case 1: x=a[0x12]+1; a[0x12]=x; if(x>=9){a[0x11]=2;a[0x12]=8;} break;
 case 2: x=a[0x12]-1; a[0x12]=x; if(x==0){a[0x10]=0;a[0x11]=0;a[0x12]=0;} break;
 }
 p=*(void**)((u8*)arg0+0x234); p=(u8*)p+0x1028; q=*(void**)((u8*)p+0x120);
 *((u16*)((u8*)q+0xC))=a[0x12]<<9; func_800662B8_ovl_01(p,arg1);
}
