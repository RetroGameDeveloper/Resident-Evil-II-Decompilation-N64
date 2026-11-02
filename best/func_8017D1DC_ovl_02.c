extern s32 func_8017BE48_ovl_02(s32); extern s32 func_8017BB68_ovl_02(s32); extern void func_8017D59C_ovl_02(void);
extern u8 D_80185420_ovl_02[64]; extern u8 D_801854A0_ovl_02[64]; extern s32 D_801856C4_ovl_02,D_801856C8_ovl_02; extern u8 *D_80186C14_ovl_02;
void func_8017D1DC_ovl_02(void){s32 i; u8 *p;
D_801856C4_ovl_02=func_8017BE48_ovl_02(12); D_801856C8_ovl_02=func_8017BE48_ovl_02(12); func_8017BE48_ovl_02(4);func_8017BE48_ovl_02(4);func_8017BE48_ovl_02(18);func_8017BB68_ovl_02(1);func_8017BE48_ovl_02(10);func_8017BE48_ovl_02(1);
if(func_8017BE48_ovl_02(1)){for(i=0;i<64;i++)*(s32*)(D_80186C14_ovl_02+4*D_80185420_ovl_02[i]+0x1c)=func_8017BE48_ovl_02(8);}
else {p=D_80186C14_ovl_02;for(i=0;i<64;i++){*(s32*)(p+0x1c)=D_801854A0_ovl_02[i];p+=4;}}
if(func_8017BE48_ovl_02(1)){for(i=0;i<64;i++)*(s32*)(D_80186C14_ovl_02+4*D_80185420_ovl_02[i]+0x11c)=func_8017BE48_ovl_02(8);}
else {for(i=63,p=D_80186C14_ovl_02+0xfc;i>=0;i--,p-=4)*(s32*)(p+0x11c)=16;}
for(i=0,p=D_80186C14_ovl_02;i<64;i++,p+=4){*(s32*)(p+0x21c)=*(s32*)(p+0x1c);*(s32*)(p+0x31c)=*(s32*)(p+0x11c);}func_8017D59C_ovl_02();}
