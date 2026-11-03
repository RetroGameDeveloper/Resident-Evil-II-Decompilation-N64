typedef struct { u8 pad[0x2dc]; u8 mode; u8 state; u8 frame; s16 x; s16 y; s16 z; } O;
void func_8016D8E0_ovl_11(O *p) {
 u32 n=p->frame>>1;
 u8 *child=*(u8**)((u8*)p+0x234)+((n*45u)*0x100u)+0xD38;
 switch(p->mode) {
 case 0: p->state=2; p->frame=60; break;
 case 1: p->state=3; break;
 case 2: p->state=4; break;
 case 3: p->state=3; break;
 case 4: p->state=4; break;
 }
 (void)child;
}
