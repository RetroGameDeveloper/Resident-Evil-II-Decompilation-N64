typedef struct {u8 pad0[4]; s32 f4; u8 pad8[0x20]; s32 f28; u8 pad2c[4]; s32 f30; u8 pad34[0x170]; s32 f1a4; u8 pad1a8[0x40]; s32 f1e8; u8 pad1ec[8]; s16 f1f4; u8 pad1f6[0x22]; s32 f218; u8 pad21c[0x34]; s32 f250; u8 pad254[8];u8 f25c;u8 pad25d[0x12];u8 f26f;} O;
extern s32 func_80089D34_ovl_01(void*,s32,s32,s32); extern void func_80077B0C_ovl_01(s32,void*); extern u8 D_80167F64_ovl_30[];
void func_80166AD4_ovl_30(O*p){s32 a1=p->f1a4;u8 st=*(u8*)((u8*)p+6);s32 a2=p->f218;s32 n;u8 k;u8 *obj;
if(st){if(func_80089D34_ovl_01(p,a1,a2,0x100)){p->f4=0x1000000;p->f25c&=0xfe;p->f26f&=0x7f;return;}}
else {*(u8*)((u8*)p+6)=1;p->f25c|=1;*(s32*)((u8*)p+0x1e8)=((*(u8*)((u8*)p+5)+1)<<24)+0xf00;func_80089D34_ovl_01(p,a1,a2,0x100);func_80077B0C_ovl_01((((s32)p->f1f4+1)<<16)|0x04000001,(u8*)p+0x28);}
obj=*(u8**)((u8*)p+0x250);n=(*(u32*)*(u32**)(obj+0x214)>>20)&15;
if(n){k=D_80167F64_ovl_30[n-1];obj=*(u8**)(obj+0x234)+(k*0x2f-k)*8;p->f28=*(s32*)(obj+0x4c);p->f30=*(s32*)(obj+0x54);}}
