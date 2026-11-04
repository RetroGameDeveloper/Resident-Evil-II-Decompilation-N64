typedef struct Obj {
u8 pad0[0x66]; s16 unk66; u8 pad68[0x1CC]; s32 unk234; u8 pad238[0x7D]; u8 state; u8 pad2b6; s8 delta; u16 speed; s16 target;
} Obj;
typedef struct Inner { u8 pad[0xC]; s16 y; u8 pad2[0xA]; u16 angle; } Inner;
typedef struct Arg1 { u8 pad[0x120]; Inner *inner; } Arg1;
extern s32 func_80033634_ovl_01(void);
extern void func_800377B0_ovl_01(s32,s16,s32,s16*);
extern void func_80052C00_ovl_01(s32,s32,s32);
extern void func_80052C9C_ovl_01(s32,s32,s32);
extern void func_80077D48_ovl_01(s32,void*);
void func_8016616C_ovl_32(Obj *a, Arg1 *b) {
 s16 x,y,z; s32 r0,r1,r2,r3, base; s32 i;
 switch(a->state) {
 case 0: a->state=1; a->speed=0; a->target=0; a->delta=0; func_80052C00_ovl_01(30,0,1); func_80052C9C_ovl_01(35,250,15);
 case 1:
   if(b->inner->angle) { b->inner->angle >>= 1; a->speed=0x400; }
   b->inner->y -= a->speed;
   if(b->inner->y < -0xFD0) a->state=2;
   a->speed += 0x20;
   break;
 case 2:
   b->inner->y += a->speed;
   if(b->inner->y >= 0x2711) {
    a->state=3; a->delta=(func_80033634_ovl_01()&0x3f)+0x40; a->speed=0;
    r0=func_80033634_ovl_01(); r1=func_80033634_ovl_01(); r2=func_80033634_ovl_01(); r3=func_80033634_ovl_01();
    a->target=(r0&255)+((r1&255)<<1)+((r2&255)<<2)+((r3&255)<<3)+((func_80033634_ovl_01()&255)<<4);
    i=func_80033634_ovl_01()&1; func_80077D48_ovl_01(i?6:14,a);
    base=a->unk234+0x618;
    x=0; y=0x100-((func_80033634_ovl_01()&255)<<1); z=0x100-((func_80033634_ovl_01()&255)<<1);
    func_800377B0_ovl_01(((func_80033634_ovl_01()&255)<<2)+0x1fa0,a->unk66,base,&x);
    x=0; y=0x100-((func_80033634_ovl_01()&255)<<1); z=0x100-((func_80033634_ovl_01()&255)<<1);
    func_800377B0_ovl_01((((func_80033634_ovl_01()&255)<<2)+0x1fa0)|0x10000,a->unk66,base,&x);
    r0=(func_80033634_ovl_01()&3)+2; r1=func_80033634_ovl_01()&3; func_80052C00_ovl_01(r0,r1,0);
    r0=(func_80033634_ovl_01()&3)+3; r1=func_80033634_ovl_01()&3; func_80052C9C_ovl_01(r0,250,r1);
   }
   break;
 case 3:
   b->inner->y -= a->speed;
   if(b->inner->y < a->target) { { int repair_store_value = 2; a->state=repair_store_value; } a->speed=((func_80033634_ovl_01()&255)<<2)+0x800; }
   a->speed += (s8)a->delta;
 }
}
