typedef struct { unsigned char x[0x2d8]; } Obj;
s32 func_8006A81C_ovl_01(s32);
s32 func_8008386C_ovl_01(s16,s32,s16*,s16*);
extern unsigned char D_80166ED8_ovl_16[8];
extern unsigned char D_80167144_ovl_16[];
extern unsigned char D_801674B8_ovl_16[];
void func_80162024_overlay_016(Obj *p) { s16 a[4]; s32 n,i; *(s32*)a=*(s32*)D_80166ED8_ovl_16; *(s32*)(a+2)=*(s32*)(D_80166ED8_ovl_16+4); func_8008386C_ovl_01(*(s16*)(p->x+0x66),*(s32*)(p->x+0x70),a,a+2); *(s32*)(p->x+0x28)=*(s16*)(p->x+0x2d0)+a[0]; *(s32*)(p->x+0x2c)+=a[1]; *(s32*)(p->x+0x30)=*(s16*)(p->x+0x2d4)+a[2]; n=func_8006A81C_ovl_01(*(s32*)(p->x+0x70)); for(i=0;i<3;i++) *(u16*)(D_801674B8_ovl_16+2*i)=*(u16*)(D_80167144_ovl_16+2*(i+n*12+*(u8*)(p->x+0x2b4)*3)); *(s32*)p->x &= ~8; }
