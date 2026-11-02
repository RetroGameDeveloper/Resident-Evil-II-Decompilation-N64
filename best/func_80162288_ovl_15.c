extern s32 func_80036764_ovl_01_510_24(void *, s32, s32, s32); extern s32 func_80083C44_ovl_01(s32); extern u8 D_800C7650_ovl_01[];
typedef struct { u8 p0[4]; u32 f4; u8 p8[0x27e]; u8 f286[0x2e]; u16 f2b4; u8 p2b6[0x1e]; u8 f2d4; } Obj;
void func_80162288_ovl_15(Obj *x) { u8 v; switch(v=*(u8*)((u8*)x+6)) {
case 0: if(*(s16*)((u8*)x+0x270)!=0) *(u8*)((u8*)x+6)=1; break;
case 1: *(u32*)(D_800C7650_ovl_01+0x18000+0x1A5C)|=0x110; x->f2b4|=2; if(*(u8*)((u8*)x+0x1E9)==0x46) func_80083C44_ovl_01(0); if(func_80036764_ovl_01_510_24(x,6,0,0)){func_80083C44_ovl_01(1);*(s32*)((u8*)x+0x30)=-0x52DC;*(u8*)((u8*)x+6)=*(u8*)((u8*)x+6)+1;} break;
case 2: if(func_80036764_ovl_01_510_24(x,3,0,0)){*(u32*)(D_800C7650_ovl_01+0x18000+0x1A5C)&=~0x110;*(u8*)((u8*)x+0x2D4)=0x6E;*(u32*)((u8*)x+4)=0x01010000;x->f2b4 &=~2;*(u16*)((u8*)x+0x66)+=0x400;x->f2b4|=4;} } }
