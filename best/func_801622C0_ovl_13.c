typedef struct { u8 pad0[6]; u8 state; u8 pad7[0x21]; s32 x28; u8 pad2c[4]; s32 x30; u8 pad34[0x1b4]; s32 x1e8; u8 pad1ec[0xc8]; u8 x2b4; u8 x2b5; u8 pad2b6[0x0a]; u16 x2c0; u16 x2c2; u8 pad2c4[2]; u16 x2c6; } A;
extern s32 func_80033634_ovl_01(void);
extern s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern void func_80077D48_ovl_01(s32, void *);
extern void func_80165B44_ovl_13(void *);
void func_801622C0_ovl_13(A *a, s32 b, s32 c) {
 s32 r;
 switch(a->state) {
 case 0: r=func_80033634_ovl_01()&255; a->state=7; a->x2b5=r%100; break;
 case 1: r=func_80033634_ovl_01()&255; a->x2b5=5; a->state=10; a->x1e8=((r%10)<<16)+0x700; break;
 case 2: a->x1e8=0x1000700; a->state=8; break;
 case 3: a->x1e8=0x1000700; a->state=9; break;
 case 4: a->x1e8=0x1000700; a->state=11; break;
 case 5: r=func_80033634_ovl_01()&255; a->state=8; a->x1e8=((r%7)<<16)+0x2000700; break;
 case 6: a->x1e8=0xA000700; r=func_80033634_ovl_01()&255; a->state=13; a->x2c0=*(u16*)((u8*)a+0x2a); a->x2c2=*(u16*)((u8*)a+0x32); a->x2b5=r%10+15; break;
 case 7: if (!a->x2b5) { r=func_80033634_ovl_01()&255; a->x2b4=r%7; a->state=(a->x2b4==6 && !(func_80033634_ovl_01()&15))?0:a->x2b4; } else { a->x2b5--; } break;
 case 8: if(a->x2b5) a->state=3; a->x2b5--; break;
 case 9: r=func_80033634_ovl_01()&255; a->x2b5=r%100; break;
 case 10: if(func_80089D34_ovl_01(a,b,c,0x10200)) func_80165B44_ovl_13(a); break;
 case 11: if(a->x2b5--==0) { if(!(a->x2c6&0x20) && (func_80033634_ovl_01()&1)) func_80077D48_ovl_01(6,a); func_80089D34_ovl_01(a,b,c,0x200); } break;
 case 12: if(func_80089D34_ovl_01(a,b,c,0x200)) { a->state=0; r=func_80033634_ovl_01()&255; a->x2b5=r%100; } break;
 case 13: func_80089D34_ovl_01(a,b,c,0x10200); func_80165B44_ovl_13(a); break;
 case 14: if(func_80089D34_ovl_01(a,b,c,0x200)) { a->state=0; a->x28=*(s16*)((u8*)a+0x2c0); a->x30=*(s16*)((u8*)a+0x2c2); } break;
 }
}
