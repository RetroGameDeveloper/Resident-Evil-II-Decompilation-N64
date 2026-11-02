extern u8 D_800C7650_ovl_01[]; extern u8 D_800E9128_ovl_01[];
void func_80027530_ovl_01(u32 arg0,s16 arg1,s32 arg2,s8 arg3) {
 s16 t=arg1; u8 *p;
 if((*(u32*)(D_800C7650_ovl_01+0x18000+0x1A3C))&0x02000000) t=arg1*2;
 p=D_800E9128_ovl_01+(arg0&0xff)*0x2c;
 p[4]=(u8)(arg0>>8); *(s16*)(p+2)=t; p[8]=arg3;
 p[5]=(arg2&4)?0xff:0; p[6]=(arg2&2)?0xff:0; p[7]=(arg2&1)?0xff:0;
 if((t<<16)<0) *(s16*)p=t+0x8000; else *(s16*)p=0;
}
