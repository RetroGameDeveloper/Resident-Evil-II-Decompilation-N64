extern void *D_8017E860_ovl_10; void func_8017D8E8_ovl_10(void){u16 t=*(u16*)((u8*)D_8017E860_ovl_10+2)+1;*(u16*)((u8*)D_8017E860_ovl_10+2)=t;if((s16)t>=0xb5){*(u16*)((u8*)D_8017E860_ovl_10+2)=0;*(u16*)D_8017E860_ovl_10=0;}}

extern s32 D_800C7650_ovl_01; extern s32 D_800C527C_ovl_01; extern u8 D_8017E6B4_ovl_10; extern s32 D_8017E864_ovl_10; extern s32 func_800479F8_ovl_01(s32,void*,s32,s32); extern s32 func_8003997C_ovl_01(s32,s32,s32); extern s32 func_8017E18C_ovl_10(s32);
void func_8017E0D0_ovl_10(void){s32 *p=(s32*)((u8*)&D_800C7650_ovl_01+0x18000);s32 b;if(!(p[0x1a3c/4]&0x100)&&(p[0x1a5c/4]&0x10000000)&&*(u8*)(p[0x1d3c/4]+4)==3)D_8017E6B4_ovl_10=1;func_800479F8_ovl_01(D_800C527C_ovl_01+0x3b800,&D_8017E864_ovl_10,0x14cf,0);b=*(s32*)((u8*)&D_8017E864_ovl_10+0x18)+0x200;func_8003997C_ovl_01(b,b,0x100);func_8017E18C_ovl_10(0xc68);}

extern s16 D_800E10C4_ovl_01; extern s32 D_800C527C_ovl_01; extern void *D_8017E860_ovl_10; extern void func_8017C96C_ovl_10(void); extern void func_8017CC6C_ovl_10(void);
void func_8017C820_ovl_10(void){void *p=(u8*)&D_800C527C_ovl_01+0x47a60;D_800E10C4_ovl_01=0x1f15;D_8017E860_ovl_10=p;*(s16*)p=0;*(s16*)((u8*)p+6)=0;func_8017C96C_ovl_10();func_8017CC6C_ovl_10();}

extern s16 D_8017E682_ovl_10; extern s32 D_8017E880_ovl_10; extern s32 func_800269B8_ovl_01(s32,void*,s32); extern void func_80075CCC_ovl_01(void); extern void func_8004CE04_ovl_01(void);
void func_8017C570_ovl_10(void){s32 *p=(s32*)((u8*)&D_800C7650_ovl_01+0x18000);D_8017E682_ovl_10=0;p[0x1a3c/4]&=0xffeffeff;func_800269B8_ovl_01(D_8017E880_ovl_10,p,0xbfffffff);func_80075CCC_ovl_01();func_8004CE04_ovl_01();}
