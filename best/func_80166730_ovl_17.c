typedef struct { u32 flags; u8 pad4[0x24]; u32 x28; u8 pad2c[4]; u32 x30; u8 pad34[0x1D3]; u8 x207; void *ptr208; u8 pad20c[0xB5]; u8 x2c1; } Obj;
s32 func_80074D94_ovl_01(u32,u32); void func_8003420C_ovl_01(void*,u32);
void func_80166730_ovl_17(Obj *a) {
 u8 st=a->x2c1; u16 *p=(u16*)a->ptr208;
 switch(st) {
 case 0:
  if(func_80074D94_ovl_01(a->x28,a->x30)) a->flags |= 0x400; else a->flags &= ~0x400;
  break;
 case 1:
  if(!func_80074D94_ovl_01(a->x28,a->x30)) {
   func_8003420C_ovl_01(a->ptr208,0xBF10BF00); a->x2c1=3; a->x207=0x5A; a->flags &= ~0x400;
   p[2]+=8; p[3]+=8; a->x207--; if((s8)a->x207<0) a->x2c1=4;
  }
  break;
 case 2: break;
 case 3: break;
 case 4: break;
 default: break;
 }
}
