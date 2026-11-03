/* identical to func_8016596C_ovl_15 (matched), with its names changed by decompdecomp */
extern s32 func_80033634_ovl_01(void);
extern s32 func_800377B0_ovl_01(s32,s32,s32,s16*);
void func_801724FC_overlay_043(void *arg0,s32 arg1,s32 arg2){
 s16 v[3]; s32 x,y,z,m,t;
 z=*(s32*)((u8*)arg0+0x234); x=arg1; y=arg2;
 t=func_80033634_ovl_01();
 v[0]=(s16)((t<<24)>>23);v[1]=-0x190;v[2]=0;
 t=func_80033634_ovl_01();
 m=(x<<24)|(y<<16); z+=0xA80;
 func_800377B0_ovl_01(m|0x2000,(t<<24)>>20,z,v);
 t=func_80033634_ovl_01(); v[0]=(s16)(((t<<24)>>23)+0x12C);v[1]=-0x12C;v[2]=0x384;
 t=func_80033634_ovl_01();
 func_800377B0_ovl_01(m|0x2000,(t<<24)>>20,z,v);
 t=func_80033634_ovl_01(); v[0]=(s16)(((t<<24)>>23)-0x258);v[1]=-0xC8;v[2]=-0x3E8;
 t=func_80033634_ovl_01();
 func_800377B0_ovl_01(m|0x2000,(t<<24)>>20,z,v);
 t=func_80033634_ovl_01();v[0]=(s16)(((t<<24)>>23)-0x190);v[1]=-0x190;v[2]=0xC8;
 t=func_80033634_ovl_01();
 func_800377B0_ovl_01(m|0x2800,(t<<24)>>20,z,v);
}
