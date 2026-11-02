typedef struct{u8 p[0x6];u8 state,tick;u8 p8[0x1e0];s32 unk1e8;u8 p1ec[8];s16 unk1f4;u8 p1f6[0xd2];u16 unk2c8;u8 unk2ca;u8 p2cb[3];u8 unk2ce;u8 p2cf[0x55];u8 p324[0xc];void* child;} Obj;typedef struct{u8 p[0x28];s32 x;u8 q[4];s32 y;u8 r[0x23b];} Child;
extern s32 func_80036BB4(void*,s32,s32,s32);extern void func_800334F8_ovl_01(void*,s32,s32,s32);extern void func_80032DEC_ovl_01(void*,s32,s32,s32);extern s32 func_8008A974_ovl_01(void*,s32,s32,s32);extern void func_80032B8C_ovl_01(void*,s32);extern s32 func_80032EA4_ovl_01(void*,s32,s32,s32);extern s32 func_80033174_ovl_01(void*,void*);extern void func_800377B0_ovl_01(s32,s32,void*,void*);extern void func_80052C00_ovl_01(s32,s32);extern void func_80052D40_ovl_01(s32,s32,s32,s32);extern s32 func_80059E30_ovl_01(s32,s32);extern u8 D_800E10D0_ovl_01[];extern u8 D_800E8FC8_ovl_01[];
void func_80163BE8_ovl_14(Obj *o,s32 a1,s32 a2){u8 state,tick;Child*c;s32 temp;u16 point[3];
 c=(Child*)o->child;state=o->state;
 switch(state){
 case 0:o->tick=0;if(!(o->unk2c8&2)){o->state+=func_80036BB4(o,6,15,0);goto end;}o->tick=0;o->state++;
 case 1:o->unk1e8=0x15000300;o->unk2ce=4;o->unk1f4=0;o->unk2c8|=2;o->state++;
 case 2:break;
 default:goto end;
 }
 func_800334F8_ovl_01(o,a1,a2,0);func_80032DEC_ovl_01(o,c->x,c->y,8);if(func_8008A974_ovl_01(o,a1,a2,0x400))o->p324[0]=0x10;func_80032B8C_ovl_01(o,0);
 tick=o->tick;o->tick++;if(c->r[0x26f])goto end;if(o->unk1f4)goto end;if((u8)(tick-1)>=5)goto end;if(func_80032EA4_ovl_01(o,c->x,c->y,0x154)<<16)goto end;if(*(u32*)((u8*)o+0x28c)>=0xaf0)goto end;if(*(s16*)(c->r+0x1f2)<0)goto end;
*(void**)(c->r+0x250)=o;*(u32*)(c->r+4)=0x02000000;temp=func_80033174_ovl_01(o,D_800E10D0_ovl_01);c->r[5]+=temp;
point[0]=*(u16*)((u8*)c+0x4e);point[1]=*(u16*)((u8*)c+0x52)+0xc8;point[2]=*(u16*)((u8*)c+0x56);func_800377B0_ovl_01(0x2400,0,D_800E8FC8_ovl_01,point);func_80052C00_ovl_01(5,0);func_80052D40_ovl_01(11,200,40,3);if(func_80059E30_ovl_01(15,0)&2)*(u32*)(D_800E10D0_ovl_01+4)=0x03000000;o->unk2ca=40;o->unk1f4=1;end:;}
