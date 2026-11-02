s32 func_800334F8_ovl_01(s32); s32 func_80089D34_ovl_01(void*,s32,s32,s32); s32 func_80167B58_ovl_30(void*,u8,s32,s32); extern u8 D_80167D3C_ovl_30[];
void func_80162148_ovl_30(void *arg0,s32 arg1,s32 arg2) {
 u8 *p=(u8*)arg0; s32 i,j; u32 *obj; u8 v;
 if(p[7]==0){
  i=0; v=0x0A;
  p[7]=1; *(u16*)(p+0x272)=0; *(u32*)(p+0x1E8)=0x0A000F00;
  p[0x25C]|=1; func_800334F8_ovl_01(0);
  func_80089D34_ovl_01(arg0,arg1,arg2,0x100);
  p[0x2C9]=1;*(u16*)(p+0x212)=0xD98;*(u32*)p|=0x800;
  do {func_80167B58_ovl_30(arg0,D_80167D3C_ovl_30[i],0,0xFFF);i++;}while(i<8);
  i=0x14;j=0x1D60;
  do {
   obj=(u32*)(*(u32*)(p+0x234)+j);
   i++; *(u16*)((u8*)obj+0x124)=0x1000;*(u16*)((u8*)obj+0x126)=0;
   *(u16*)((u8*)obj+0x128)=0x1000;*obj|=0x400;j+=0x178;
  }while(i<0x17);
  func_80167B58_ovl_30(arg0,11,0,0xFFF);
  p[0x26F]|=0x80;
 }
 if(*(s16*)(p+0x270)==1) *(s16*)(p+6)=0x100;
}
