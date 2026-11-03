typedef struct { u32 w[4]; } Code16_800070C0;
typedef union { u64 q; struct { s32 hi; u32 lo; } p; } U64_800070C0;
extern s32 D_80014FF0; extern Code16_800070C0 D_80000000; extern s32 D_80000300,D_8000030C; extern u8 D_8000031C[]; extern s32 D_800128C0; extern u32 D_800128C4; extern s32 D_800128C8; extern u8 func_800006C0[];
s32 func_800072D0(void); s32 func_8000CDE0(s32); s32 func_8000CCF0(s32); s32 func_8000D2D0(s32,s32*); s32 func_8000D360(s32,s32); s32 func_8000EFA0(s32,s32); s32 func_800073D0(s32,s32); s32 func_80007EF0(void); s32 func_8000C940(s32,s32*); s32 func_80006650(void*,s32);
void func_800070C0(void) {
 s32 sp10; s32 sp14; U64_800070C0 u; Code16_800070C0 *src;
 sp14=0; D_80014FF0=1; func_8000CDE0(func_800072D0()|0x20000000); func_8000CCF0(0x01000800);
 do {} while(func_8000D2D0(0x1FC007FC,&sp10)!=0);
 do {} while(func_8000D360(0x1FC007FC,sp10|8)!=0);
 src=(Code16_800070C0*)func_800006C0; D_80000000=*src; *(Code16_800070C0*)0x80000080=*src; *(Code16_800070C0*)0x80000100=*src; *(Code16_800070C0*)0x80000180=*src;
 func_8000EFA0(0x80000000,0x190); func_800073D0(0x80000000,0x190); func_80007EF0(); func_8000C940(4,&sp14);
 sp14 &= ~0xF; if(sp14!=0){D_800128C0=0;D_800128C4=sp14;}
 u.p.hi=D_800128C0;u.p.lo=D_800128C4;u.q=u.q*3;u.q=func_80006100(u.q,4);D_800128C0=u.p.hi;D_800128C4=u.p.lo;
 if(D_8000030C==0)func_80006650(D_8000031C,0x40);
 switch(D_80000300){case 0:D_800128C8=0x02F5B2D2;break;case 2:D_800128C8=0x02E6025C;break;default:D_800128C8=0x02E60354;break;}
}
