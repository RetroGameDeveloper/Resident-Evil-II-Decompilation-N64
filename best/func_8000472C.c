u32 func_8000472C(void *arg0) {
 s32 n,src,dst,end;
 u32 result;
 if(*(u32*)((u8*)arg0+4)!=0) return *(u32*)((u8*)arg0+4);
 n=*(s32*)((u8*)arg0+0x48); *(s32*)arg0=*(s32*)((u8*)arg0+0x4C);
 if((u32)n>0x8000) {
  src=*(s32*)((u8*)arg0+0x44);
  if(src&0x30000000) { func_800888CC_ovl_01(src,*(s32*)((u8*)arg0+0x4C),0x8000); goto large; }
  dst=*(s32*)((u8*)arg0+0x4C);
  if((src|dst)&3) {
   end=src+0x8000;
   do { u32 a=*(u32*)src; u32 b=*(u32*)(src+4); u32 c=*(u32*)(src+8); u32 d=*(u32*)(src+12); *(u32*)dst=a; *(u32*)(dst+4)=b; *(u32*)(dst+8)=c; *(u32*)(dst+12)=d; src+=16; dst+=16; } while(src!=end);
   goto large;
  }
  end=src+0x8000;
  do { u32 a=*(u32*)src; u32 b=*(u32*)(src+4); u32 c=*(u32*)(src+8); u32 d=*(u32*)(src+12); *(u32*)dst=a; *(u32*)(dst+4)=b; *(u32*)(dst+8)=c; *(u32*)(dst+12)=d; src+=16; dst+=16; } while(src!=end);
large:
  *(s32*)((u8*)arg0+4)=0x8000; *(s32*)((u8*)arg0+0x44)+=0x8000; *(s32*)((u8*)arg0+0x48)-=0x8000;
 } else {
  src=*(s32*)((u8*)arg0+0x44);
  if(src&0x30000000) func_800888CC_ovl_01(src,*(s32*)((u8*)arg0+0x4C),n+(n&1));
  else func_8000DE9C(*(s32*)((u8*)arg0+0x4C),src,n+(n&1));
  result=*(u32*)((u8*)arg0+0x48); *(s32*)((u8*)arg0+0x48)=0; *(s32*)((u8*)arg0+4)=result; *(s32*)((u8*)arg0+0x44)+=result;
 }
 return *(u32*)((u8*)arg0+4);
}
