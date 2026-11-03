typedef struct { u8 pad0[4]; s32 f4; u8 state; u8 pad7[0x25]; s32 timer; u8 pad30[0x17a]; u16 flags; u8 pad1ac[0x3c]; s16 x270; s16 x272; } Obj;
extern s32 func_80089D34_ovl_01(Obj *, s32, s32, s32);
void func_80164810_overlay_022(Obj *p) {
 switch(p->state) {
 case 0:
  p->x270=0; p->x272=0; p->state++;
  if(p->x270) {
   p->timer=-4000; p->f4=0xE330000; p->flags &= 0xBFFF;
   p->state++;
   ((u8*)p)[0x1e8]=14; ((u8*)p)[0x1e9]=0x33;
   func_80089D34_ovl_01(p,0,0,0x1000);
   p->timer+=1000;
   if(!p->timer) p->state++;
  }
  break;
 case 1:
  ((u8*)p)[0x1e8]=14;
  func_80089D34_ovl_01(p,0,0,0x1000);
  p->state += 14;
  break;
 case 2: case 3:
  if(p->x272) p->f4=0x1010000;
 }
}
