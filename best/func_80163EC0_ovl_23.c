typedef struct { u8 pad0[0x6]; u8 state; u8 pad7[0x1e2]; u8 timer; u8 timer2; u8 pad1eb[9]; s16 val; u8 pad1f6[0xc2]; u16 flags; u8 pad2ba[0xe]; s16 x; s16 y; u8 pad2cc[4]; s16 z; } Obj;
extern u8 D_800C7650_ovl_01[];
s32 func_80032EA4_ovl_01(void*,s32,s32,s32);
void func_800334F8_ovl_01(void*,s32,s32,s32);
void func_80032DEC_ovl_01(void*,s32,s32,s32);
s32 func_80162274_ovl_23(void*,s32,s32,s32,s32,s32);
void func_80162870_ovl_23(void*,s32,s32,s32,s32,s32,s16*);
void func_80162CBC_ovl_23(void*,s32,s32,s32);
void func_80077D48_ovl_01(s32,void*);
void func_80052C00_ovl_01(s32,s32);
void func_80052D40_ovl_01(s32,s32,s32,s32);
void func_80162614_ovl_23(s32);
void func_80163EC0_ovl_23(Obj *arg0, s32 arg1, s32 arg2) {
 s32 result;
 s32 a3;
 s16 sp20[3];
 u8 state=arg0->state;
 if(state==0){arg0->val=0;arg0->timer=0;arg0->flags|=1;arg0->state++;}
 else if(state!=1) return;
 if(arg0->timer<0x1b && func_80032EA4_ovl_01(arg0, *(s32*)(D_800C7650_ovl_01+0x19aa8),*(s32*)(D_800C7650_ovl_01+0x19ab0),0x2bc)){
   arg0->timer=0x1b;arg0->timer2=0;arg0->flags &=0xfffe;func_800334F8_ovl_01(arg0,arg1,arg2,0);
 }
 if((u32)(arg0->timer-0x16)<4){sp20[0]=0;sp20[1]=0;sp20[2]=0;
 func_80162870_ovl_23(arg0,1,6,0x800,arg0->val,9,sp20);
 func_80162870_ovl_23(arg0,1,6,0x800,arg0->val,10,sp20);
 func_80162870_ovl_23(arg0,1,6,0x800,arg0->val,11,sp20);}
 if(func_80036764_ovl_01_510_24(arg0,8,15,0)){arg0->pad0[4]=0x01;arg0->flags &=0xfffe;}
 if(func_80162274_ovl_23(arg0,10,0x1b,0x21,0x190,*(u16*)(D_800C7650_ovl_01+0x18000+0x1bb6)*2)){
 func_80162CBC_ovl_23(arg0,arg0->x,arg0->y,10);func_80077D48_ovl_01(5,arg0);arg0->z=0;func_80052C00_ovl_01(4,0);func_80052D40_ovl_01(0x12,0xdc,0x28,1);func_80162614_ovl_23(0x1e);}
 a3=arg0->timer<0x14?0x40:0x10;
 func_80032DEC_ovl_01(arg0,*(s32*)(D_800C7650_ovl_01+0x18000+0x1aa8),*(s32*)(D_800C7650_ovl_01+0x18000+0x1ab0),a3);
}
