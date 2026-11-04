typedef struct {u8 pad[0x2D4];} Obj;
extern s32 D_800E10F8_ovl_01[4]; extern s32 D_800C7650_ovl_01[];
extern s32 D_800E10D0_ovl_01; extern s32 D_800E8FC8_ovl_01;extern s32 D_800E1388_ovl_01;
extern s16 D_80168E70_ovl_28[];extern s16 D_80168E78_ovl_28[];
extern s32 D_80168E50_ovl_28[];extern s32 D_801126AC;extern s16 D_801126B4;
extern s32 func_80065400_ovl_01(void*,s32*,s32,s32);extern s32 func_80166F6C_ovl_28(void*);
extern s32 func_8016839C_ovl_28(void*,void*);extern s32 func_80168770_ovl_28(void*,void*);
extern s32 func_800342B0_ovl_01(void*,s32,void*,void*);
extern s32 func_80040E88_ovl_01(void*,void*,void*);
extern void func_80033678_ovl_01(void*);extern void func_8004DB8C_ovl_01(void*);extern void func_8004DCE8_ovl_01(void*,s32);
void func_80161C70_overlay_028(Obj *a){s32 p[4];u16 x;s32 i;s32 ret; s32 val;void *q;
for(i=0;i<4;i++)p[i]=D_800E10F8_ovl_01[i];
if(*(u16*)(a->pad+0x2B8)&8){if(D_800C7650_ovl_01[0x215FA/4]!=3)q=D_80168E70_ovl_28;else q=D_80168E78_ovl_28;i=a->pad[0x2B7]&15;p[0]=((s16*)q)[i*2];p[2]=((s16*)q)[i*2+1];}
func_80065400_ovl_01(a,p,0,0);
if(!(D_800C7650_ovl_01[0x1A60/4]&0x20000000)){if(a->pad[0x26F]&0x7f)a->pad[0x26F]--;
if(*(u16*)(a->pad+0x2B8)&2){a->pad[0x2B4]--;if(a->pad[0x2B4]==255){if(a->pad[0x2B5])a->pad[0x2B5]--;a->pad[0x2B4]=15;if(!a->pad[0x2B5])*(u16*)(a->pad+0x2B8)&=~2;}}
if(*(u16*)(a->pad+0x2B8)&4)*(u16*)(a->pad+0x2B8)|=1;
if(a->pad[0x2B6])a->pad[0x2B6]--;if(a->pad[0x2C8])a->pad[0x2C8]--;
a->pad[0x2BA]=(a->pad[0x2BA]+1)&63;ret=((s32(*)(void*,s32,s32))D_80168E50_ovl_28[a->pad[4]])(a,*(s32*)(a->pad+0x1A4),*(s32*)(a->pad+0x218));func_80166F6C_ovl_28(a);
func_800342B0_ovl_01(a,*(s16*)(a->pad+0x66),a->pad+0x28,D_800E10D0_ovl_01);x=*(u16*)(a->pad+0x28)&0xfff;if(x>=0x801)x-=0xfff;*(u16*)(a->pad+0x28)=x;
q=*(void**)(a->pad+0x234);*(u16*)((u8*)q+0x5a)+=x;func_80040E88_ovl_01((u8*)q+0x4c0,(u8*)q+0x470,(u8*)q+0x468);*(u16*)((u8*)q+0x5a)-=x;
func_8016839C_ovl_28(a,(u8*)q+0x5e0);func_80168770_ovl_28(a,(u8*)q+0x5e0);if(!(*(u16*)(a->pad+0x2B8)&0x40))func_80033678_ovl_01(a);func_8004DB8C_ovl_01(a);func_8004DCE8_ovl_01(a,0x400);
}}
