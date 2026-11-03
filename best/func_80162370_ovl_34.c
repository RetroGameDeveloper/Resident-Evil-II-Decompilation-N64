typedef struct { u8 pad0[4]; s32 unk4; u8 pad8[0x1d8]; u16 timer; u8 pad1e2[2]; s16 unk1e4; u8 pad1e6[2]; s32 unk1e8; u8 pad1ec[0x70]; s8 unk25c; u8 pad25d[0x12]; u8 flags; } Obj;
extern u32 D_800C7650_ovl_01[];
s32 func_80089D34_ovl_01(void*,s32,s32,s32);
void func_80032B8C_ovl_01(void*,s32);
void func_80162370_ovl_34(Obj *p,s32 delta) {
 u8 state=((u8*)p)[6];
 if (state<5) switch(state) {
 case 0:
   p->unk1e8=0x01060300; ((u8*)p)[6]=1; p->timer=0x320; p->unk1e4=0;
   *(u32*)((u8*)D_800C7650_ovl_01+0x18000+0x1a5c)|=0x40;
   p->unk25c=1; p->flags|=0x80;
   { s32 d=func_80089D34_ovl_01(p,delta,0,0x400); ((u8*)p)[6]+=d; p->timer-=0x96; if ((s16)p->timer<0x12c) p->timer=0x12c; }
   break;
 case 2:
   p->unk1e8=0x02000300; ((u8*)p)[6]=3;
   { s32 d=func_80089D34_ovl_01(p,delta,0,0x400); ((u8*)p)[6]+=d; p->timer-=0x14; if ((s16)p->timer<0) p->timer=0; }
   break;
 case 4:
   p->unk25c=1; p->unk4=0x01000000; p->flags &=0x7f;
   *(u32*)((u8*)D_800C7650_ovl_01+0x18000+0x1a5c)&=~0x40;
 }
 func_80032B8C_ovl_01(p,0x800);
}
