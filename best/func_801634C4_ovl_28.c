typedef struct { u8 pad[0x2B8]; u16 flags; } Obj634;
extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10F8_ovl_01[];
extern u32 D_800E10D4_ovl_01;
s32 func_800334F8_ovl_01(void *, s32, s32, s32);
s32 func_80032DEC_ovl_01(void *, s32, s32, s32);
s32 func_80032B8C_ovl_01(void *, s32);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_80059E30_ovl_01(s32, s32);
s32 func_80077D48_ovl_01(s32, void *, s32);
s32 func_80052C00_ovl_01(s32, s32);
s32 func_80052C9C_ovl_01(s32, s32, s32);
void func_801634C4_ovl_28(void *p, s32 b, s32 c){Obj634 *o=(Obj634*)p;u8 *g; s32 status=0;
if(o->pad[6]==0){*(u32*)(o->pad+0x1e8)=0x02000f00;if(o->flags&1)*(u32*)(o->pad+0x1e8)=0x020a0f00;func_800334F8_ovl_01(p,b,c,0);o->pad[6]=1;}else if(o->pad[6]!=1)return;
g=D_800C7650_ovl_01+0x18000;
func_80032DEC_ovl_01(p,*(s32*)(g+0x1aa8),*(s32*)(g+0x1ab0),8);func_800334F8_ovl_01(p,b,c,0);if(func_80089D34_ovl_01(p,b,c,0x100)){*(u32*)(o->pad+4)=0x01010000;o->pad[0x2b6]=15;}func_80032B8C_ovl_01(p,0);
if((*(u32*)*(u32**)(o->pad+0x214)&0x30000)==0)return;
func_80032DEC_ovl_01(p,*(s32*)(g+0x1aa8),*(s32*)(g+0x1ab0),0x10);
{ s16 bounds[8];bounds[0]=0x1f4;bounds[1]=0x183;bounds[2]=0;bounds[3]=0;bounds[4]=0x3e8;bounds[5]=0x183;bounds[6]=0;bounds[7]=0;
{void *base=(void*)(*(u32*)(o->pad+0x234)+0x908);s32 (*fn)(void*,void*,s32,void*)=(s32(*)(void*,void*,s32,void*))((u8*)func_80032DEC_ovl_01+0x118);if(fn(base,D_800E10F8_ovl_01,0x320,bounds))status=1;else if(fn(base,D_800E10F8_ovl_01,0x320,bounds+4))status=1;}}
if(status&&g[0x1cef]==0){func_80059E30_ovl_01(20,1);g[0x1c68]=5;g[0x1c69]=5;g[0x1c6a]=3;*(u16*)(g+0x1c60)=150;*(u16*)(g+0x1c62)=0;*(u16*)(g+0x1c64)=0;*(void**)(g+0x1cd0)=p;g[0x1cdc]|=0x12;g[0x1cef]|=0x80;*(s32*)(g+0x1ca4)=*(s32*)(o->pad+0x224);*(s32*)(g+0x1ca8)=*(s32*)(o->pad+0x228);D_800E10D4_ovl_01=0x02050100;o->flags&=0xfffe;func_80077D48_ovl_01(6,p,0x02050100);func_80052C00_ovl_01(2,0);func_80052C9C_ovl_01(6,250,0);}}
