extern s32 D_8002AA60_ovl_01;
void func_8002AD8C_ovl_01(void *arg0, s32 arg1) {
 s32 *table, i, scale, divisor, row, a, b, h, t;
 s32 (*alloc)(void*,s32,s32,s32);
 table=(s32*)((s32(*)(s32,s32))*(s32**)(*(s32**)((u8*)arg0+4)))(1,0x54);
 *(s32**)((u8*)arg0+0x168)=table; *table=(s32)&D_8002AA60_ovl_01;
 if(arg1) { *(s32*)(*(s32**)arg0+0x14/4)=4; ((s32(*)(void*))*(s32**)*(s32**)arg0)(arg0); }
 if(*(s32*)((u8*)arg0+0x40)) return;
 if(*(s32*)((u8*)*(s32*)((u8*)arg0+0x180)+8)) {
  if(*(s32*)((u8*)arg0+0x10C)<2) { *(s32*)(*(s32**)arg0+0x14/4)=0x27; ((s32(*)(void*))*(s32**)*(s32**)arg0)(arg0); }
  scale=*(s32*)((u8*)arg0+0x10C)+2;
 } else scale=*(s32*)((u8*)arg0+0x10C);
 i=0;
 if(*(s32*)((u8*)arg0+0x20)<=0) return;
 row=*(s32*)((u8*)arg0+0xB0)+0x1C;
 do {
  t=*(s32*)(row-0x10); a=*(s32*)(row+8); b=t*a;
  h=(b/(*(s32*)((u8*)arg0+0x10C)))*scale;
  b=*(s32*)row*a;
  alloc=(s32(*)(void*,s32,s32,s32))((s32**)*(s32**)((u8*)arg0+4))[2];
  table[3]=alloc(arg0,1,b,h);
  i+=1; row+=0x50; table+=1;
 } while(i<*(s32*)((u8*)arg0+0x20));
}
