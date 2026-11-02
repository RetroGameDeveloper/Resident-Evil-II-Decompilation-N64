void func_80162344_ovl_27(void *arg0) {
 s32 diff;
 s32 active;
 s32 flags;
 s16 angle;
 s32 result;
 u8 *p=(u8*)arg0;
 diff=*(u16*)(p+0x1F6)-*(u16*)(*(u32*)(p+0x250)+0x66);
 *(s16*)(p+0x2BC)=diff;
 func_80089D34_ovl_01(diff, 0x200);
 result=func_80033634_ovl_01_44(arg0);
 flags=*(u32*)*(u32*)(p+0x214);
 if (flags & 0x20000) {
   if (!p[0x2C5]) p[0x2C5]=func_801639B0_ovl_27(arg0,5);
   active=0x10000;
 } else active=0x10000;
 if (!(flags & active)) {
   angle=*(s16*)(p+0x2C2);
   if (p[0x2B5]&1) angle-=0x14; else angle+=0x14;
 } else {
   angle=*(s16*)(p+0x2C2);
   if (p[0x2B5]&1) angle+=0x14; else angle-=0x14;
 }
 *(s16*)(p+0x2C2)=angle;
 if(result) func_80162424_ovl_27(arg0);
}
