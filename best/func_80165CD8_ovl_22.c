typedef struct {u8 pad0[4]; s32 unk4; u8 pad8[0x1D8]; u8 state; u8 pad1E1[0x5E]; u16 timer; s16 unk1E2; s16 unk1E4; u8 pad1E6[2]; s32 flags; u8 pad1EE[0x72]; u8 b25C; u8 pad25D[0x12]; u8 b26F; u8 pad270[0xB4]; s32 x224; s32 y228;} Obj22;
void func_80165CD8_ovl_22(Obj22 *p) {
 switch(p->state) {
 case 0:
   func_80077B0C_ovl_01(0x04010001, (u8*)p+0x28);
   p->flags=0x02000300; p->state=1; p->timer=(u16)-0x258;
   p->unk1E2=0;p->unk1E4=0;
   p->b26F |= 0x80; p->b25C |= 0x12;
   if(!*((u8*)p+0x1EA)) p->state=2;
   func_80032B8C_ovl_01(p);
   func_80089D34_ovl_01(p,p->x224,p->y228,0x400);
   p->timer+=0x70; break;
 case 1:
   p->flags=0x03000300; p->state=3;
   func_80032B8C_ovl_01(p,0);
   {s32 a=func_80089D34_ovl_01(p,p->x224,p->y228,0x400);
    s32 b=func_80089D34_ovl_01(p,p->x224,p->y228,0x400);
    p->state += a+b; p->timer+=15; if((s16)p->timer>0)p->timer=0;
   } break;
 case 2:
   p->unk4=0x01000000; p->b26F=0; p->b25C &=0xED; break;
 }
}
