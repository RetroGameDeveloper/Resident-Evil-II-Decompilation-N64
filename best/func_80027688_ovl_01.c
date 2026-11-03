extern volatile s8 D_800E9118_ovl_01[]; extern volatile s8 D_800E9128_ovl_01[]; extern volatile s8 D_800C7650_ovl_01[];
void func_8002751C_ovl_01(s8 a,s16 b){volatile s8*p=D_800E9118_ovl_01;*(volatile s16*)(p+0xD6)=b;*(p+0xC8)=a;}
void func_800275F8_ovl_01(s32 a,s16 b,s32 c,u16*d){volatile u8*p=D_800E9128_ovl_01+a*0x2C;volatile u8*q=D_800C7650_ovl_01+0x18000;u8 x,y;x=p[0x13];*(volatile s16*)p=b;y=q[0x538];*(volatile s32*)(p+y*16+0x10)=c|((u32)x<<24);if(d){*(volatile u16*)(p+0x14)=d[0];*(volatile u16*)(p+0x16)=d[1];*(volatile u16*)(p+0x18)=d[2];*(volatile u16*)(p+0x1A)=d[3];}else{*(volatile u32*)(p+0x14)=0;*(volatile u32*)(p+0x18)=0x014000F0;}}
void func_80027688_ovl_01(s32 a){volatile s8*p=D_800E9118_ovl_01;*(volatile s16*)(p+a*0x2C+0x10)=-1;}
u32 func_800276B4_ovl_01(s32 a){volatile s8*p=D_800E9118_ovl_01;return (u32)*(volatile s16*)(p+a*0x2C+0x10)>>31;}
