extern u8 D_800C7650_ovl_01[]; extern u16 D_8017E680_ovl_10[];
s32 func_80027530_ovl_01(s32,s32,s32,s32); s32 func_8017C5E4_ovl_10(void); void *func_8017C870_ovl_10(s16,s32);
void func_8017C470_ovl_10(void) {
 s32 idx; u8 *p,*d; u16 n,v; u8 a,b,c,az,bz,cz;
 d=D_800C7650_ovl_01; idx=*(s16 *)(d+0x215fc); d+=0x18000; p=*(u8 **)(*(u8 **)(d+0x27c)+0x2c); p+=idx*0x28;
 func_8017C870_ovl_10(idx,0x18000);func_8017C5E4_ovl_10();
 n=*(u16 *)(D_8017E680_ovl_10+4);n++;*(u16 *)(D_8017E680_ovl_10+4)=n;
 if((s16)n==0x6e)func_80027530_ovl_01(0x200,0x200,7,3);
 if((s16)n>=0xa3)++*(u16 *)(D_8017E680_ovl_10+2);
 a=p[4];b=p[5];c=p[6];az=a!=0;bz=b!=0;cz=c!=0;p[4]=a-az;p[5]=b-bz;p[6]=c-cz;
 v=*(u16 *)(p+0x22);if(v>=0x65)v-=0x64;*(u16 *)(p+0x22)=v;
}
