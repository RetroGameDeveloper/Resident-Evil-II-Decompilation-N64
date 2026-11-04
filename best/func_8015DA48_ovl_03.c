extern u8 D_80160B9C_ovl_03[];extern u8 D_800C7650_ovl_01[];extern u8 D_80160BA2_ovl_03;
void func_8015DA48_ovl_03(void){
char *__repair_addr;
u8 *s=D_80160B9C_ovl_03;u8 *g=D_800C7650_ovl_01;s16 n;u8 c,d;s32 a;
n=*(s16*)(s+16)+*(s16*)(s+18);*(s16*)(s+16)=n;func_800275F8_ovl_01(3,n,0);if(func_800276B4_ovl_01(3)){*(s16*)(s+18)=0;*(s16*)(s+16)=-1;}
__repair_addr = (char *)(g+0x18268);

if((*(u32*)(__repair_addr)&4096)||(*(u32*)(g+0x18258)&2048)){if(func_800276B4_ovl_01(3)){if(s[6]!=0)goto mode1;s[0]=2;s[1]=3;*(u32*)(g+0x19a3c)|=0x20000;func_80077B0C_ovl_01(0x04000000,0);func_80027530_ovl_01(256,-2048,7,1);while(!func_800276B4_ovl_01(0)){func_8015F95C_ovl_03(128,128,1);func_8015F790_ovl_03();func_8004CDB8_ovl_01(1);}a=128;goto run;
mode1:s[0]=1;g[0x21962]=0;func_80077B0C_ovl_01(0x04050000,0);a=0x1800;*(u32*)(g+0x19a3c)&=~9;
run:func_80027530_ovl_01(512,a,7,1);func_800275F8_ovl_01(0,512,0x1085,0);while(!func_800276B4_ovl_01(0)){func_8015F95C_ovl_03(128,128);func_8015F790_ovl_03();func_8004CDB8_ovl_01(1);}func_80027530_ovl_01(512,0,7,1);func_800275F8_ovl_01(0,32767,65535,0);func_8004CDB8_ovl_01(1);if(D_80160BA2_ovl_03)func_800760BC_ovl_01(17,0);func_8015B204_ovl_03();return;}*(s16*)(s+18)=-4096;}
c=s[7]+s[8];s[7]=c;if((u8)(c-1)>=48)s[8]=-s[8];if(*(u16*)(g+0x1825e)&4096)if(s[6]==1){func_80077B0C_ovl_01(0x04040000,0);s[6]=0;}if(*(u16*)(g+0x1825e)&16384)if(s[6]==0){func_80077B0C_ovl_01(0x04040000,0);s[6]=1;}c=s[10]+16;s[10]=c;if(c&128)s[10]=128;d=s[11]+16;s[11]=d;if(d&128)s[11]=128;func_8015F95C_ovl_03(s[11],s[10],0);func_8015F790_ovl_03();}
