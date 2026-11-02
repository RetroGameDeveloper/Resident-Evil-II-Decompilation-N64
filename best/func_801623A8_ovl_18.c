void func_801623A8_ovl_18(void *arg0,s32 arg1,s32 arg2) {
 s32 result; s32 flags; s16 value;
 if(*(u8*)((u8*)arg0+6)==0) {
  *(u8*)((u8*)arg0+6)=1; *(s16*)((u8*)arg0+0x1E2)=0x28; *(u8*)((u8*)arg0+0x2BE)=1; *(u32*)arg0|=2;
 }
 func_80032C08_ovl_01(arg0,0,0);
 value=*(s16*)((u8*)arg0+0x1E2);
 if(value<0x320) value=*(u16*)((u8*)arg0+0x1E2)+0x28; else value=0x320;
 *(s16*)((u8*)arg0+0x1E2)=value; *(u8*)((u8*)arg0+0x26F)=0xFF;
 result=func_80162C10_ovl_18(arg0);
 if(result!=0) {
  *(u8*)((u8*)arg0+0x26F)=0; *(u8*)((u8*)arg0+0x2BE)=0; *(u32*)arg0=(*(u32*)arg0&~2)|0x04000000;
  if(result<0) {
   *(s32*)((u8*)arg0+0x2C)=result+10; *(u8*)((u8*)arg0+5)=4;
   func_80162B1C_ovl_18(arg0,0,0x82,result); flags=*(u32*)arg0|0x400;
  } else {
   *(u8*)((u8*)arg0+5)=1; *(s32*)((u8*)arg0+0x2C)=*(s16*)((u8*)arg0+0x25E); flags=*(u32*)arg0&~0x400;
  }
  *(u32*)arg0=flags; *(u16*)((u8*)arg0+6)=0;
 }
 func_80089D34_ovl_01(arg0,arg1,arg2,0x400);
}
