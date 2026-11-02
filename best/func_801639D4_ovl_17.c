typedef struct { u8 pad[0x300]; } Obj;
extern s32 func_80033634_ovl_01(void);
extern s32 func_80089D34_ovl_01(void*,s32,s32,s32);
extern s32 func_80166C3C_ovl_17(void*,s32,s32,s32);
extern s32 func_801678B8_ovl_17(void*);
void func_801639D4_ovl_17(Obj *p,s32 a1,s32 a2) {
 if (*((u8*)p+6)==0) { *((u8*)p+6)=1; *(s16*)((u8*)p+0x1E0)=100; *(s16*)((u8*)p+0x1E2)=0; *(s16*)((u8*)p+0x1E4)=0; *(s32*)((u8*)p+0x1E8)=0x02000300; }
 if (*(s16*)((u8*)p+0x1F4)!=0) { func_80166C3C_ovl_17(p,0,0,0); *(s16*)((u8*)p+0x1F4)=(u16)*(s16*)((u8*)p+0x1F4)-1; }
 func_80089D34_ovl_01(p,a1,a2,0x400);
 func_801678B8_ovl_17(p);
 if (*(s16*)((u8*)p+0x1F4)==0) { u8 x=*((u8*)p+0x2CD); *(u16*)((u8*)p+6)=0; *((u8*)p+5)=x; *(s16*)((u8*)p+0x1F4)=(func_80033634_ovl_01()&15)+15; }
}
