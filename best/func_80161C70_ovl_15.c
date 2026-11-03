extern u32 D_800C7650_ovl_01[];extern u32 D_800E10D0_ovl_01[];extern u32 D_800E8FC8_ovl_01[];extern u32 D_80165FD0_ovl_15[];
void func_8004DA70_ovl_01(void*,s32*);void func_8004D3D0_ovl_01(s32*,void*);void func_8016316C_ovl_15(void*);void func_80162D5C_ovl_15(void*);void func_800342B0_ovl_01(void*,s16);void func_800347E0_ovl_01(void*,s16);void func_80040E88_ovl_01(void*,void*);void func_80163094_ovl_15(void*);void func_801636C0_ovl_15(void*);void func_80033678_ovl_01(void*);
typedef struct{u32 f0;u8 pad4[0x230-4];u32* f230;u32* f234;u8 pad238[0x26f-0x238];u8 f26f;u8 pad270[0x2d0-0x270];void(*f2d0)(void*);u8 f2d4;}A;
void func_80161C70_ovl_15(A*p){u32*g=D_800C7650_ovl_01+0x18000/4;u32*s0;u32*q=p->f234;u32 v;u16 a,b,c;
if(g[0x1A60/4]&0x20000000)return;
*(u8*)((u8*)p+0x25D)=5;v=*(u8*)((u8*)p+0x26f);if(v&0x7f)*(u8*)((u8*)p+0x26f)=v-1;
((void(*)(A*,s32,s32,s32))D_80165FD0_ovl_15[*(u8*)((u8*)p+4)])(p,*(s32*)((u8*)p+0x1A4),*(s32*)((u8*)p+0x218),0);
func_80036764_ovl_01_510(p,*(s32*)((u8*)p+0x2BC),0,0);
*(u32*)((u8*)p+0x250)=(u32)D_800E10D0_ovl_01;*(s32*)((u8*)p+0x2BC)=*(u8*)((u8*)p+4);
*(u32*)((u8*)p+0x70)=(u32)((u8*)q+0xA80);*(u32*)p|=0x20000000;
{u32 t[3];t[0]=q[0xA94/4];t[1]=q[0xA98/4];t[2]=q[0xA9C/4];a=*(u16*)((u8*)p+0x64);b=*(u16*)((u8*)p+0x66);c=*(u16*)((u8*)p+0x68);*(u16*)((u8*)p+0x64)=0;*(u16*)((u8*)p+0x66)=0;*(u16*)((u8*)p+0x68)=0;func_8004DA70_ovl_01(p,(s32*)t);}
*(u16*)((u8*)p+0x64)=a;*(u16*)((u8*)p+0x66)=b;*(u32*)p&=0xFDFFFFFF;*(u32*)((u8*)p+0x70)=(u32)D_800E8FC8_ovl_01;*(u8*)((u8*)p+0xD)=255;*(u16*)((u8*)p+0x68)=c;
s0=(u32*)((u8*)D_800E10D0_ovl_01+0x2B8);while(s0!=(u32*)g[0x28C/4]){u32*e=(u32*)*s0;if(e!=(u32*)p&&(*e&1))func_8004D3D0_ovl_01(e,p);s0++;}
func_8016316C_ovl_15(p);func_80162D5C_ovl_15(p);
if(*(u16*)((u8*)p+0x2B4)&4){if(*(u8*)((u8*)p+0x25C)&4)func_800342B0_ovl_01(p,*(s16*)((u8*)p+0x66));else func_800347E0_ovl_01(p,*(s16*)((u8*)p+0x66));}
*(u16*)((u8*)q+0x92C)+=*(u16*)((u8*)p+0x2C6);func_80040E88_ovl_01((u8*)q+0x928,(u8*)q+0x8D8);*(u16*)((u8*)q+0x92C)-=*(u16*)((u8*)p+0x2C6);
*(u16*)((u8*)q+0xAA4)+=*(u16*)((u8*)p+0x2C4);func_80040E88_ovl_01((u8*)q+0xAA0,(u8*)q+0xA50);*(u16*)((u8*)q+0xAA4)-=*(u16*)((u8*)p+0x2C4);
if(!(*(u16*)((u8*)p+0x2B4)&2))func_80163094_ovl_15(p);
if((*(u32*)*(u32**)((u8*)p+0x214)&0xF8000000)==0x28000000)*(u8*)((u8*)p+0x2C3)=1;
func_801636C0_ovl_15(p);if((*(u32*)*(u32**)((u8*)p+0x214)&0xF8000000)==0x48000000)*(u8*)((u8*)p+0x2CE)=0x37;
func_80033678_ovl_01(p);
if(*(u8*)((u8*)p+0x2CE))(*(u8*)((u8*)p+0x2CE))--;if(*(u8*)((u8*)p+0x2C8))(*(u8*)((u8*)p+0x2C8))--;if(p->f2d0)p->f2d0(p);if(*(u8*)((u8*)p+0x2CF))(*(u8*)((u8*)p+0x2CF))--;if(*(u8*)((u8*)p+0x2CA))(*(u8*)((u8*)p+0x2CA))--;if(p->f2d4)p->f2d4--;*(u8*)((u8*)p+0x25D)=6;}
