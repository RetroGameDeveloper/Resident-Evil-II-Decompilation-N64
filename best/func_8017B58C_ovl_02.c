extern s32 D_8010B680_ovl_01,D_8010B684_ovl_01,D_80134450_ovl_01;
extern u8 D_801344B0_ovl_01[];
extern s32 D_80184AB0_ovl_02;
extern u8 D_801857A4_ovl_02;
extern void *D_80186C14_ovl_02;
void func_80180070_ovl_02(void); void func_8017B390_ovl_02(void);
s32 func_8017B454_ovl_02(s32);
s32 func_8009E8D4_ovl_01(void *,u16,u16,u16,s32);
s32 func_8009EBBC_ovl_01(void *,u16,u16,u16,s32);
void func_8017B58C_ovl_02(void *arg0) {
 s32 i; u8 *base; u16 a,b,c;
 func_80180070_ovl_02(); func_8017B390_ovl_02();
 D_80186C14_ovl_02=&D_801857A4_ovl_02;
 D_80184AB0_ovl_02=D_8010B680_ovl_01;
 *(s32*)((u8*)&D_80184AB0_ovl_02+4)=D_8010B684_ovl_01;
 func_8017B454_ovl_02(0);
 *(s32*)((u8*)&D_801857A4_ovl_02+4)=0;
 i=D_80134450_ovl_01; base=&D_801344B0_ovl_01[i*42];
 a=*(u16*)(base+4); b=*(u16*)(base+8); c=*(u16*)(base+10);
 func_8009E8D4_ovl_01(arg0,a,b,c,1);
 i=D_80134450_ovl_01; base=&D_801344B0_ovl_01[i*42];
 a=*(u16*)(base+4); b=*(u16*)(base+8); c=*(u16*)(base+10);
 func_8009EBBC_ovl_01(arg0,a,b,c,1);
}
