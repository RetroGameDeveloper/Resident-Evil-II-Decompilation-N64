typedef struct { u8 pad[0x18000]; u8 sub[0x1A64]; } BIG;
extern BIG D_800C7650_ovl_01;
extern u8 D_801153E0; extern u8 *D_8011A6B8_ovl_01; extern u8 func_8017E29C_ovl_04[];
extern u16 D_8017E6B8_ovl_10;
s32 func_80004A6C(s32,s32,s8,void*); s32 func_80052C00_ovl_01(s32,s32); s32 func_80052D40_ovl_01(s32,s32,s32,s32);
void func_8017B4B0_ovl_10(void) {
 s8 mode=14; s32 id; u8 *p; u8 *tab=(u8*)func_8017E29C_ovl_04; s16 *st=(s16*)(tab+0x3e4);
 st[3]=0x400; st[0]=0; st[2]=0; *(u8*)(st+0x1a)=0; *(s16*)((u8*)st+0x36)=0;
 if (*(s32*)(D_800C7650_ovl_01.pad+0x18000+0x1A3C)&0x100) { p=*(u8**)(D_800C7650_ovl_01.pad+0x18000+0x1CD0); id=p[8];
 if(id==0x34 && !(*(u16*)(p+0x1aa)&1)) mode=15; else if(id<0x20) mode=1;
 else { if(id==0x39) id=0x2e; if(*(u8*)(tab+0x3b8+mode)!=(u8)id) while(mode>0 && *(u8*)(tab+0x3b8+(s8)(mode-1))!=(u8)id) mode--; }
 D_8017E6B8_ovl_10=*(u16*)(tab+0x1f4+2*mode); }
 *(u32*)(D_800C7650_ovl_01.pad+0x18000+0x1A60)|=0x02000000;
 *(s32*)(D_800C7650_ovl_01.pad+0x18000+0x1A5c)|=0x140;
 if(*(s32*)(D_800C7650_ovl_01.pad+0x18000+0x1A3c)&4) { D_8011A6B8_ovl_01=&D_801153E0; func_80004A6C(1,0,mode,(void*)(D_800C7650_ovl_01.pad+0x18000)); *(s32*)(D_800C7650_ovl_01.pad+0x18000+0x1A5c)|=0x20; func_80052C00_ovl_01(5,5); func_80052C00_ovl_01(5,15); func_80052C00_ovl_01(10,25); func_80052D40_ovl_01(40,200,250,5); }
 else *(s32*)(D_800C7650_ovl_01.pad+0x18000+0x1A5c)&=0xf7ffffff; st[1]+=2;
}
