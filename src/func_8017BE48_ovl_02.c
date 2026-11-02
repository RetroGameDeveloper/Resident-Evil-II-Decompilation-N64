typedef struct G { u32 unk0; u32 unk4; u32 unk8; u32 unkC; u32 unk10; u32 unk14; u32 unk18; } G;
extern G *D_80186C14_ovl_02; extern G D_80184ABC_ovl_02;
extern s32 func_8017B48C_ovl_02(s32, void *, s32); extern s32 func_8017BB68_ovl_02(s32);
u32 func_8017BB30_ovl_02(s32 arg0){return D_80186C14_ovl_02->unkC >> (0x20-arg0);}
u8 func_8017B874_ovl_02(void){G*g=D_80186C14_ovl_02;u32 t;if(g->unk8 >= g->unk0+0x800){do{func_8017B48C_ovl_02(g->unk4,g,0x800);g->unk8-=0x800;g->unk18-=0x800;}while(g->unk8 >= g->unk0+0x800);}t=g->unk8;g->unk8=t+1;return *(u8*)t;}
s32 func_8017BE48_ovl_02(s32 arg0){s32 x=func_8017BB30_ovl_02(arg0);func_8017BB68_ovl_02(arg0);return x;}
void func_8017B568_ovl_02(G *arg0){D_80184ABC_ovl_02.unk0=arg0->unk0;D_80184ABC_ovl_02.unk4=arg0->unk4;D_80184ABC_ovl_02.unk8=arg0->unk8;}
