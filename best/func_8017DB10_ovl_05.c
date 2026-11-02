extern s32 D_800C7650_ovl_01,D_800E9118_ovl_01; extern u8 func_8017E29C_ovl_04[];
s32 func_80077B0C_ovl_01(s32,s32,s32);
void func_8017CF64_ovl_05(void){
 s32 flags=*(s32*)((u8*)&D_800C7650_ovl_01+0x18000+0x268); s32 col;
 if((flags&0x3000)==0) return;
 func_8017E29C_ovl_04[0x2ad]=2; func_8017E29C_ovl_04[0x2ae]=0;
 *(s32*)(func_8017E29C_ovl_04+0x2b4)=0x2C808080;
 func_8017E29C_ovl_04[0x2b1]=0;
 func_8017E29C_ovl_04[0x2a3] |=8;
 *(u8*)((u8*)&D_800E9118_ovl_01+0xcb)=*(u8*)((u8*)&D_800E9118_ovl_01+0xcb);
 col=0x04050000; if(flags&0x1000) col=0x04060000;
 func_80077B0C_ovl_01(col,0,0);
}
extern s32 D_8010B688_ovl_01,D_8017E530_ovl_05; extern u8 D_8017E53C_ovl_05,D_8017E53E_ovl_05; extern u8 D_8017DD8C_ovl_05,D_8017E514_ovl_05; extern u8 func_8017E29C_ovl_04[];
s32 func_80004CFC(u16,s32,u32,void*,s32,s32); s32 func_8002607C_ovl_01(s32); s32 func_800479F8_ovl_01(s32,void*,s32,s32);
void func_8017DB10_ovl_05(void){
 s32 result; u16 pair[2];
 pair[0]=0x14CA; pair[1]=0x14C9;
 result=func_80004CFC(pair[func_8017E29C_ovl_04[0x2a0]],D_8010B688_ovl_01,0x80000000,&D_8017DD8C_ovl_05,0x14CA,0x14C9);
 func_8002607C_ovl_01(D_8010B688_ovl_01);
 if(func_8017E29C_ovl_04[0x2a0]==0) result=func_800479F8_ovl_01(D_8017E530_ovl_05,&D_8017E514_ovl_05,0x14CB,1);
 if(result==-1) func_8017E29C_ovl_04[0x2a2] |=1;
 func_8017E29C_ovl_04[0x2ad]=0;
}
