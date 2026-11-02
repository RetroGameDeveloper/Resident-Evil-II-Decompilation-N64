extern u32 D_800C7650_ovl_01; extern u8 D_800E9118_ovl_01;
extern u8 D_8017E53F_ovl_05,D_8017E549_ovl_05,D_8017E54A_ovl_05,D_8017E54D_ovl_05; extern u32 D_8017E550_ovl_05;
s32 func_80077B0C_ovl_01(s32,s32,s32);
void func_8017CF64_ovl_05(void) {
 u32 flags=*(u32*)((u8*)&D_800C7650_ovl_01+0x18000+0x268);
 u32 color; u8 prev;
 if((flags&0x3000)==0) return;
 color=0x2C808080;
 D_8017E549_ovl_05=2; D_8017E54A_ovl_05=0; D_8017E550_ovl_05=color; D_8017E54D_ovl_05=0;
 D_8017E53F_ovl_05 |= 8;
 prev=*(u8*)((u8*)&D_800E9118_ovl_01+0xCB);
 *(u8*)((u8*)&D_800E9118_ovl_01+0xCB)=prev;
 color=0x04050000;
 if(flags&0x1000) color=0x04060000;
 func_80077B0C_ovl_01(color,0,flags);
}
void func_8017DB10_ovl_05(void) {}
