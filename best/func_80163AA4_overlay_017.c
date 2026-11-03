s32 func_80033634_ovl_01(void); s32 func_80089D34_ovl_01(void*,s32,s32,s32);
void func_80163AA4_overlay_017(void *arg0) {
 s32 var_v0; u16 temp_v0;
 if(!*(u8*)((char*)arg0+6)){*(u8*)((char*)arg0+6)=1;*(s32*)((char*)arg0+0x1e8)=0x300;}
 func_80089D34_ovl_01(arg0,0,0,0x400);
 temp_v0=*(u16*)((char*)arg0+0x1f4)-1;*(u16*)((char*)arg0+0x1f4)=temp_v0;
 if((temp_v0<<16)==0) {
  if(*(u8*)((char*)arg0+0x2d3)) {
   if((*(u32*)((char*)arg0+0x290)&0x3fffffff)<0xbb8) goto random;
   var_v0=3; goto finish;
  }
  var_v0=*(u32*)((char*)arg0+0x28c);
  if(var_v0>=0xbb8){var_v0=3;goto finish;}
 random:
  var_v0=func_80033634_ovl_01()&15;
  var_v0=(0x340>>var_v0)&1;
  if(var_v0) var_v0=7; else var_v0=3;
 finish:
  *(u8*)((char*)arg0+5)=var_v0;*(u16*)((char*)arg0+6)=0;
 }
}
