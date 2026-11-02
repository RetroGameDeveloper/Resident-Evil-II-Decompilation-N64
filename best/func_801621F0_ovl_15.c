typedef struct {u8 p[4];s32 state;u8 tail[0x2b8];} Obj;
extern s32 D_80165FF0_ovl_15[],D_80166010_ovl_15[],D_800C7650_ovl_01[];
void func_801621F0_ovl_15(Obj*p,s32 a,s32 b){s32 *tab=D_80165FF0_ovl_15; s32 ix=p->p[5]; s32(*f)(Obj*,s32,s32)=(void*)(tab+ix); f(p,a,b);func_80036764_ovl_01(p,*(s32*)((u8*)p+0x2bc)); *(s32*)((u8*)p+0x2bc)=p->state; p->p[5]=p->p[5]; f=(void*)(D_80166010_ovl_15+p->p[5]);f(p,a,b);}
void func_80162698_ovl_15(Obj*p){func_80162CE0_ovl_15(p);if(((u8*)p)[0x2b6]==1){s32*base=(s32*)((u8*)D_800C7650_ovl_01+0x18000);if(base[0x25e0/4]-*(s32*)((u8*)p+0x30)<0x251c)p->state=0x1010000;}if(*(u32*)((u8*)p+0x28c)<90)p->state=0x1010000;if(((u8*)p)[0x2d4])p->state=0x1010000;}
void func_8016271C_ovl_15(Obj*p){if(!((u8*)p)[6]&&func_80036764_ovl_01(p,1,4,0))p->state=0x1020000;}
