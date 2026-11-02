extern s32 func_8007530C_ovl_01(s32,s32,s32); extern s32 func_80004CFC(s32,s32,s32,void*);
extern u8 D_800C7650_ovl_01[],D_800C527C_ovl_01[];
extern void *D_8011A238; extern u8 D_80115D78[],D_80115D7C[],D_80115D80[],D_80115D84[],D_80115D88[],D_80115D8C[];
extern void func_8017E2F0_ovl_10(void);
void func_8017E18C_ovl_10(void){
 u8 id=*(D_800C7650_ovl_01+0x18000+0x1A88);
 if(id>=16){func_8007530C_ovl_01(0x19C,8,1);D_8011A238=D_80115D78;goto L; }
 switch(id){
 case 0:func_8007530C_ovl_01(0x19D,8,1);D_8011A238=D_80115D7C;goto A;
 case 1:func_8007530C_ovl_01(0x19E,8,1);D_8011A238=D_80115D88;goto B;
 case 2:func_8007530C_ovl_01(0x19F,8,1);D_8011A238=D_80115D8C;goto C;
 case 3:func_8007530C_ovl_01(0x1A0,8,1);D_8011A238=D_80115D80;goto D;
 case 4:func_8007530C_ovl_01(0x1A1,8,1);D_8011A238=D_80115D84;goto E;
 default: return;
 }
A: {s32 a0=0x658; func_80004CFC(a0,*(s32*)D_800C527C_ovl_01+0x3100,1,func_8017E2F0_ovl_10);} return;
B:{s32 a0=0x65B;func_80004CFC(a0,*(s32*)D_800C527C_ovl_01+0x3100,1,func_8017E2F0_ovl_10);}return;
C:{s32 a0=0x65C;func_80004CFC(a0,*(s32*)D_800C527C_ovl_01+0x3100,1,func_8017E2F0_ovl_10);}return;
D:{s32 a0=0x659;func_80004CFC(a0,*(s32*)D_800C527C_ovl_01+0x3100,1,func_8017E2F0_ovl_10);}return;
E:{s32 a0=0x65A;func_80004CFC(a0,*(s32*)D_800C527C_ovl_01+0x3100,1,func_8017E2F0_ovl_10);}return;
L:func_80004CFC(0x657,*(s32*)D_800C527C_ovl_01+0x3100,1,func_8017E2F0_ovl_10);
}
