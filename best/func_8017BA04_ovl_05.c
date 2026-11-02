s32 func_80026948_ovl_01(s32,s32,u32*); s32 func_800269B8_ovl_01(s32); s32 func_80026AC0_ovl_01(void); s32 func_8002751C_ovl_01(s32,s32,void*); s32 func_8004CE04_ovl_01(void); s32 func_8004CEF4_ovl_01(s32);
extern s32 D_800E9118_ovl_01; extern s32 D_800E90C0_ovl_01,D_800E90C4_ovl_01; extern u32 D_8010BF48_ovl_01; extern s32 D_8017E534_ovl_05,D_8017E538_ovl_05,D_8017E554_ovl_05; extern u8 D_8017E53F_ovl_05,D_8017E54B_ovl_05,D_8017E54E_ovl_05;
struct Big { u8 pad[0x18000]; u8 sub[0x22000]; }; extern struct Big D_800C7650_ovl_01;
void func_8017BA04_ovl_05(void) { s32 *obj; u32 bits; u32 v; u8 state;
 state=D_8017E54B_ovl_05; *(u8*)((u8*)&D_800E9118_ovl_01+0xcb)=state; bits=D_8017E53F_ovl_05;
 if(bits&0x10){v=*(u32*)(D_800C7650_ovl_01.sub+0x1a3c); v|=0x1000; *(u32*)(D_800C7650_ovl_01.sub+0x1a3c)=v;}
 v=*(u32*)(D_800C7650_ovl_01.sub+0x1a3c); if(!(v&0x08000000)){
 obj=*(s32**)(D_800C7650_ovl_01.sub+0x27c); if(obj) *(s32*)((u8*)obj+0x2c)=D_8017E554_ovl_05;
 *(u8*)((u8*)&D_800E9118_ovl_01+0xe)=2; *(s16*)(D_800C7650_ovl_01.sub+0x215fc)=D_8017E54E_ovl_05;
 func_8002751C_ovl_01(0,0,D_800C7650_ovl_01.sub);
 }
 func_8004CEF4_ovl_01(0); func_800269B8_ovl_01(D_8017E534_ovl_05); D_800E90C4_ovl_01=-1; D_800E90C0_ovl_01=-1; D_8010BF48_ovl_01>>=1; func_80026948_ovl_01(D_8017E538_ovl_05,-1,&D_8010BF48_ovl_01); func_80026AC0_ovl_01(); func_8004CE04_ovl_01();
}
