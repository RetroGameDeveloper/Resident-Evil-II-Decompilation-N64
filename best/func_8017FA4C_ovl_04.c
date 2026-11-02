extern u8 D_801806F0_ovl_04[]; extern s32 D_80180A58_ovl_04; extern u8 D_80180A5C_ovl_04[]; extern u8 D_80180CBC_ovl_04[]; extern u8 D_80181F14_ovl_04[]; extern u8 D_80181F6C_ovl_04[];
s32 func_80082230_ovl_01(void*,void*,s32); s32 func_8000C9E0(void*,s32,s32); s32 func_8000CB60(void*,s32,s32); s32 func_8000DE9C(void*,void*,s32); s32 func_800879D0_ovl_01(void*);
void func_8017FA4C_ovl_04(void *arg0,u8 *arg1,s16 arg2,s32 arg3,s32 arg4,s32 arg5) {
u8 *p=D_80180CBC_ovl_04; u8 *q=D_80180A5C_ovl_04; u8 *f0=D_801806F0_ovl_04; u8 *f1=D_80181F14_ovl_04; s32 v; u8 c; volatile s32 frame[2]; frame[0]=1;
*(s32*)q=7; *(u8**)(p+4)=q; *(s16*)(p+0x1c)=arg2; *(u8**)(p+4)=(u8*)&D_80180A58_ovl_04; *(s32*)(p+0x14)=arg4; *(s32*)(p+0x18)=arg3;
func_80082230_ovl_01(p+0x22,0,0x10);func_80082230_ovl_01(p+0x1e,arg1+0x10,4);
*(s32*)(p+0xc)=0; *(s32*)(p+8)=arg5; *(void**)(p+0x34)=arg0; *(u8**)(p+0x38)=f1; c=*(u8*)f0;
if(c){func_800879D0_ovl_01(q);func_8000C9E0(f1,0,1);}else{v=(((arg1[0x12]-0x1a)*10)-0x1a+arg1[0x13])*0x824+arg5;func_8000DE9C(f1+0x58,(void*)(v+(s32)D_80181F6C_ovl_04),*(s32*)(p+0x14));func_8000CB60(*(void**)(p+0x38),0,0);D_80180A58_ovl_04=0;}
}
