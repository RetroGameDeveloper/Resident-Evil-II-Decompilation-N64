extern u8 D_80162FF4_ovl_36[];
void func_80162748_ovl_36(void *arg0) {
 s32 temp_s0; s32 sentinel; u8 *table;
 u16 t; u8 c,mode; void *obj; u8 *q=(u8*)arg0+0x2B4;
 if(*(u8*)((u8*)arg0+7)==0) {
  c=*(u8*)(q+5)-1; *(u8*)(q+5)=c; sentinel=255;
  if((c&255)!=sentinel) {
   table=D_80162FF4_ovl_36;
loop:
   temp_s0=*(s16*)(q+6)+((func_80033634_ovl_01()&15)-7)*16;
   obj=func_80162EB4_ovl_36(arg0,0x6001,temp_s0,*(s16*)(q+8)+((func_80033634_ovl_01()&15)-7)*16);
   if(obj) {
    *(u16*)((u8*)obj+0x1E0)=*(u16*)(q+6); *(u16*)((u8*)obj+0x1E4)=*(u16*)(q+8);
    mode=table[func_80033634_ovl_01()&7]; *(u16*)((u8*)arg0+0x1F4)=mode;
    if(mode==0) { c=*(u8*)(q+5)-1; *(u8*)(q+5)=c; if((c&255)!=sentinel) goto loop; goto done; }
    *(u8*)((u8*)arg0+7)=1; return;
   }
  }
done: *(u8*)((u8*)arg0+7)=0; *(u8*)((u8*)arg0+6)=*(u8*)((u8*)arg0+6)+1; return;
 }
 t=*(u16*)((u8*)arg0+0x1F4)-1; *(u16*)((u8*)arg0+0x1F4)=t; if((t<<16)==0) *(u8*)((u8*)arg0+7)=0;
}
