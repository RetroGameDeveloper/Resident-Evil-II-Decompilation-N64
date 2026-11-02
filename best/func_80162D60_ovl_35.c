typedef struct{u8 p[0x5];s8 face;u8 state;u8 p7[0x5c];s16 aux;u8 p66[0x148];s32 effect;u8 p1ec[8];u16 timer;s16 count;u8 p1f6[0xc6];s8 amount;u8 p2bf[9];s8 grp;u8 p2c9[0xa];} Obj;
extern u8 D_800E10D0_ovl_01[];extern u8 D_800C7650_ovl_01[];extern s32 func_80032EA4_ovl_01(void*,s32,s32,s32);extern s32 func_80033634_ovl_01(void);extern void func_80089D34_ovl_01(void*,s32,s32,s32);extern void func_8016232C_ovl_35(void*);extern s32 func_80165F34_ovl_35(void*,s32,s32,s32);extern void func_80033678_ovl_01(void*);
void func_80162D60_ovl_35(Obj*o,s32 x,s32 y){void *p; s32 d,mag;u8 state;
 if(o->p2c9[3]){p=*(void**)(D_800C7650_ovl_01+0x18000+0x1d3c);}else p=D_800E10D0_ovl_01;
 d=func_80032EA4_ovl_01(o,*(s32*)((u8*)p+0x28),*(s32*)((u8*)p+0x30),0x30);mag=d;if(*(s16*)((u8*)p+0x1f2)<0)mag=-d;
 state=o->state;
 if(state<5)switch(state){case 0:o->state=1;o->amount=mag;o->timer=60;*(s16*)((u8*)o+0x64)=0;o->state=2;break;case 1:d=func_80033634_ovl_01();o->count=(d&15)+15;o->effect=0x03000f00;o->state=2;o->aux+=o->amount;break;case 2:o->state=3;break;case 3:o->state=4;d=func_80033634_ovl_01();*(u32*)((u8*)o+0x1e8)=0xf00;o->count=(d&15)+15;*(s16*)((u8*)o+0x64)=0;break;case 4:o->state=1;}
 o->timer--;if(o->timer==0){if(*(u8*)((u8*)o+0x2bd)&1)o->face=11;else o->face=9;*(u16*)((u8*)o+6)=0;}
 if(!(*(u8*)((u8*)o+0x2bd)&1)&&!*(u8*)((u8*)o+0x2c8)&&func_80165F34_ovl_35(o,0,0x73a,0x180)){*(u8*)((u8*)o+0x26f)|=0x80;*(u8*)((u8*)p+0x26f)|=0x80;o->face=3;*(u16*)((u8*)o+6)=0;}
 func_8016232C_ovl_35(o);func_80089D34_ovl_01(o,x,y,0x100);func_80033678_ovl_01(o);}
