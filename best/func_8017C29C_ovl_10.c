s32 func_80025B0C_ovl_01(void); s32 func_800269B8_ovl_01(s32); s32 func_8017C5E4_ovl_10(void); s32 func_8017C820_ovl_10(void); s32 func_8017C870_ovl_10(void); s32 func_8017E18C_ovl_10(s32);
extern u8 D_800C7650_ovl_01[]; extern u8 D_8017E680_ovl_10[]; extern u16 D_8017E684_ovl_10; extern u8 *D_8017E860_ovl_10; extern s32 D_8017E880_ovl_10;
void func_8017C29C_ovl_10(void) {
s16 __repair_argument;

 u8 *p; s16 i; s32 flags; u16 n; u8 *state;
 p=*(u8**)(D_800C7650_ovl_01+0x18000+0x27C); p=*(u8**)(p+0x2C);
 i=*(s16*)(D_800C7650_ovl_01+0x215FC); p+=i*0x28;
 flags=*(s32*)(D_800C7650_ovl_01+0x18000+0x1A3C);
 if(flags&0x100) { n=D_8017E684_ovl_10;
 if((u16)(n-6)<4){p[10]=255;p[11]=0;p[12]=0;*(u16*)(p+0x26)=0x4E20;}
 else if((u16)(n-10)<11){p[10]-=12;p[11]+=13;p[12]+=13;*(u16*)(p+0x26)-=0x4B0;}}
 __repair_argument = *(s16*)(state+4)==0;
state=D_8017E680_ovl_10;
 if(__repair_argument) {if((*(s32*)(D_800C7650_ovl_01+0x18000+0x1A3C)&0x100)&&!state[0x35]){func_8017E18C_ovl_10(0xC68);state[0x35]=1;}func_8017C820_ovl_10();}
 D_8017E880_ovl_10=func_80025B0C_ovl_01();func_800269B8_ovl_01(0);func_8017C870_ovl_10();func_8017C5E4_ovl_10();
 n=*(u16*)(state+4)+1;*(u16*)(state+4)=n;
 if((s16)n==0xAA){*(s16*)state=10;*(s16*)(state+0x36)=2;*(s16*)(state+0x2E)=16;*(s16*)(state+4)=0;*(u16*)(state+2)=*(u16*)(state+2)+1;}
 *(s16*)(D_8017E860_ovl_10+0x10F56)=1;p[4]=p[5]=p[6]=60;
}
